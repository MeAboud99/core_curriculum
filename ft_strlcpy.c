/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:18:47 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:26:48 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	char	*c;
	size_t	i;

	c = (char *)src;
	i = 0;
	if (size == 0)
		return (ft_strlen(c));
	while (c[i] && i < size - 1)
	{
		dst[i] = c[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(c));
}

// int	main(void)
// {
// 	char	src[] = "hi you, how is yc day?";
// 	char	dest[90];

// 	int copi = ft_strlcpy(dest, "aaa", 0); //ft_strlcpy(dest, src, 90);
// 	printf("the dest is %s\n", dest);
// 	printf("THE COPIED NUM IS %d\n",copi);
// }
