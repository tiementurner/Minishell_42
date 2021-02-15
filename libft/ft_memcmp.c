#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char *u_s1;
	const unsigned char *u_s2;

	if (n == 0)
		return (0);
	i = 0;
	u_s1 = s1;
	u_s2 = s2;
	while (i < n)
	{
		if (u_s1[i] != u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	return (0);
}
