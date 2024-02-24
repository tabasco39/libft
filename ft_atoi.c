/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:00:05 by antsa             #+#    #+#             */
/*   Updated: 2024/02/24 08:06:55 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(const char *str, int i, int *i_pointer)
{
	int	sign;

	sign = 1;
	while (str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*i_pointer = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = check_sign(str, i, &i);
	if (str[i] <= '0' && str[i] >= '9')
		return (0);
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
	}
	if (sign < 0)
		return (result * sign);
	else
		return (result);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s = "   +125678a3";
	printf("result : %d \n", ft_atoi(s));
	printf("oirginal : %d \n", atoi(s));
}
*/