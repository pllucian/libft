/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:18:05 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/13 21:18:43 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	n;
	size_t	little_len;

	n = len;
	p1 = (char*)big;
	p2 = (char*)little;
	if (*p2)
	{
		little_len = ft_strlen(p2);
		while (1)
		{
			while (p1)
			{
				if (!n-- || !*p1)
					return (NULL);
				if (*p1++ == *little)
					break ;
			}
			if (little_len > n + 1)
				return (NULL);
			if (!ft_memcmp(p1, p2 + 1, little_len - 1))
				break ;
		}
		p1--;
	}
	return ((char*)p1);
}
