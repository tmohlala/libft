/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:57:09 by tmohlala          #+#    #+#             */
/*   Updated: 2016/10/24 14:56:38 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;

	csrc = (char*)src;
	cdst = (char*)dst;
	if (csrc == cdst)
		return (dst);
	if (csrc < cdst)
	{
		csrc = csrc + len - 1;
		cdst = cdst + len - 1;
		while (len--)
			*cdst-- = *csrc--;
	}
	else
		while (len--)
			*cdst++ = *csrc++;
	return (dst);
}
