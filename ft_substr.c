/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:32:07 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 11:42:28 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;
	int		total_len;

	i = start;
	j = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else
		total_len = len + 1;
	result = malloc((total_len) * sizeof(char));
	if (!result)
		return (NULL);
	else
	{
		while (j < len)
		{
			result[j] = s[i];
			j++;
			i++;
		}
	}
	result[j] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	s[] = "hola";

	printf("resultat: %s \n", ft_substr(s, 0, 100000000000000000000000));
}
*/