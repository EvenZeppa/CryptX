/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_crypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:59:52 by vincent           #+#    #+#             */
/*   Updated: 2024/11/06 16:32:45 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *text)
{
	size_t	i;

	i = 0;
	while(text[i])
		i++;
	return (i);
}
char*	ft_v_crypt(char *text, char *key)
{
	int	i;
	int	j;
	int	key_size;


	i = 0;
	j = 0;
	key_size = ft_strlen(key);
	while (text[i])
	{
		if (j == key_size)
			j = 0;
		if (text[i] <= '9' && text[i] >= '0' && (text[i] - 1) >= '0')
			text[i] += '9' - key[j];
		else if (text[i] <= '9' && text[i] >= '0' && (text[i] - 1) < '0')
			text[i] -= 9;
		else if (text[i] >= 'A' && text[i] <= 'Z' && (text[i] - 1) >= 'A')
			text[i] += 'A' - key[j];
		else if (text[i] >= 'A' && text[i] <= 'Z' && (text[i] - 1) < 'A')
			text[i] -= 25;
		else if (text[i] >= 'a' && text[i] <= 'z' && (text[i] - 1) >= 'a')
			text[i] += 'z' - key[j];
		else if (text[i] >= 'a' && text[i] <= 'z' && (text[i] - 1) < 'a')
			text[i] -= 25;
		i++;
		j++;
	}
	return (text);
}

int main()
{
	char text[] = "z3";
	char key[] = "mm";

	printf("Original text: %s\n", text);
	printf("Key: %s\n", key);

	char *encrypted_text = ft_v_crypt(text, key);
	printf("Encrypted text: %s\n", encrypted_text);

	return 0;
}
