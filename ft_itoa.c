/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 22:18:42 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/08/09 08:12:23 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			neg;
	char		*ptr;
	long int	num;
	char		buf[50];

	neg = 0;
	num = n;
	ptr = &buf[49];
	*ptr = '\0';
	if (num == 0)
		*--ptr = '0';
	if (num < 0)
	{
		neg = 1;
		num = num * -1;
	}
	while (num > 0)
	{
		*--ptr = "0123456789"[num % 10];
		num = num / 10;
	}
	if (neg == 1)
		*--ptr = '-';
	return (ft_strdup(ptr));
}
