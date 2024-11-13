/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:11 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/03 19:22:39 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *head, void (*f)(void *))
{
	t_list	*temp;

	if (!head)
		return ;
	temp = head;
	while (temp)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
// void	fr_aff(void *c){
// 	printf("%s\n",c);
// }

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

	
	

// 	ft_lstiter(n1,fr_aff);
	
// }

