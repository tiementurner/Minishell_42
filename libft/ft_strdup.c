#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s1_dup;
	int		i;

	len = ft_strlen(s1);
	s1_dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1_dup)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}
