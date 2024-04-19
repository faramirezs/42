/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:30:16 by alramire          #+#    #+#             */
/*   Updated: 2023/08/06 16:28:23 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int main (void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
