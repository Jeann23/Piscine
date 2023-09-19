/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:18:25 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/09 17:39:21 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	while (dest[n] != '\0') 
		n++;
	i = 0;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	stg1[40] = "a melhor cura ";
	char	stg2[] = "e uma boa loucura";
	char	stg3[40] = "a melhor cura ";
	strncat(stg1, stg2, 4);
	printf("%s\n", stg1);
	ft_strncat(stg3, stg2, 4);
	printf("%s\n", stg3);
}*/
