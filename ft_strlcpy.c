/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:01:10 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 15:40:21 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	if (size > 0)
	{
		while (*src && i < size - 1)
		{
			dest[i] = *src;
			src++;
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}
/*
int main()
{
    char dest1[] = "";
    char src1[] = {"lorem ipsum dolor sit amet"};
    unsigned int s = strlcpy(dest1, src1, 0);
    printf("original => %d \n", s);
    printf("original => %s \n", dest1);

    printf("================================== \n");

    char dest[] = "";
    char src[] = {"lorem ipsum dolor sit amet"};
    unsigned int r = ft_strlcpy(dest, src, 0);
    printf("my function => %d \n", r);
    printf("my function => %s \n", dest);  
}
*/
