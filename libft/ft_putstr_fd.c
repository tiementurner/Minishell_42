#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
