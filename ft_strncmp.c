/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:49:34 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 17:15:42 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		s1_result;
	int		s2_result;

	i = 0;
	s1_result = 0;
	s2_result = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			s1_result += s1[i];
			s2_result += s2[i];
			return ((unsigned char)s1_result - (unsigned char)s2_result);
		}
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
 	char *s1 = "atoms\0\0\0\0";
 	char *s2 = "atoms\0abc";

	printf("original ==> %d \n", strncmp(s1 , s2, 8));

	printf("=============================== \n");

	char *s3 = "atoms\0\0\0\0";
	char *s4 = "atoms\0abc";
	printf("my function ==> %d \n", ft_strncmp(s3 , s4, 8));
}
*/