/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:14:42 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/01 16:26:10 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(string);
	i = 1;
	if ((char)c == '\0')
		return ((char *)string + ft_strlen(string));
	while (i <= dest_len)
	{
		if (string[dest_len - i] == (char)c)
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
	char *src = "teste";
 	char *d1 = strrchr(src, '\0');
 	char *d2 = ft_strrchr(src, '\0');

	printf("original ==> %s \n", d1);
	printf("==================== \n");
	printf("my function ==> %s \n", d2);
	
}
*/