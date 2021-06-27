#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *n;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		n = *lst;
		*lst = n->next;
		free(n);
	}
	*lst = NULL;
}
