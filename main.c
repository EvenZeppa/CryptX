#include <string.h>
#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*text;
	char	*key;
	int		gap;
	int		is_vigenere;
	int		is_cesar;
	int		i;

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
			printf("%s", text);
		}
		if (ft_memcmp(argv[i], "-k", 2) == 0)
		{
			key = malloc(sizeof(char) * (ft_strlen(argv[i]) - 1));
			if (!key)
				return (1);
			ft_memcpy(key, &argv[i][2], (ft_strlen(argv[i]) - 1));
			printf("%s", key);
		}
		i++;
	}
	return (0);
}
