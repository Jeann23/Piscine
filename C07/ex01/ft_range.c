/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos  <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:39:30 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 15:20:17 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*a;

	if (min >= max)
		return (NULL);
	size = max - min;
	a = (int *)malloc(sizeof(int) * (size));
	i = 0;
	while (i < size)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
/*
int	main(int argc, char **argv)
{
	int	*a;
	int	size;
	int	i;

	if (argc > 2)
	{
		a = ft_range(atoi(argv[1]), atoi(argv[2]));
		size = atoi(argv[2]) - atoi(argv[1]);
		i = 0;
		while (i < size)
		{
			printf("%d\n", a[i]);
			i++;
		}
	}
} */
