/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:57:26 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/13 11:46:50 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= (nb / n))
	{
		if (nb % n == 0)
			return (0); 
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	printf("%d", ft_find_next_prime(atoi(av[ac -1])));
}*/
