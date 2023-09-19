/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:41:23 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 20:00:41 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("%i", ft_iterative_factorial(atoi(argv[argc -1])));
}
*/
