/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:33:48 by alramire          #+#    #+#             */
/*   Updated: 2023/08/09 10:30:32 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void	str_capitalizer(char *str)
{
	int	r;
	int	i;

	r = 1;
	ft_lowercase(str);
	i = 0;
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				if (r == 1)
					str[i] -= 32;
				r = 0;
			}
			else if (str[i] == 39)
				r = 0;
			else if (str[i] >= '0' && str[i] <= '9')
				r = 0;
			else
				r = 1;
			write(1, &str[i], 1);
			i++;
		}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			str_capitalizer(argv[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);

}
