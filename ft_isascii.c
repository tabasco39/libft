/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:42:06 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/19 13:01:46 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
}
/*
int	main(void)
{
	char c = 130;
	if(ft_isascii(c))
		printf("OK");
}
*/
