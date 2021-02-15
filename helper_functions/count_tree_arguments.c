#include "helper_functions.h"

int	count_tree_arguments(t_node *node)
{
	int	i;

	i = 0;
	while (node != NULL)
	{
		i++;
		node = node->right;
	}
	return (i);
}
