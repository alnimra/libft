/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:43:23 by mray              #+#    #+#             */
/*   Updated: 2018/02/22 20:43:23 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	int   sI;
	int   eI;
	char *trimmed_str;

	sI = 0;
	if (!s)
		return NULL;
	while (is_ws(s[sI]))
		sI++;
	eI = ft_strlen(s) - 1;
	while (is_ws(s[eI]))
		eI--;
	if (!s[sI])
		return "";
	if (!(trimmed_str = ft_strsub(s, sI, eI - sI + 1)))
		return NULL;
	return trimmed_str;
}
