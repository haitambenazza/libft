/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:07:01 by hbenazza          #+#    #+#             */
/*   Updated: 2023/11/17 13:05:04 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p_dst;

	i = 0;
	p_dst = (char *)dst;
	if (!dst && !src && n)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
