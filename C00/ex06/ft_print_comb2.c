/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:00:54 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/03 11:57:39 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(int a, int b)
{
	char	c;

	c = '0' + (a / 10);
	write(1, &c, 1);
	c = '0' + (a % 10);
	write(1, &c, 1);
	write(1, " ", 1);
	c = '0' + (b / 10);
	write(1, &c, 1);
	c = '0' + (b % 10);
	write(1, &c, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_number(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}

