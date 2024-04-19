/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:57:00 by alramire          #+#    #+#             */
/*   Updated: 2023/08/08 10:15:25 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argv;
	i = 0;
	if (argc > 0)
	{
		while (i < argc -1)
		{
			i++;
		}
		ft_putnbr(i);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
