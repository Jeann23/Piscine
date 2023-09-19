/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:00:13 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/03 14:25:49 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = b;
		a++;
	}
}
/*
int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5, 6};
	int	size1;
	int	i;

	i = 0;
	size1 = 6;
	ft_rev_int_tab(tab1, size1);
	while (i < size1)
	{
		printf("%d", tab1[i]);
			i++;
	}
}
*/
