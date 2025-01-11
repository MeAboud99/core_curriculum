/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:37:07 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:35:59 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
	{
		start = 0;
		len = 0;
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (0);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

// int main()
// {
// 	char	*s = "Hello, world!";
// 	char	*sub = ft_substr(s, 7, 5);

// 	if (sub)
// 	{
// 		printf("Substring: %s\n", sub);
// 		free(sub);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	return (0);
// }
