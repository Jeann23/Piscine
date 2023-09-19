/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecarlos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:35:21 by jecarlos          #+#    #+#             */
/*   Updated: 2023/09/10 11:50:23 by jecarlos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdioi.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *low)
{
	int	n;

	n = 0;
	while (low[n] != '\0')
	{
		if (low[n] >= 65 && low[n] <= 90)
		{
			low[n] = low[n] + 32;
			n++;
		}
		else
			n++;
	}
	return (low);
}

char	*ft_strcapitalize(char *str)
{
	char	*str2;
	int		n;

	str2 = ft_strlowcase(str);
	n = 0;
	while (str2[n] != '\0')
	{
		if (str2[0] >= 97 && str2[0] <= 122)
		{
			str2[n] = str2[n] - 32;
			n++;
		}
		if ((str2[n +1] >= 97 && str2[n +1] <= 122)
			&& ((str2[n] >= 2 && str2[n] < 48)
				|| (str2[n] > 57 && str2[n] < 65)
				|| str2[n] > 122
				|| (str2[n] > 90 && str2[n] < 97)))
		{
			str2[n + 1] = str2[n + 1] - 32;
			n++;
		}
		n++;
	}
	return (str2);
}
/*
int	main(void)
{
	char	stg1[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(stg1);
	printf("%s", stg1);
	
}*/
