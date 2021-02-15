#include "builtins.h"

void	builtin_export(t_data *data, t_node *node)
{
	if (node->right == NULL)
		builtin_export_no_arguments(data->env_variables);
	else
		builtin_export_variable(data, node);
}
