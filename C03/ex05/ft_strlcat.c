/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:37:06 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/10 13:14:14 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	len_dest = j;
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[i] != '\0' && i < size - len_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest [j] = '\0' ;
	return (len_dest + len_src);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[] = "jeannsales";
	char	str2[] = "sales";

	printf("%d\n", ft_strlcat(str1, str2, 10));
	printf("%d", ft_strlcat(str1, str2, 11));
}
