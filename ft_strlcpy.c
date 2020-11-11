/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:10:49 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/11 18:59:35 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			n;

	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	n = size;
	if (!src)
		return (0);
	if (n)
		while (--n && (*p1++ = *p2++))
			;
	if (!n && size)
		*p1 = '\0';
	return (ft_strlen(src));
}
