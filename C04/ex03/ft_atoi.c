/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:01:03 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 21:15:30 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	sinal;
	int	result;

	result = 0;
	sinal = 1;
	n = 0;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	while (str[n] == 43 || str[n] == 45)
	{
		if (str[n] == 45)
			sinal = sinal * -1;
		n++;
	}
	while (str[n] != '\0' && (str[n] >= 48 && str[n] <= 57))
	{
		result = result * 10;
		result += str[n] - '0';
		n++;
	}
	return (result * sinal);
}
/*
int	main(int argc, char **argv)
{
	printf("%i", ft_atoi(argv[argc - 1]));
}
*/
