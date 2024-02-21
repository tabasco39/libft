/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:01:10 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/21 10:36:40 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (len + 1);
}
/*
int main()
{
    char dest1[50];
    char src1[] = {"Bonjour tout le monde"};
    unsigned int s = strlcpy(dest1, src1, 50);
    printf("original => %d \n", s);
    printf("original => %s \n", dest1);

    printf("================================== \n");

    char dest[50];
    char src[] = {"Bonjour tout le monde"};
    unsigned int r = strlcpy(dest, src, 50);
    printf("my function => %d \n", r);
    printf("my function => %s \n", dest);     
}
*/
