/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:09 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:29:40 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main()
// {
// 	char	ksa[] = "hello camper";
// 	int	c;
// 	char *s;

// 	c = 99;
// 	s = ft_strchr(ksa, c);
// 	printf("Let's try this: %s\n", s);
// 	printf("Let's try this: %s\n", s);
// 	printf("Let's try this: %s\n", ft_strchr(ksa, 'p'));
// 	printf("Let's try this: %s\n", ft_strchr(ksa, 'x'));
// 	return (0);
// }
