/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 21:23:47 by mray              #+#    #+#             */
/*   Updated: 2018/02/22 21:23:47 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_n(char const *s, char c)
{
	int num_of_words;
	int i;
	int in_word;

	i = 0;
	num_of_words = 0;
	in_word = 0;
	while (s[i])
	{
		if (!in_word && s[i] != c)
		{
			num_of_words++;
			in_word = 1;
		}
		else if (in_word && s[i] == c)
			in_word = 0;
		i++;
	}
	return (num_of_words);
}

char **ft_strsplit(char const *s, char c)
{
	char **ret;
	int	num_words;
	int	in_word;
	int	i;
	int	s_i;

	if (!s || !c || !(ret = (char **)ft_memalloc(sizeof(char *) * (get_n(s, c) + 1))))
		return (NULL);
	i = -1;
	in_word = 0;
	num_words = 0;
	while (s[++i])
	{
		if (!in_word && s[i] != c)
		{
			s_i = i;
			in_word = 1;
		}
		else if (in_word && (s[i] == c || s[i] == '\0'))
		{
			ret[num_words++] = ft_strsub(s, s_i, i - s_i);
			in_word = 0;
		}
	}
	return (ret);
}
