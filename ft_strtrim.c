/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antsa <antsa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:23:09 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:16 by antsa            ###   ########.fr       */
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

	while (ft_strncmp((char *)s1, set, set_len) == 0)
		s1 = ft_substr(s1, set_len, total_len - set_len);
	while (ft_strncmp(last_set, set, set_len) == 0)
	{
		s1 = ft_substr(s1, 0, total_len - set_len);
		total_len = ft_strlen(s1);
		last_set = (char *)s1 + total_len - set_len;
	}
	/*if ((ft_strncmp((char *)s1, set, set_len) == 0)
		&& (ft_strncmp(last_set, set, set_len) == 0))
		result = ft_substr(s1, set_len, total_len - (2 * set_len));*/
	result = (char *)s1;
	return (result);
}

/*
int	main()
{
	char const s[] = "abaBonjour_le_mondeabaaba";
	char r[] = "aba";
	char *result = ft_strtrim(s, r);
	printf("result:%s \n", result);
}
*/