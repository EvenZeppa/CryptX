#include "../includes/utils.h"

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

int	pos_char(char c)
{
	int	pos;

	pos = 0;
	if (ft_isalpha(ft_tolower(c)))
		pos = ft_tolower(c) - 'a' + 1;
	return (pos);
}

char*	ft_v_crypt(char *text, char *key, int crypt)
{
	int	i;
	int	j;
	int	key_size;
	int	tmp_gap;

	i = 0;
	j = 0;
	key_size = ft_strlen(key);
	while (text[i])
	{
		if (j == key_size)
			j = 0;
		if (ft_isalpha(text[i]))
		{
			if (ft_isalpha(key[j]))
			{
				tmp_gap = pos_char(key[j]) * crypt;
				if (pos_char(text[i]) + tmp_gap < 1)
					text[i] += 26;
				if (pos_char(text[i]) + tmp_gap > 26)
					text[i] -= 26;
				text[i] += tmp_gap;
			}
		}
		j++;
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
