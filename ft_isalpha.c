/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:58:17 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/19 14:52:21 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (0);
	}
}
/*
int	main(void)
{
	char *s = "bonjou4r";
	while (*s){
		printf("%d", ft_isalpha(*s));
		s++;
	}
}
*/
