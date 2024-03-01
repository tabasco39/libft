/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:02:15 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 15:41:37 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("Original ==> %d \n", toupper('-'));
	printf("================= \n");
	printf("My function ==> %d \n", ft_toupper('-'));
}
*/