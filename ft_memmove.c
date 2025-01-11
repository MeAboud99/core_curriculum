/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:18:46 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/04 23:12:17 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy (d, s, n);
	return (d);
}

//  int main()
//  {
// 	const int src[10] = {1,2,3,4,5,6,7,8,9,10} ;
// 	int dest[10];
// 	memmove(dest, src, sizeof(int) * 10);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("dest [%d]=%d\n", i, dest[i]);
// 	}
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("src [%d]=%d\n", i, src[i]);
// 	}
// 	return(0);
//  }