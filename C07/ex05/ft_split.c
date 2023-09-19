/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 06:58:16 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/12 14:44:22 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	ft_is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_strncpy(char *str, int n)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (n + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	ft_count_words(char *str, char *charset)
{
	int	len;
	int	words;

	words = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		len = ft_word_len(str, charset);
		if (len > 0)
			words++;
		str += len;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	int		i;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (res == NULL || str == NULL || charset == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		len = ft_word_len(str, charset);
		if (len > 0)
		{
			res[i] = ft_strncpy(str, len);
			i++;
		}
		str += len;
	}
	res[i] = NULL;
	return (res);
}
/*
void ft_print_array(char **array)
{
	int i;

	if (array == NULL)
		printf("Array is NULL\n");
	else
	{
		for(i = 0; array[i] != NULL; i++)
			printf("%d - %s\n", i, array[i]);
		printf("%d - NULL\n", i);
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_print_array(ft_split(argv[1], argv[2]));
} */
