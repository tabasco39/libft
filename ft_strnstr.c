/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:31:55 by antsa             #+#    #+#             */
/*   Updated: 2024/02/28 07:41:47 by aranaivo         ###   ########.fr       */
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
#include <bsd/string.h>

int	main(void)
{
	char	s1[] = "MZIRIBMZIRIBMZE123";
	char	s2[] = "MZIRIBMZE";
	char	*r1;
	char	*r2;

	r1 = strnstr(s1, s2, 11);
	r2 = ft_strnstr(s1, s2, 11);
	printf("original: %s \n", r1);
	printf("============================== \n");
	printf("function: %s \n",r2);
}
*/
