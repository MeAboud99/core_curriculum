/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:42:53 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 18:52:18 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*our;
	unsigned char	*at;

	our = (unsigned char *) haystack;
	at = (unsigned char *) needle;
	i = 0;
	if (at[i] == '\0')
		return ((char *)our);
	while (our[i] && i < len)
	{
		j = 0;
		while (our[i + j] == at[j] && (i + j) < len)
		{
			if (at[j + 1] == '\0')
				return ((char *)&our[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *haystack = "hello people! today we have an amazing test ";
//     char *needle = "have an";
//     size_t len = 50;

//     char *findthis = ft_strnstr(haystack, needle, len);

//     if (findthis)
//         printf("We found this '%s' in the haystack\n", findthis);
//     else
//         printf("Substring not found.\n");

//     return 0;
// }