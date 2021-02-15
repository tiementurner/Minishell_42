#include "free.h"

void	free_list_content(void *content)
{
	if (content)
		free(content);
}
