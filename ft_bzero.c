/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antsa <antsa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:43:20 by antsa             #+#    #+#             */
/*   Updated: 2024/02/23 23:17:41 by antsa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void ft_bzero(void* s, size_t n)
{
	size_t			i;
	unsigned char *src;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*src = 0;
		src++;
		i++;
	}
}

int main() {
	char buffer[10];

	// Remplir le tampon avec des données
	for(int i = 0; i < 10; i++) {
		buffer[i] = 'a';
	}

	// Utiliser bzero pour effacer les données
	ft_bzero(buffer, 10);
		for(int i = 0; i < 10; i++) {
			printf("%d \n", buffer[i]);
	}

	return 0;
}