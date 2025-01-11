/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:39:59 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/04 14:38:58 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*b;
	size_t	i;

	i = 0;
	b = (char *)s;
	while (n > i)
	{
		b[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// int main() 

// {
// 	char str[10];

//     ft_memset(str, 66, sizeof(str));

//     for (int i = 0; i < 10; ++i) 
// 	{
//     	printf("%c ", str[i]);
//     }
//     return 0;
// }