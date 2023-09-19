/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:50:35 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/03 12:31:25 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int 	i;
	int	j;
	int	*pdiv;
	int	*pmod;

	i = 6;
	j = 2;
	pdiv = &i;
	pmod = &j;

	ft_div_mod(i, j, pdiv, pmod);
	printf("%d, %d", i, j);
	
	return(0);
}*/
