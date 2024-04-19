/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:50:55 by alramire          #+#    #+#             */
/*   Updated: 2023/08/09 14:21:49 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char *str)
{
    int i;              // Index for iterating through characters of input string
    int j;              // Index for iterating through characters of split string
    int k;              // Index for iterating through split array
    char **split;       // Array of pointers to hold split strings

    i = 0;
    k = 0;

    // Allocate memory for an array of char pointers to hold the split strings
    if (!(split = (char **)malloc(sizeof(char *) * 256)))
        return (NULL);

    // Skip initial whitespace characters in the input string
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i += 1;

    // Loop through the characters of the input string
    while (str[i])
    {
        j = 0;

        // Allocate memory for a split string
        if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return (NULL);

        // Loop to copy characters from input string to split string
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];

        // Loop to skip whitespace characters
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i += 1;

        // Add null-terminator to the end of the split string
        split[k][j] = '\0';

        // Move to the next index in the split array
        k += 1;
    }

    // Terminate the split array with a NULL pointer
    split[k] = NULL;

    // Return the array of split strings
    return (split);
}
