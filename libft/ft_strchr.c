#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i < (s_len + 1))
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
