/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:53:51 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/21 17:09:14 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		buffer[n + 1];
	size_t			i;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		buffer[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = buffer[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main() {
    char dest[] = "Bonjour";
	char src[] = "Hello";
   // printf("oiginal ==> %ls \n", data);
    char *result = ft_memmove(dest, src, 2);
	
	char *o = memmove(dest, src, 3);
	printf("%s ,", o);
	printf("\n");
   	printf("%s ,", result);
	
    return 0;
}
*/