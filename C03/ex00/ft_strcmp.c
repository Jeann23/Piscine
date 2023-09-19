/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:33:17 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/06 18:33:39 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] - s2[n]);
}
/*
#include <string.h>
int main(void)
{
	char	stg[] = {"d"};
	char	stg2[] = {"b"};
	int	n;
	int	m;
	n = ft_strcmp(stg, stg2);
	printf("%d\n", n);
	m = strcmp(stg, stg2);
	printf("%d", m);
}*/
