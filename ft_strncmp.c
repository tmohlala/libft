/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:02:24 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/03 13:14:05 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

	while (*s1 && *s1 == *s2 && n >= 1)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
		{
			s1--;
			s2--;
		}
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
