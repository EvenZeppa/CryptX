/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_decrypt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:20:54 by vincent           #+#    #+#             */
/*   Updated: 2024/11/06 15:42:57 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_c_decrypt(char *text)
{
	int	i;

	i = 0;
	while(text[i])
	{
		if (text[i] <= '9' && text[i] >= '0' && (text[i] - 1) >= '0')
			text[i] -= 1;
		else if (text[i] <= '9' && text[i] >= '0' && (text[i] - 1) < '0')
			text[i] += 9;
		else if (text[i] >= 'A' && text[i] <= 'Z' && (text[i] - 1) >= 'A')
			text[i] -= 1;
		else if (text[i] >= 'A' && text[i] <= 'Z' && (text[i] - 1) < 'A')
			text[i] += 25;
		else if (text[i] >= 'a' && text[i] <= 'z' && (text[i] - 1) >= 'a')
			text[i] -= 1;
		else if (text[i] >= 'a' && text[i] <= 'z' && (text[i] - 1) < 'a')
			text[i] += 25;
		i++;
	}
	return (text);
}
