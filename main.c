#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);

char	*c_crypt(char *text, int gap);

char	*v_crypt(char *text, char *key);
char	*v_decrypt(char *text, char *key);

void	ft_putstr(char *text)
{
	write(1, text, ft_strlen(text));
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*text;
	char	*key;
	int		gap;
	int		is_vigenere;
	int		is_cesar;
	int		has_key;
	int		i;

	gap = 0;
	is_vigenere = 0;
	is_cesar = 0;
	has_key = 0;
	i = 1;
	while (i < argc)
	{
		if (ft_memcmp(argv[i], "-t", 2) == 0)
		{
			text = malloc(sizeof(char) * (ft_strlen(argv[i]) - 1));
			if (!text)
				return (1);
			ft_memcpy(text, &argv[i][2], (ft_strlen(argv[i]) - 1));
		}
		if (ft_memcmp(argv[i], "-k", 2) == 0)
		{
			key = malloc(sizeof(char) * (ft_strlen(argv[i]) - 1));
			if (!key)
				return (1);
			ft_memcpy(key, &argv[i][2], (ft_strlen(argv[i]) - 1));
			has_key = 1;
		}
		if (ft_memcmp(argv[i], "-g", 2) == 0)
		{
			gap = ft_atoi(&argv[i][2]);
		}
		if (ft_memcmp(argv[i], "-c", 2) == 0)
			is_cesar = 1;
		if (ft_memcmp(argv[i], "-v", 2) == 0)
			is_vigenere = 1;
		i++;
	}
	if (is_cesar)
	{
		if (!gap)
		{
			write(1, "Cryptage en code Cesar : \n", 26);
			ft_putstr(c_crypt(text, gap));
			write(1, "\n\n", 2);
		}
		else
		{
			i = 1;
			write(1, "Decryptage en code Cesar : \n", 28);
			while (i < 25)
			{
				ft_putstr(c_crypt(text, i++));
				write(1, "\n\n", 2);
			}
			write(1, "------------------------\n", 25);
		}
	}
	if (is_vigenere && has_key)
	{
		write(1, "Cryptage en code Vigenere : \n", 29);
		ft_putstr(v_crypt(text, key));
		write(1, "\n\n", 2);
		write(1, "Decryptage en code Vigenere : \n", 31);
		ft_putstr(v_crypt(text, key));
	}
	return (0);
}
