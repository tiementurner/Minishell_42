#include "helper_functions.h"

int	get_str_array_len(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i] != NULL)
		i++;
	return (i);
}
