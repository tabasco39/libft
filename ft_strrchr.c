/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:14:42 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/22 07:48:12 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(string);
	i = 1;
	if (dest_len == 0)
		return (NULL);
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
	char str[] = "Bonjour";
	printf("original ==> %p \n", strrchr(str, 117));
	printf("==================== \n");
	printf("my function ==> %p \n", ft_strrchr(str, 117));
	
}
*/