/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:31:55 by antsa             #+#    #+#             */
/*   Updated: 2024/02/24 08:27:07 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *fullString, const char *substring, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (ft_strlen(substring) == 0)
		return ((char *)fullString);
	while (j < n)
	{
		i = 0;
		while (fullString[j + i] == substring[i])
		{
			if (substring[i + 1] == '\0')
				return ((char *)&fullString[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Bonjour le monde";
	char s2[] = "le";
	printf("original: %p \n", strstr(s1, s2));
	printf("============================== \n");
	printf("original: %p \n", ft_strnstr(s1, s2, 11));

}
*/
