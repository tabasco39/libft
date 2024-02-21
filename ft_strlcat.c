/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:28:29 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/21 15:26:38 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = dest_length;
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	if(size < dest_length)
		return (size + src_length);
	return ((dest_length + src_length) + 1);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[20] = "hello world";
	char src[] = "Bonjour";
	printf("original ===> %ld \n", strlcat(dest, src, 2));
	printf("> %s \n", dest);

	printf("=============================== \n");

	char dest1[20] = "helo world";
	char src1[] = "Bonjour";
	printf("my function ===> %ld \n", ft_strlcat(dest1, src1, 2));
	printf("> %s \n", dest1);
}
*/