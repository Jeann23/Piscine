/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:09:38 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/13 17:55:58 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("%d", ft_fibonacci(atoi(argv[argc -1])));
}
