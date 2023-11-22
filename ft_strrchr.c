/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:49:25 by hbenazza          #+#    #+#             */
/*   Updated: 2023/11/14 16:47:57 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*l;
	char	char_c;

	i = 0;
	l = NULL;
	char_c = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == char_c)
			l = (char *)&s[i];
		i++;
	}
	if (char_c == '\0')
		return ((char *)&s[i]);
	return (l);
}
