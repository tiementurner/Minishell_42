#ifndef HELPER_FUNCTIONS_H
# define HELPER_FUNCTIONS_H

# include <stddef.h>
# include "../minishell.h"
# include "../parser/parser.h"
# include "../libft/libft.h"

int		get_str_array_len(char **str_array);
int		count_tree_arguments(t_node *node);
char	*strjoin_free(char *s1, char *s2);
char	*get_work_dir_prompt(void);
int		compare_both(char *s1, char *s2);

#endif
