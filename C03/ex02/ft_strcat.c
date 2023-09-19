/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:41:18 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/06 17:23:54 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	stg1[40] = "123";
	char	stg2[] = "456";
	char	stg3[40] = "123";
	strcat(stg1, stg2);
	printf("%s\n", stg1);	
	ft_strcat(stg3, stg2);
	printf("%s\n", stg3);
}*/
