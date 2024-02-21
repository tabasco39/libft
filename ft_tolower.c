/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:26:55 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/21 13:35:07 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("Original ==> %d \n", tolower('.'));
	printf("================= \n");
	printf("My function ==> %d \n", ft_tolower('.'));
}
*/
