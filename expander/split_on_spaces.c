#include "expander.h"

static void	in_quote(char *str, int *i, char c)
{
	(*i)++;
	while (str[*i] != c && str[*i] != '\0')
		(*i)++;
}

static int	needs_to_be_split(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\"')
			in_quote(str, &i, '\"');
		else if (str[i] == '\'')
			in_quote(str, &i, '\'');
		else if (str[i] == ' ')
			return (1);
		else
			i++;
	}
	return (0);
}

void		split_on_spaces(t_data *data, t_node *node)
{
	while (node != NULL)
	{
		if (needs_to_be_split(node->content) == 1)
			node_add_back(data, node);
		node = node->right;
	}
}
