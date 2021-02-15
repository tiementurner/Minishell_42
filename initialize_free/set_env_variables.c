#include "initialize.h"

void		set_env_variables(t_data *data, char **envp)
{
	int	len;
	int	i;

	len = get_str_array_len(envp);
	data->env_variables = ft_calloc(len + 1, sizeof(char *));
	if (!data->env_variables)
		exit_error("Malloc failed");
	i = 0;
	while (i < len)
	{
		data->env_variables[i] = ft_strdup(envp[i]);
		i++;
	}
	data->env_variables[i] = NULL;
}
