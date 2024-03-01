/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:14:42 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 16:39:42 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(string);
	i = 1;
	if (c == '\0')
		return ((char *)string + ft_strlen(string));
	while (i <= dest_len)
	{
		if (string[dest_len - i] == c)
		{
			return ((char *)&string[dest_len - i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main (){
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
 	char *d1 = strchr(src, ' ');
 	char *d2 = ft_strchr(src, ' ');

	printf("original ==> %s \n", d1);
	printf("==================== \n");
	printf("my function ==> %s \n", d2);
	
}
*/