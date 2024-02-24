/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:52:36 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 07:38:59 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*data1;
	const unsigned char	*data2;

	i = 0;
	data1 = (unsigned char *)s1;
	data2 = (unsigned char *)s2;
	while (i < n)
	{
		if (data1[i] != data2[i])
		{
			return (data1[i] - data2[i]);
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
	int s1[4];
	int s2[2] = {5, 6};
	printf("original ==> %d \n", memcmp(s1, s2, 2));
	printf("my function ==> %d \n", ft_memcmp(s1, s2, 2));
}
*/