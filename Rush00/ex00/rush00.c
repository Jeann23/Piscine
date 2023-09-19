/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:50:22 by esterper          #+#    #+#             */
/*   Updated: 2023/08/27 18:49:14 by esterper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_matriz(int linha, int coluna, int x, int y)
{
	if ((coluna == 1 && linha == 1) || (coluna == x && linha == 1))
	{
		ft_putchar('o');
	}
	else if ((coluna == x && linha == y) || (linha == y && coluna == 1))
	{
		ft_putchar('o');
	}
	else if (linha == 1 || (linha == y && coluna > 1 && coluna < x))
	{
		ft_putchar('-');
	}
	else if ((linha > 1 && linha < y && coluna == 1) || coluna == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	linha;
	int	coluna;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error: you need to choose a positive number!\n", 45);
	}
	else 
	{
		linha = 1;
		while (linha <= y)
		{
			coluna = 1;
			while (coluna <= x)
			{
				ft_matriz(linha, coluna, x, y);
				coluna++;
			}
			ft_putchar('\n');
			linha++;
		}
	}
}
