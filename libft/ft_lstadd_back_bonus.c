#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = *alst;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
}
