/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:35:41 by mray              #+#    #+#             */
/*   Updated: 2018/02/21 19:35:53 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_cpy;
	size_t	i;

	s_cpy = (char *)s;
	i = -1;
	while (++i < n)
		if (s_cpy[i] == c)
			return ((void*)s_cpy + i);
	return (NULL);
}
