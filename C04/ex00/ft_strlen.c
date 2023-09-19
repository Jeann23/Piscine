/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:53 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/11 18:24:06 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char **argv)
{
	printf("%d", ft_strlen(argv[argc -1]));
}*/
