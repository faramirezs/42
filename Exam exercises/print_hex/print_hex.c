/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:41:46 by alramire          #+#    #+#             */
/*   Updated: 2023/08/10 12:50:25 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Define a function named 'ft_atoi' that takes a pointer to a character array (string) as an argument.
int	ft_atoi(const char *str)
{
	// Declare variables for index, number, and sign.
	int		i;
	int		nbr;
	int		sign;

	// Initialize variables.
	i = 0;
	sign = 1;
	nbr = 0;

	// Skip any leading whitespace characters.
	while(str[i] == ' ' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\t' )
		i++;

	// Check if the number is negative.
	if (str[i] == '-')
		sign = -1;

	// If the number is negative or positive, move the index past the sign.
	if (str[i] == '+' || str[i] == '-')
		i++;

	// Convert string to integer.
	while (str[i] >= 48 && str[i] <= 57) // ASCII values for digits 0 to 9
	{
		nbr *= 10; // Multiply the current number by 10 to shift digits to the left.
		nbr += str[i] - '0'; // Convert character to integer and add to the number.
		i++;
	}

	// Apply the sign to the final number.
	nbr *= sign;

	// Return the parsed integer.
	return (nbr);
}

// Define the main function that takes command line arguments.
int		main(int argc, char **argv)
{
	// Check if there are exactly 2 arguments provided.
	if (argc == 2)
	{
		int	value;
		int i;
		int str[64]; // An array to store the remainder values during base conversion.
		char base[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}; // Characters for hexadecimal representation.

		// Convert the argument string to an integer using the ft_atoi function.
		value = ft_atoi(argv[1]);

		i = 0;

		// Check if the value is negative.
		if (value < 0)
		{
			write(1, "\n", 1); // Print a newline character.
			return (0); // Exit the program.
		}

		// Check if the value is zero.
		if (value == 0)
		{
			write(1,"0\n", 2); // Print "0" followed by a newline character.
			return (0); // Exit the program.
		}

		// Convert the decimal value to hexadecimal by repeatedly dividing by 16.
		while (value != 0)
		{
			str[i] = value % 16; // Store the remainder in the array.
			value = value / 16; // Update the value by dividing it by 16.
			i++;
		}

		i--; // Decrement i to account for the last increment in the loop.

		// Print the hexadecimal representation by indexing the base array using the remainders.
		while (i >= 0)
		{
			write(1, &base[str[i]], 1); // Write the corresponding character to the standard output.
			i--;
		}
	}

	write(1, "\n", 1); // Print a newline character.
	return(0); // Exit the program.
}
