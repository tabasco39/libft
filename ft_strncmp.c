/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:49:34 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 14:24:32 by aranaivo         ###   ########.fr       */
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
			return (s1_result - s2_result);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "aba Hello! aba";
	char *s2 = "abaaaaaa";
	printf("original ==> %d \n", strncmp(s1 , s2, 6));

	printf("=============================== \n");

	char *s3 = "aba Hello! aba";
	char *s4 = "abaaaaaa";
	printf("my function ==> %d \n", ft_strncmp(s3 , s4, 6));
}
*/