/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:26:30 by alramire          #+#    #+#             */
/*   Updated: 2023/08/08 12:37:20 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int *rrange;

	i = 0;
	if (start <= end)
	{
		rrange = (int *)malloc(sizeof(int) * (end - start +1));
		while (start <= end)
		{
			rrange[i] = start;
			start++;
			i++;
		}
		return(rrange);
	}
	else
	{
		rrange = (int *)malloc(sizeof(int) * (start - end +1));
		while (start >= end)
		{
			rrange[i] = start;
			start--;
			i++;
		}
		return(rrange);
	}
}
int main()
{
    int i;
    int *arr = ft_rrange(-5, -7);

    printf("Elements in array are: ");
    for (i = 0; i < 1; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    free(arr); // Don't forget to free the allocated memory
    return 0;
}
