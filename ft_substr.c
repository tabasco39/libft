/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:32:07 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 15:14:39 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;
	int		total_len;

	i = start;
	j = 0;
	if ((start + len) > ft_strlen(s))
		total_len = ft_strlen((char *)s) - start + 2;
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
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char s[] = "Bonjour le monde";
	printf("resultat: %s \n", ft_substr(s, 3, 6));
}*/