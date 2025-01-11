/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:47:23 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 18:48:41 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char try[] = "it is a good day";
// 	char *res;

// 	res  = ft_memchr(try, 'a', sizeof(try));
// 	printf("what u lookin for is %s\n", res);
// }

// int main()
// {
//     const char str[] = "Hello, world!";
//     char *result;

//     result = ft_memchr(str, 'o', sizeof(str));

//     if (result != NULL) {
//         printf("Found '%c' at position: %ld\n", *result, result - str);
//     } else {
//         printf("Character not found\n");
//     }
//     return 0;
// }