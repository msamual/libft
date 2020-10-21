
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *i;

	if (!lst || !f)
		return (NULL);
	i = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (!i)
		return (NULL);
	res = i;
	while (lst->next)
	{
		i->next = ft_lstnew(f(lst->next)->content, f(lst->next)->content_size);
		if (!i->next)
			return (NULL);
		i = i->next;
		lst = lst->next;
	}
	return (res);
}
