#ifndef UTILS_H
# define UTILS_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putstr(char *text);
size_t	ft_strlen(const char *s);

#endif
