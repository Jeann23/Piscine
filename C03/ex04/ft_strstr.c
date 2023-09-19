/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:28:30 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/09 17:39:55 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;

	n = 0;
	if (to_find[n] == '\0')
		return (str);
	i = 0;
	while (str[n] != '\0')
	{
		if (str[n] == to_find[0])
		{
			while ((str[n + i] == to_find[i]) && (str[n + i] != '\0'))
				i++;
			if (to_find[i] == '\0')
				return (str + n);
		}
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	stg1[] = "ano passado eu morri, mas esse ano eu nao morro";
	char	find[] = "nao";
// me fale de quem e o autor dessa musica e ganhe um cafe
	printf("%s\n",ft_strstr(stg1, find));
	printf("%s", strstr(stg1, find));
}*/
