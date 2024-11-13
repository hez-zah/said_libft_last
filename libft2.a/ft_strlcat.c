/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:07:57 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/12 18:57:14 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dest && !size)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

// #include <string.h>

// int main()
// {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";

//     size_t result = ft_strlcat(dest, src,9);
// 	//size_t result = ft_strlcat(dest, src,14);
//     printf("Resulting string: %s\n", dest);
//     printf("Total length: %zu\n", result);

//     return 0;
// }