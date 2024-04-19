/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:29:11 by alramire          #+#    #+#             */
/*   Updated: 2023/08/10 14:45:00 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i;
		int	len;
		int	j;

		i = 0;
		len = 0;
		j = 0;

		while (argv[1][len])
		{
			len++;
		}
		while (argv[2][j] && i < len)
		{
			if (argv[2][j] == argv [1][i])
			{
				i++;
			}
			j++;
		}
		if (i == len)
		{
			write(1, argv[1], len);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
