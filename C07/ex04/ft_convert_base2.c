/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <jecarlos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:08:18 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/12 13:14:57 by jecarlos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	verif_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	get_base_id(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	spaces_and_signal(char **str)
{
	int	signal;

	signal = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	while ((**str == '-' || **str == '+') && **str != '\0')
	{
		if (**str == '-')
			signal = -signal;
		(*str)++;
	}
	return (signal);
}

int	ft_pow(int n, int e)
{
	int	res;

	if (n == 0)
		return (0);
	res = 1;
	if (e == 0)
		return (res);
	while (e > 0)
	{
		res *= n;
		e--;
	}
	return (res);
}
