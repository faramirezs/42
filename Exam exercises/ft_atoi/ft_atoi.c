/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:23:09 by alramire          #+#    #+#             */
/*   Updated: 2023/08/10 09:50:06 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i;       // Index to iterate through characters in the input string
    int sign;    // Holds the sign of the integer (1 for positive, -1 for negative)
    int n;       // Accumulator to build the final integer value

    i = 0;
    sign = 1;
    n = 0;

    // Skip any leading whitespace characters (9-13 are ASCII values of tabs and newlines, 32 is space)
    while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
        i++;

    // Check if the next character is a '-' indicating a negative number
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    // Check if the next character is a '+' indicating a positive number (ignored)
    else if (str[i] == '+')
        i++;

    // Convert consecutive digits to an integer value
    while ((str[i] >= '0' && str[i] <= '9') && str[i])
    {
        n = n * 10 + (str[i] - '0'); // Convert ASCII digit to integer value and accumulate
        i++;
    }

    // Multiply the accumulated integer by the sign to get the final result
    return (n * sign);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi("123456789")); // Call ft_atoi with the input string "123456789" and print the result
    return (0);
}
