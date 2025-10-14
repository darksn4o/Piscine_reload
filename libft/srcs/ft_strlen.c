/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnogueir <gnogueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:43:02 by gnogueir          #+#    #+#             */
/*   Updated: 2025/08/05 18:30:22 by gnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*texto;
	int		tamanho;

	texto = "Hello, world!";
	tamanho = ft_strlen(texto);
	printf("O tamanho da string é: %d\n", tamanho);
	return (0);
}
*/