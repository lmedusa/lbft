#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *n;

	if (lst == NULL)
		return ;
	n = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (n->next)
			n = n->next;
		n->next = new;
	}
}
