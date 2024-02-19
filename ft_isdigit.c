/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:40:17 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/19 14:58:55 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
}
/*
int	main (void)
{
	printf("original: %d \n",isdigit('7'));
	printf("==> %d \n", ft_isdigit('7'));
}
*/
