/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:17 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/08 19:46:34 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
}
// int main(){
// 	#include <string.h>
// 	// char *s1;
// 	// char *s2;
// 	// char *s3;
// 	t_list *n1 =ft_lstnew(strdup("SAID"));
// 	t_list *n2 =ft_lstnew(strdup("HIBA"));
// 	t_list *n3 =ft_lstnew(strdup("CHAHD"));
// 	n1->next =n2;
// 	n2->next =n3;
	
// 	printf("last node est %s",ft_lstlast(n1)->content);
// }