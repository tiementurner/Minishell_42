#include "error.h"

void	exit_error(char *message)
{
	ft_printf("Error: %s\n", message);
	exit(1);
}

void	ambiguous_error(t_node *node)
{
	t_node *remember;

	remember = node;
	if (node->left)
	{
		node = node->left;
		while (node != NULL && node->type != AMBIGUOUS_REDIRECT)
			node = node->left;
	}
	if (node != NULL && node->type == AMBIGUOUS_REDIRECT)
		ft_printf("Minishell: %s: ambiguous redirect\n", node->content);
	else
		ft_printf("Minishell: %s: ambiguous redirect\n", remember->content);
}
