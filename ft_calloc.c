/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:25:53 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/06 15:34:24 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int main() 
// {
//     size_t num = 5;
//     size_t size = sizeof(int);
//     int *arr = (int *)ft_calloc(num, size);
//     if (arr != NULL) 
// {
//         for (size_t i = 0; i < num; i++) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
// }
//        free(arr);
// } 
// else 
// {
//    printf("Memory allocation failed\n");
// }
// return 0;
// }
