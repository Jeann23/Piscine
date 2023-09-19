/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:03:19 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/13 15:19:33 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("%i", ft_recursive_factorial(atoi(argv[argc -1])));
}
*/
