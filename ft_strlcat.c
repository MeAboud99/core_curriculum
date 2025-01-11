/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:46:14 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 18:45:43 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!dst && !size)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	if (d_len < size)
	{
		while (src[i] && d_len + i < size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (d_len >= size)
		d_len = size;
	return (d_len + s_len);
}

// int main ()
// {
// 	char string2 [20] = " I fly ";
// 	char string1 [20] = "on the sky";
// 	size_t	result = ft_strlcat(string2, string1, 50);

// 	printf ("the length is %zu\n", result);
// 	printf ("the concatenated strings says %s\n", string2);
// 	return 0;
// }
