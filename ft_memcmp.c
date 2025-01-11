/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:17:24 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 18:51:01 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

// int	main(void) 
// {
// 	const	char *str1 = "HElloWorld!";
// 	const	char *str2 = "hELlworsld!";
// 	int 	result = ft_memcmp(str1, str2, 13);

// 	if (result == 0)
// 	{
// 		printf("The memory blocks are equal.\n");
// 	}
// 	else if (result < 0) 
// 	{
// 		printf("The first memory block is less than the second.\n");
// 	}
// 	else printf ("The first memory block is greater than the second.\n");
// 	return (0);
// }
