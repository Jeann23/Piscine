/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:38:37 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 19:00:31 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	long	b;

	b = nb;
	if (b < 0)
	{
		a = '-';
		write (1, &a, 1);
		b = b * -1;
	}
	if (b >= 10)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
	else 
	{
		a = b + '0';
		write(1, &a, 1); 
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	ft_putnbr(atoi(argv[argc -1]));
}

