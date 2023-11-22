/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:27:54 by hbenazza          #+#    #+#             */
/*   Updated: 2023/11/20 10:55:25 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	total;
	size_t	i;

	len_dst = 0;
	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	while (dst[len_dst])
		len_dst++;
	if (dstsize <= len_dst)
		return (ft_strlen(src) + dstsize);
	total = ft_strlen(src) + len_dst;
	while (src[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (total);
}
