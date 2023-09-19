/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:28:25 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/07 19:27:19 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[50] = "\n";
	int	j;

	j = ft_str_is_printable(str);
	printf("%i", j);
}*/
