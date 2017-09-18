/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 09:16:35 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/04 09:26:52 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	int		i;

	i = 0;
	if (!*s)
		return (NULL);
	if ((new_s = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (*s != '\0')
	{
		new_s[i] = (*f)(*s);
		s++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
