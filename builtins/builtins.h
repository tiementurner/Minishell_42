#ifndef BUILTINS_H
# define BUILTINS_H

# include "../initialize_free/free.h"
# include "../helper_functions/helper_functions.h"
# include "../error/error.h"
# include "../struct.h"
# include "../parser/parser.h"
# include "../expander/expander.h"

void	builtin_echo(t_node *node);
void	builtin_cd(t_node *command, char **envp);
void	builtin_pwd(void);
void	builtin_export(t_data *data, t_node *node);
void	builtin_export_no_arguments(char **envp);
void	builtin_export_variable(t_data *data, t_node *node);
void	builtin_unset(t_data *data, t_node *node);
void	builtin_env(char **envp);
void	builtin_exit(t_data *data, t_node *node);

#endif
