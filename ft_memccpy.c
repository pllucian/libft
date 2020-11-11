/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:36:29 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/11 02:07:33 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	while (n--)
	{
		if ((*p1++ = *p2++) == (unsigned char)c)
			return (p1);
	}
	return (NULL);
}
