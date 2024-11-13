/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:02 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/12 16:20:52 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	sign;
	long	result;
	long	sg;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		sg = result;
		result = (result * 10) + (str[i] - 48);
		if ((sg != (result / 10) && sign == 1))
			return (-1);
		if ((sg != (result / 10) && sign == -1))
			return (0);
		i++;
	}
	return (result * sign);
}
// int main(){
// 	printf("%d\n",ft_atoi("-78945611665161161351616156151654894611907005653323230232323232323"));
// 	printf("%d\n",atoi("-78945611665161161351616156151654894611907005653323230232323232323"));
// }