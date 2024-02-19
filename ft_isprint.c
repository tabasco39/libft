/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:02:31 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/19 13:15:55 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_isprint(char c)
{
	if (!(c >= 33 && c <= 126))
		return (0);
}
/*
int	main(void)
{
	int c = ' ';
	if (ft_isprint(c))
		printf("OK");
	else 
		printf("NO");
}
*/
