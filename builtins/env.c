#include "builtins.h"

static int	check_for_equals_sign(char *var)
{
	int	i;

	i = 0;
	while (var[i] != '\0')
	{
		if (var[i] == '=')
			return (1);
		i++;
	}
	return (0);
}

void		builtin_env(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] != NULL)
	{
		if (check_for_equals_sign(envp[i]) == 1)
		{
			if (ft_printf("%s\n", envp[i]) == -1)
			{
				g_question_mark = 1;
				return ;
			}
		}
		i++;
	}
	g_question_mark = 0;
}
