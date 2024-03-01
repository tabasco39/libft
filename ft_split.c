/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:39:19 by antsa             #+#    #+#             */
/*   Updated: 2024/03/01 07:35:47 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*get_trimmed_string(char *s, char c)
{
	char	*set;
	int		i;

	i = 0;
	set = malloc(sizeof(char));
	set[0] = c;
	while (s[i])
		i++;
	while (s[0] == c || s[i - 1] == c)
		s = ft_strtrim((const char *)s, (const char *)set);
	return (s);
}

int	count_words(char *s, char c)
{
	int		delimiter_count;
	int		i;
	char	*str;

	str = get_trimmed_string(s, c);
	delimiter_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			delimiter_count++;
		str++;
	}
	return (delimiter_count + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;
	char	*str;

	i = 0;
	j = 0;
	start = 0;
	result = malloc((count_words((char *)s, c) + 1) * sizeof(char *));
	str = get_trimmed_string((char *)s, c);
	while (i++ <= (int)ft_strlen(str))
	{
		if (str[i] == c && start == i)
			start++;
		else if ((str[i] == c && start != i) || str[i] == '\0')
		{
			result[j++] = ft_substr(str, start, i - start);
			start = i + 1;
		}
	}
	result[j] = NULL;
	return (result);
}

int	main(void)
{
	char	str[] = "\0aa\0bbb";
	char	c;
	char	**r;

	c = '\0';
	r = ft_split(str, c);
}

