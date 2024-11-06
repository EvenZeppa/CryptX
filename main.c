#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
void	ft_putstr(char *text);

void	cesar(char *text, int gap);
void	vigenere(char *text, char *key);

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*text = "";
	char	*key = "";
	int		gap;
	int		is_vigenere;
	int		is_cesar;
	int		i;

	gap = 0;
	is_vigenere = 0;
	is_cesar = 0;
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
		cesar(text, gap);
	if (is_vigenere)
		vigenere(text, key);
	return (0);
}
