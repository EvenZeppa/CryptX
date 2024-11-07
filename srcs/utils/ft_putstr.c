#include <unistd.h>

size_t	ft_strlen(const char *s);

void	ft_putstr(char *text)
{
	write(1, text, ft_strlen(text));
}
