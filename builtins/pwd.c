#include "builtins.h"

void	builtin_pwd(void)
{
	char	buff[4096];
	char	*result;

	result = getcwd(buff, 4096);
	if (result == NULL)
	{
		g_question_mark = 1;
		return ;
	}
	ft_printf("%s\n", buff);
	g_question_mark = 0;
}
