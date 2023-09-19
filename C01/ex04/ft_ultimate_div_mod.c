/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:36:11 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/04 18:18:58 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a / *b;
	*b = *a % *b;
	*a = i;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i", a, b);
}*/
