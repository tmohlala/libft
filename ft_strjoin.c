/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 10:13:54 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/04 10:23:22 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	if (s1 || s2)
	{
		while (*s1 != '\0')
		{
			str[i] = *s1;
			s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			str[i] = *s2;
			s2++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
