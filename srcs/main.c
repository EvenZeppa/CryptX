#include "../includes/utils.h"

void	cesar(char *text, int gap, int is_crypt);
void	vigenere(char *text, char *key, int is_crypt);

int	main(int argc, char *argv[])
{
	char	*text = "";
	char	*key = "";
	int		gap;
	int		is_vigenere;
	int		is_cesar;
	int		i;
	int		is_crypt;

	gap = 0;
	is_vigenere = 0;
	is_cesar = 0;
	is_crypt = 0;
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
		if (ft_memcmp(argv[i], "-C", 2) == 0)
			is_cesar = 1;
		if (ft_memcmp(argv[i], "-V", 2) == 0)
			is_vigenere = 1;
		if (ft_memcmp(argv[i], "-c", 2) == 0)
			is_crypt = 0;
		if (ft_memcmp(argv[i], "-d", 2) == 0)
			is_crypt = 1;
		i++;
	}
	if (is_cesar)
		cesar(text, gap, is_crypt);
	if (is_vigenere)
		vigenere(text, key, is_crypt);
	return (0);
}
