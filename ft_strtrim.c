/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:23:09 by aranaivo          #+#    #+#             */
/*   Updated: 2024/03/05 15:21:07 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	check_char(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (c);
		i++;
	}
	return (0);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = check_set_start((char *)s1, (char *)set);
	end = ft_strlen(s1) - check_set_end((char *)s1, (char *)set);
	if (start == (int)ft_strlen(s1))
		result = malloc(sizeof(char));
	else
		result = malloc(((end - start) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char const	s[] = "1  \t \t \n   \n\n\n\t1";
	char		r[] = " \n\t";
	char		*result;

	result = ft_strtrim(s, r);
	printf("result:%s \n", result);
}
*/