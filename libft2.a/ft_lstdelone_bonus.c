/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:05 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/03 18:36:45 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *head, void (*del)(void *))
{
	if (!head || !del)
		return ;
	del(head->content);
	free(head);
}
// void del(void *content){
// 	free(content);
// }
// #include <libc.h>
// int main(){
// 	t_list *new_node = ft_lstnew((strdup("said")));
// 		ft_lstdelone(new_node,del);
// 		puts("its ok !!");
// 		printf("before delete %s\n",new_node->content);
		
// }
