/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 15:06:43 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/03 13:22:31 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *lstr)
{
	char	*p1;
	char	*p2;

	p1 = (char*)big;
	p2 = (char*)lstr;
	if (!*lstr)
		return ((char*)big);
	while (*big != '\0')
	{
		if (*lstr == *big)
		{
			p1 = (char*)big;
			p2 = (char*)lstr;
			while (*p1 == *p2)
			{
				p1++;
				p2++;
				if (!*p2)
					return ((char*)big);
			}
		}
		big++;
	}
	return (NULL);
}
