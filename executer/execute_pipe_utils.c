#include "executer.h"

static int	count_cmds(t_node *node)
{
	int	i;

	i = 0;
	while (node->type == PIPE)
	{
		i++;
		node = node->left;
	}
	return (i + 1);
}

t_pipe		*init_pipe_switch(t_data *data, t_node *node)
{
	t_pipe	*pipe_switch;

	pipe_switch = malloc(sizeof(t_pipe));
	if (!pipe_switch)
		free_struct_error(data, "Malloc failed");
	pipe_switch->num_cmds = count_cmds(node);
	return (pipe_switch);
}
