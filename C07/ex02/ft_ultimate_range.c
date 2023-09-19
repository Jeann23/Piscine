/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos  <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:00:05 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 18:04:15 by jecarlos         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	return (max - min);
}
/*
int main(int argc, char **argv)
{
	int **a;
	int size;
	int i;
	a = (int **)malloc(sizeof(int *));
	if(argc > 2)
	{
		ft_ultimate_range(a, atoi(argv[1]), atoi(argv[2]));
		size = atoi(argv[2]) - atoi(argv[1]);
		i = 0;
		while(i < size)
		{
			printf("%d\n", a[0][i]);
			i++;
		}
	}
} */
