/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:00 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/03 18:17:21 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void *))
{
	t_list	*temp;

	if (head == NULL || del == NULL)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		ft_lstdelone (*head, del);
		*head = temp;
	}
}

// void delete(void *head){
// 	free(head);	
// }
// #include <libc.h>
// int main(){
// 	char s1[] = "said" ,s2[] = "salim" ,s3[] = "sara";
// 	t_list *n1 =ft_lstnew(strdup("said" ));
// 	t_list *n2 =ft_lstnew(strdup("salim"));
// 	t_list *n3 =ft_lstnew(strdup("sara"));
// 	// t_list *n2 =ft_lstnew(malloc(sizeof(char *)));
// 	// t_list *n3 =ft_lstnew(malloc(sizeof(char *)));
	
// 	if (!n1 || !n2 || !n3 ){
// 		return 0;
// 	}
// 	n1->next = n2;
// 	n2->next = n3;
	
// 	ft_lstclear(&n1,delete);
// 	t_list *t = n1;
// 	while (t){
// 		printf("%s\n",(char *)t->content);
// 		t = t->next;
// 	}
	
// 	if (!n1)
// 		printf("good clear!!");
// 	else 
// 		printf("memoire crach...");
	

// }