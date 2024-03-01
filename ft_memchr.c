/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:23:35 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 17:19:15 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	char *p = memchr(data, 30, 9);
	printf("original: %p \n", p);
	printf("================= \n");
	char *v = ft_memchr(data, 30, 9);
	printf("result: %p \n", v);
}
*/