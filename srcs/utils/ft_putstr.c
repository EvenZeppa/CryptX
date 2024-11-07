#include "../../includes/utils.h"

void	ft_putstr(char *text)
{
	write(1, text, ft_strlen(text));
}
