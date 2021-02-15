#include "helper_functions.h"

char	*get_work_dir_prompt(void)
{
	char	buff[4096];

	getcwd(buff, 4096);
	if (g_work_dir != NULL)
		free(g_work_dir);
	return (ft_strdup(buff));
}
