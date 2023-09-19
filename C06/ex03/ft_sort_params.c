/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:42:57 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/13 15:43:06 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	i = 1;
	while (i < argc -1)
	{
		n = 1;
		while (n < argc - 1)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				ft_swap(&argv[n], &argv[n + 1]);
			}
			n++;
		}
		i++;
	}
	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
