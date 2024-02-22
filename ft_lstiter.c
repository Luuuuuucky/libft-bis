#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		if (!lst->next)
			return ;
		lst = lst->next;
	}
}
