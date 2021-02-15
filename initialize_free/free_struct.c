#include "free.h"

void	free_struct(t_data *data)
{
	free(g_work_dir);
	if (data->cmdline != NULL)
		free(data->cmdline);
	free_str_array(data->env_variables);
	if (data->lexer.token_list != NULL)
		ft_lstclear(&data->lexer.token_list, free_list_content);
	delete_tree(data->tree);
}

void	free_struct_error(t_data *data, char *message)
{
	free(g_work_dir);
	if (data->cmdline != NULL)
		free(data->cmdline);
	free_str_array(data->env_variables);
	if (data->lexer.token_list != NULL)
		ft_lstclear(&data->lexer.token_list, free_list_content);
	if (data->tree != NULL)
		delete_tree(data->tree);
	exit_error(message);
}
