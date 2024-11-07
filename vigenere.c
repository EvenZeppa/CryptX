/* void	vigenere(char *text, char *key)
{

}

char	ft_v_decrypt(char *text, char *key)
{
	return (text);
}
 */

/* char*	ft_v_crypt(char *text, char *key)
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
} */
