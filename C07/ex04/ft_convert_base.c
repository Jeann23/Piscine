/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:08:25 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/12 14:44:11 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str);
int	verif_base(char *base);
int	get_base_id(char c, char *base);
int	spaces_and_signal(char **str);
int	ft_pow(int n, int e);

long int	ft_convert_base_to_dec(char *nbr, char *base_from, int base_size)
{
	int			e;
	int			i;
	long int	dec;
	int			aux;

	i = 0;
	while (nbr[i] != '\0' && get_base_id(nbr[i], base_from) != -1)
		i++;
	dec = 0;
	e = 0;
	i--;
	while (i >= 0)
	{
		aux = get_base_id(nbr[i], base_from);
		dec += aux * ft_pow(base_size, e);
		e++;
		i--;
	}
	return (dec);
}

int	nbr_len(long int nbr, int size)
{
	int		len;

	len = 1;
	while (nbr / size != 0)
	{
		len++;
		nbr /= size;
	}
	return (len);
}

char	*ft_dec_base(long int nbr, char *base, int size, int sinal)
{
	int		len;
	char	*res;

	len = nbr_len(nbr, size);
	if (sinal < 0)
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (len > 0 || sinal > 0)
		{
			res[len] = base[nbr % size];
			len--;
			nbr /= size;
		}
		else
		{
			res[len] = '-';
			len--;
		}
	}
	res[len] = base[nbr % size];
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			len_base_from;
	int			len_base_to;
	int			sinal;
	long int	dec;
	char		*res;

	res = NULL;
	len_base_from = verif_base(base_from);
	len_base_to = verif_base(base_to);
	if (len_base_from == 0 || len_base_to == 0)
		return (res);
	sinal = spaces_and_signal(&nbr);
	dec = ft_convert_base_to_dec(nbr, base_from, len_base_from);
	if (dec == 0)
		sinal = 1;
	res = ft_dec_base(dec, base_to, len_base_to, sinal);
	return (res);
}
