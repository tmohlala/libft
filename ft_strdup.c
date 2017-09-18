/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 14:25:48 by tmohlala          #+#    #+#             */
/*   Updated: 2016/07/26 14:34:06 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dupl;

	i = 0;
	if ((dupl = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1)))
			== NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dupl[i] = s1[i];
		i++;
	}
	dupl[i] = '\0';
	return (dupl);
}
