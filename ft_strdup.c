/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:22:33 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/15 18:40:29 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s);
	p = (char*)malloc(len + 1);
	if (p)
		return ((char*)ft_memcpy(p, s, len + 1));
	else
		return (NULL);
}
