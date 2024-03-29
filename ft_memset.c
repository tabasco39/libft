/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:04:12 by antsa             #+#    #+#             */
/*   Updated: 2024/02/24 08:19:54 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)pointer;
	i = 0;
	while (i < n)
	{
		src[i] = (unsigned char)value;
		i++;
	}
	return ((unsigned char *)src);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "Bonjour tout le monde!";
	char *r = ft_memset(s + 3, '#', 5 );
	char *o = memset(s + 3, '#', 5 );
	printf("resultat: %s \n", s);
	printf("original: %s \n", s);

}
*/