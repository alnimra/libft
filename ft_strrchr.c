/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:37:52 by mray              #+#    #+#             */
/*   Updated: 2018/02/22 13:37:52 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;;
	char *s_cpy = (char*) s;

	i = (size_t) ft_strlen(s) + 1;
	while(--i)
	{
		if(s_cpy[i] == c)
			return s_cpy + i;
	}
	return NULL;
}
