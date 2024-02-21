/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:36:12 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/21 15:43:20 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "Hello";

	printf("original => %p \n", strchr(s, 101));
	printf("================================= \n");
	printf("My function => %p \n", ft_strchr(s, 101));
	
}
*/