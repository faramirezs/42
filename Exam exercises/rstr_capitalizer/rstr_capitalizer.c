/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:29:55 by alramire          #+#    #+#             */
/*   Updated: 2023/08/09 12:04:27 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32; //Volverlo minusculas
		}
		i++;
	}
	return(str);
}

void	ft_capitalizer(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	ft_lowercase(str);
	while (str[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] -=32;
				j = 0;
			}
		}
		else if ((str[i] >= '0' && str[i] <= '9') || (str[i] == 39))
		{
			j = 0;
		}
		else
		{
			j = 1;
		}
		i--;
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			ft_capitalizer(argv[j]);
			write(1, "\n", 1);
			j++;
		}

	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
