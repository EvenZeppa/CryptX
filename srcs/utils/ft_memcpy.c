#include "../../includes/utils.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = -1;
	if (!dest && !src)
		return (NULL);
	while (++i < n)
		ptr_dest[i] = ptr_src[i];
	return (dest);
}
