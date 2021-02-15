#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *u_s;
	size_t				i;

	u_s = s;
	i = 0;
	while (i < n)
	{
		if (u_s[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
