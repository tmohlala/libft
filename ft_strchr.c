/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 14:25:11 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/03 13:46:46 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (len < (ft_strlen(s) + 1))
	{
		if (s[len] == (char)c)
			return ((char*)&s[len]);
		len++;
	}
	return (NULL);
}
