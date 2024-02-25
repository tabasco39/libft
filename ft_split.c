/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antsa <antsa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:39:19 by antsa             #+#    #+#             */
/*   Updated: 2024/02/25 20:52:16 by antsa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *get_trimmed_string(char *s, char c)
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

int count_words(char *s, char c)
{
	char    *str;
	int     delimiter_count;

	str = get_trimmed_string(s, c);
	delimiter_count = 0;
	while (*str)
	{
		if (*str == c)
			delimiter_count++;
		str++;
	}
	return (delimiter_count);
}

char **ft_split(char const *s, char c)
{
	int     result_len;
	int     i;
	int     start;
	int		j;
	char    **result;
	char	*new_char;

	i = 0;
	j = 0;
	start = 0;
	result_len = count_words((char *)s, c) + 1;
	printf("%d \n", result_len);
	result = malloc(result_len * sizeof(char *));
	if (!result)
		return (NULL);
	new_char = get_trimmed_string((char *)s, c);
	while (i <= (int)ft_strlen(new_char))
	{
		if (new_char[i] == c || new_char[i] == '\0')
		{
			printf("%d ,  %d \n", start, i - j);
			result[j] = ft_substr(new_char, start, i - start);
			start = i + 1 ;
			j++;
		}
		i++;
	}
	return (result);
}

int main()
{
	char str[] = "__Bonjour,le,monde_____";
	char c = ',';
	char ** r = ft_split(str, c);
	for(int i = 0; i < 3; i++)
		printf("%s \n", r[i]);
}