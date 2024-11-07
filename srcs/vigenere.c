/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vigenere.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:29:55 by vincent           #+#    #+#             */
/*   Updated: 2024/11/07 16:15:17 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isalpha(int c);
void	ft_putstr(char *text);
size_t	ft_strlen(const char *s);

char *keycase(char *key)
{
	int	i;

	i = 0;
	while (key[i])
	{
		if (ft_isalpha(key[i]))
		{
			if (key[i] >= 'A' && key[i] <= 'Z')
				key[i] += 32;
		}
		i++;
	}
	return (key);
}

char*	ft_v_crypt(char *text, char *key, int crypt)
{
	int i;
	int	j;
	int	key_size;
	int	gap;

	gap = 0;
	i = 0;
	j = 0;
	key_size = ft_strlen(key);
	while (text[i])
	{
		if (j == key_size)
			j = 0;
		if (ft_isalpha(text[i]))
		{
			if (text[i] >= 'A' && text[i] <= 'Z')
			{
				gap = key[j] - 'a' + 1;
				text[i] += (crypt * gap);
				j++;
			}
			else
			{
				gap = key[j] - 'a' + 1;
				text[i] += (crypt * gap);
				j++;
			}
		}
		i++;
	}
	return (text);
}


void	vigenere(char *text, char *key, int is_crypt)
{
	int	crypt;

	key = keycase(key);
	if (!is_crypt)
	{
		crypt = 1;
		write(1, "Cryptage en code Vigenere : \n", 29);
		ft_putstr(ft_v_crypt(text, key, crypt));
		write(1, "\n\n", 2);
	}
	else
	{
		crypt = -1;
		write(1, "Decryptage en code Vigenere : \n", 31);
		ft_putstr(ft_v_crypt(text, key, crypt));
		write(1, "\n\n", 2);
	}
}
