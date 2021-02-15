#include "read_cmdline.h"

void		read_fail(char *line)
{
	if (line != NULL)
		free(line);
	exit(0);
}

int			found_newline(char **line)
{
	*line = ft_strdup("");
	return (1);
}
