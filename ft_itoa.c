/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 07:33:34 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 15:18:59 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(int n)
{
	int	i;
	int	negative_number;

	i = 0;
	negative_number = n;
	if (n < 0)
		n *= -1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (negative_number < 0)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	int		total_size;
	int		i;
	int		neg;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	total_size = get_size(n);
	neg = n;
	result = malloc((total_size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = total_size - 1;
	if (n < 0)
		n *= -1;
	while (i >= 0)
	{
		result[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	if (neg < 0)
		result[0] = '-';
	result[total_size] = '\0';
	return (result);
}

/*
int	main(void)
{
	int		r;
	char	*s;

	r = 0;
	s = ft_itoa(r);
	printf("==> %s \n", s);
}
*/