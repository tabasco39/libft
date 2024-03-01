/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:22:09 by aranaivo          #+#    #+#             */
/*   Updated: 2024/02/29 16:50:47 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i++, s++);
		}
	}
}
/*
#include <ctype.h>

void	uppercase(unsigned int index, char *ch)
{
	printf ("ibde = %d \n", index);
	printf ("%s \n", ch);
	printf ("%c \n", ch[index]);
	printf ("%c \n", toupper(ch[index]));
	*ch = toupper(ch[index]);
	printf("test");
}

int	main(void)
{
	char	*s;

	s = "bonjour";
	ft_striteri(s, uppercase);
	printf("result : %s \n", s);
}
*/