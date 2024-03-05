/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:31:55 by antsa             #+#    #+#             */
/*   Updated: 2024/03/05 16:19:52 by aranaivo         ###   ########.fr       */
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
	if ((int)n < 0 && fullString[0] == '\0')
		return (NULL);
	while (j < n )
	{
		i = 0;
		while (fullString[j + i] == substring[i] && (j + i < n))
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
#include <bsd/string.h>

int	main(void)
{
	char	s1[] = "salut";
	char	s2[] = "lu";
	char	*r1;
	char	*r2;

	r1 = strnstr(s1, s2, -1);
	r2 = ft_strnstr(s1, s2, -1);
	printf("original: %s \n", r1);
	printf("============================== \n");
	printf("function: %s \n",r2);
}
*/
