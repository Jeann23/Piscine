/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:48:45 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/03 14:24:49 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int main (void)
{
	int	c;
	int	d;

	c = 1;
	d = 2;
	printf("inicialmente c = %i e d = %d", c, d);
	ft_swap(&c, &d);
	printf("apos a troca, c = %d e d = %d", c, d);
}*/
