/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:23:09 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 15:17:10 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		set_len;
	int		total_len;
	char	*last_set;

	set_len = ft_strlen(set);
	total_len = ft_strlen(s1);
	last_set = (char *)s1 + total_len - set_len;
	result = malloc(total_len * sizeof(char));
	result = (char *)s1;
	if (ft_strncmp((char *)s1, set, set_len) == 0)
		result = ft_substr(s1, set_len, total_len - set_len);
	if (ft_strncmp(last_set, set, set_len) == 0)
		result = ft_substr(s1, 0, total_len - set_len);
	if ((ft_strncmp((char *)s1, set, set_len) == 0)
		&& (ft_strncmp(last_set, set, set_len) == 0))
		result = ft_substr(s1, set_len, total_len - (2 * set_len));
	return (result);
}

/*
int	main()
{
	char const s[] = "aba Hello!";
	char r[] = "aba";
	char *result = ft_strtrim(s, r);
	printf("result:%s \n", result);
}
*/