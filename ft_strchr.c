/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:36:12 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/05 14:38:29 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i < ft_strlen(s) && (char)c > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int main()
{
 	char *src = "bonjour";
 	char *d1 = strchr(src, 'b' + 25);
 	char *d2 = ft_strchr(src, 'b' + 256);



	printf("original => %s \n", d1);
	printf("================================= \n");
	printf("My function => %s \n", d2);
	
}
*/
