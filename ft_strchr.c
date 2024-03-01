/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:36:12 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 16:51:22 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int main()
{
 	char *src = "te\0ste";
 	char *d1 = strchr(src, '\0');
 	char *d2 = ft_strchr(src, '\0');



	printf("original => %s \n", d1);
	printf("================================= \n");
	printf("My function => %s \n", d2);
	
}
*/