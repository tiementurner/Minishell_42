#ifndef FREE_H
# define FREE_H

# include "../minishell.h"
# include "../struct.h"
# include "../error/error.h"

void	free_list_content(void *content);
void	free_struct(t_data *data);
void	free_struct_error(t_data *data, char *message);
void	free_str_array(char **str_array);

#endif
