/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 08:32:00 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/08 11:47:37 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cnt_strns(char const *s, char c)
{
	int num_strns;
	int	str_strt;

	str_strt = 0;
	num_strns = 0;
	while (*s != '\0')
	{
		if (str_strt == 1 && *s == c)
			str_strt = 0;
		if (str_strt == 0 && *s != c)
		{
			str_strt = 1;
			num_strns++;
		}
		s++;
	}
	return (num_strns);
}

int		ft_wrd_len(char const *s, char c)
{
	int len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char				**split;
	int					num_wds;
	int					index;
	unsigned int		start;

	index = 0;
	start = 0;
	num_wds = ft_cnt_strns(s, c);
	if ((split = (char**)malloc(sizeof(*split) * (num_wds))) == NULL)
		return (NULL);
	while (num_wds--)
	{
		while (*s == c && *s != '\0')
			s++;
		split[index] = ft_strsub(s, start, ft_wrd_len(s, c));
		if (split[index] == NULL)
			return (NULL);
		index++;
		s = s + ft_wrd_len(s, c);
		start = ft_wrd_len(s, c);
	}
	split[index] = NULL;
	return (split);
}
