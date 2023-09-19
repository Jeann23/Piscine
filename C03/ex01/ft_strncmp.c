/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:06:23 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/09 13:08:26 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	stg1[] = {"fghhgf"};
	char	stg2[] = {"fgHH5"};
	int	a;
	int	b;


	a = ft_strncmp(stg1, stg2, 2);
	printf("a=%i\n", a);
	b = strncmp(stg1, stg2, 2);
	printf("b=%i", b);
}*/
