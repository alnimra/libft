/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 14:00:45 by mray              #+#    #+#             */
/*   Updated: 2018/02/23 14:00:45 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_num_digi(long c)
{
	int size;

	size = 0;
	if (c < 0)
		size++;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c /= 10;
		size++;
	}
	return (size);
}

static void		put_base(long c, char *str, int i)
{
	char nbr;

	if (c < 0)
	{
		str[0] = '-';
		c *= -1;
	}
	if (c >= 10)
		put_base(c / 10, str, i - 1);
	nbr = (c % 10) + '0';
	str[i] = nbr;
}

char			*ft_itoa(int n)
{
	char *str;

	if (!(str = (char *)ft_memalloc(sizeof(*str) + (get_num_digi(n)))))
		return (NULL);
	put_base(n, str, get_num_digi(n) - 1);
	str[get_num_digi(n)] = '\0';
	return (str);
}
