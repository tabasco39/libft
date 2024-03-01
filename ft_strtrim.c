/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:23:09 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 17:11:58 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	check_set_start(char *s1, char *set)
{
	int	i;
	int	position;

	i = 0;
	position = 0;
	while (s1[i])
	{
		if (check_char(s1[i], set) != 0)
			position++;
		else
			break ;
		i++;
	}
	return (position);
}

int	check_set_end(char *s1, char *set)
{
	int	i;
	int	position;

	i = ft_strlen(s1) - 1;
	position = 0;
	while (i)
	{
		if (check_char(s1[i], set) != 0)
			position++;
		else
			break ;
		i--;
	}
	return (position);
}

int	count_words()
{
	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		total_len;
	int		start;
	int		end;

	total_len = ft_strlen(s1);
	result = malloc(total_len * sizeof(char));
	if (!result)
		return (NULL);
	start = check_set_start((char *)s1, (char *)set);
	result = ft_substr(s1, start, total_len - start);
	end = check_set_end((char *)s1, (char *)set);
	result = ft_substr(result, 0, ft_strlen(result) - end);
	return (result);
}
/*
int	main(void)
{
	char const	s[] = "";
	char		r[] = "";
	char		*result;

	result = ft_strtrim(s, r);
	printf("result:%s \n", result);
}
*/