#include <stdlib.h>

void		*ft_calloc(size_t count, size_t size)
{
	void	*space;
	size_t	i;

	space = (void *)malloc(count * size);
	if (!space)
		return (0);
	i = 0;
	while (i < (count * size))
	{
		((char *)space)[i] = 0;
		i++;
	}
	return (space);
}
