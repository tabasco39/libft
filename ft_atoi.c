/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:00:05 by antsa             #+#    #+#             */
/*   Updated: 2024/02/29 16:11:11 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 + (str[i] - 48));
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s;

	s = "-98,5";
	printf("result : %d \n", ft_atoi(s));
	printf("oirginal : %d \n", atoi(s));
}
*/