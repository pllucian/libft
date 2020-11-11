/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:31:45 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/11 12:40:07 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	if (dest == src)
		return (dest);
	if (p1 < p2)
	{
		while (n--)
			*p1++ = *p2++;
	}
	else
	{
		while (n--)
			*(p1 + n) = *(p2 + n);
	}
	return (dest);
}
