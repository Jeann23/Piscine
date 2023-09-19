/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:56:33 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 20:33:50 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_all_size(int size, char **strs, int sep_size)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		i++;
	}
	res += (i - 1) * sep_size;
	return (res);
}

int	ft_cpy(char *str, char *b, int size)
{
	int	i;

	i = 0;
	while (b[i] != '\0' && i < size)
	{
		str[i] = b[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		sep_len;
	int		len;
	char	*s;

	s = NULL;
	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	sep_len = ft_strlen(sep);
	len = ft_all_size(size, strs, sep_len);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_cpy(&s[j], strs[i], ft_strlen(strs[i]));
		if (i < (size - 1))
			j += ft_cpy(&s[j], sep, sep_len);
		i++;
	}
	s[len] = '\0';
	return (s);
}
/*
int main(int argc, char **argv)
{
	printf("%d -> %s", argc - 1, ft_strjoin(argc - 1, &argv[1], "tele"));
} */
