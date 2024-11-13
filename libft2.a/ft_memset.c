/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:54 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/12 14:26:07 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*led;

	led = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		led[i] = (unsigned char)c;
		i++;
	}
	return (led);
}

// int main()
// {
// 	char c;
// 	int nb = 1337;
// 	char result[5];
// 	int i = 4;

// 	ft_memset(result + i, '\0', 1);
// 	while (nb > 0)
// 	{
// 		--i;
// 		c = (nb % 10) + '0';
// 		ft_memset(result + i, c, 1);
// 		nb /= 10;
// 	}
// 	printf("%s\n",result);
// }