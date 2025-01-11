/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:02:32 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:30:29 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char string1[] = "dont cut crees";
// 	int c = 99;

// 	printf("lets try this %s\n", ft_strrchr(string1, c));
// 	printf("lets try this %s\n", strchr(string1, c));
// 	printf("lets try this %s\n", strrchr(string1, c));
// }
