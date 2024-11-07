#include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_putstr(char *text);
int		ft_isalpha(int c);

char	*ft_c_crypt(char *text, int gap)
{
	int	tmp_gap;
	int	i;

	i = 0;
	while (text[i])
	{
		tmp_gap = gap;
		if (ft_isalpha(text[i]))
		{
			if (text[i] >= 'a' && text[i] <= 'z')
				while ((text[i] - 'a') + tmp_gap >= 26)
					tmp_gap -= 26;
			else
				while ((text[i] - 'A') + tmp_gap >= 26)
					tmp_gap -= 26;
			text[i] += tmp_gap;}
		i++;
	}
	return (text);
}
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

void	cesar(char *text, int gap)
{
	int	i;

	if (gap)
	{
		write(1, "Cryptage en code Cesar : \n", 26);
		ft_putstr(ft_c_crypt(text, gap));
		write(1, "\n\n", 2);
	}
	else
	{
		i = 1;
		write(1, "Decryptage en code Cesar : \n", 28);
		while (i < 26)
		{
			ft_putstr(ft_c_decrypt(text));
			write(1, "\n\n", 2);
			i++;
		}
		write(1, "------------------------\n", 25);
	}
}
