/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:12:18 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 09:20:06 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dst;
	if (d == s)
	{
		return (d);
	}
	else if (s < d && d < s + len)
	{
		s += len;
		d += len;
		while (len--)
		{
			*--d = *--s;
		}
	}
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int	main()
{
	char *s1 = "bonjour";
	char *s2 = "hello";
	printf("%s \n", ft_memmove(s1, s2, 3));
}
*/