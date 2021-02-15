#include "free.h"

void	free_str_array(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i] != NULL)
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
}
