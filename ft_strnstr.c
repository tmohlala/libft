/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:27:25 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/04 09:01:30 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lstr, size_t len)
{
	char	*p1;
	char	*p2;

	if (!*lstr)
		return ((char*)big);
	while (*big != '\0' && len >= 1)
	{
		if (*lstr == *big)
		{
			p1 = (char*)big;
			p2 = (char*)lstr;
			while (*p1 == *p2)
			{
				p1++;
				p2++;
				len--;
				if (!*p2)
					return ((char*)big);
			}
		}
		big++;
		len--;
	}
	return (NULL);
}
