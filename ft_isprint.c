/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:02:31 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 14:07:34 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (c);
}
/*
int	main(void)
{
	int c = ' ';
	printf("%d \n", ft_isprint(c));
	if (ft_isprint(c))
		printf("OK");
	else 
		printf("NO");
}
*/
