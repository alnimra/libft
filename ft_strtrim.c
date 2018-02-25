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

char	*ft_strtrim(char const *s)
{
	int		s_i;
	int		e_i;
	char	*trimmed_str;

	s_i = 0;
	if (!s)
		return (NULL);
	while (is_ws(*(s + s_i)))
		s_i++;
	e_i = ft_strlen(s) - 1;
	while (is_ws(*(s + e_i)))
		e_i--;
	if (!*(s + s_i))
		return ("");
	if (!(trimmed_str = ft_strsub(s, s_i, e_i - s_i + 1)))
		return (NULL);
	return (trimmed_str);
}
