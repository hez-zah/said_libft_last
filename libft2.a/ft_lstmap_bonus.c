/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:21 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/09 15:06:04 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *head, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*old;

	if (!head || !f)
		return (NULL);
	new = NULL;
	while (head)
	{
		old = ft_lstnew (f(head->content));
		if (!old)
		{
			ft_lstclear(&old, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, old);
		head = head->next;
	}
	return (new);
}
// void	fr_aff(void *c){
// 	printf("%s\n",(char)c);
// }
// void del(void *content){
// 	 	free(content);
//  }

// int main(){
// 	#include <string.h>
// 	// char *s1;
// 	// char *s2;
// 	// char *s3;
// 	char *re;
// 	t_list *n1 =ft_lstnew(strdup("SAID"));
// 	t_list *n2 =ft_lstnew(strdup("HIBA"));
// 	t_list *n3 =ft_lstnew(strdup("CHAHD"));
// 	t_list *result =malloc(sizeof(char *));
	
	
	
// 	n1->next =n2;
// 	n2->next =n3;
// 	ft_lstmap(n1,fr_aff,del);
	
	
// }
