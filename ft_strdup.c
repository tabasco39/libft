/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antsa <antsa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:48:53 by antsa             #+#    #+#             */
/*   Updated: 2024/02/24 00:04:42 by antsa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = strlen(str);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	else
	{
		while (str[i])
		{
			result[i] = str[i];
			i++;
		}
	}
	result[i] = '\0';
	return (result);
}

int main()
{
	char str[] = "Hello word!";
	printf("resultat: %s \n", ft_strdup(str));
	printf("resultat: %s \n", strdup(str));
}