/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:57 by hbenazza          #+#    #+#             */
/*   Updated: 2023/11/14 17:54:12 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc;
	unsigned char	char_c;

	uc = (unsigned char *)s;
	i = 0;
	char_c = (unsigned char)c;
	while (n > i)
	{
		if (uc[i] == char_c)
			return (uc + i);
		i++;
	}
	return (NULL);
}