/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:41:49 by vincent           #+#    #+#             */
/*   Updated: 2024/11/06 10:47:33 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *text)
{
	size_t	i;

	i = 0;
	while(text[i])
		i++;
	return (i);
}

void	ft_print_solve(char *text)
{
	write(1, text, ft_strlen(text));
}
