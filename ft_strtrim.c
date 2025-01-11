/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:03:37 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/12 13:47:13 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isunwanted(char c, char const *unwanted);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	final;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	final = ft_strlen(s1) - 1;
	while (ft_isunwanted(s1[start], set) && s1[start])
		start++;
	while (ft_isunwanted(s1[final], set) && final > 0)
		final--;
	if (final < start)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	str = ft_substr(s1, start, final - start + 1);
	if (!str)
		return (NULL);
	return (str);
}

static int	ft_isunwanted(char c, char const *unwanted)
{
	int	i;

	i = 0;
	while (unwanted[i])
	{
		if (unwanted[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// int main() 
// {
//     char *result;

//     result = ft_strtrim("   Hello World!   ", " ");
//     printf("Test 1 (Trim spaces): '%s'\n", result);
//     free(result);

//     result = ft_strtrim("   Hello World!   ", " H");
//     printf("Test 2 (Trim 'H' and space): '%s'\n", result);
//     free(result);

//     result = ft_strtrim("", " ");
//     printf("Test 3 (Empty string): '%s'\n", result);  // Expected: ""
//     free(result);

//     result = ft_strtrim("NoTrimHere", " ");
//     printf("Test 4 (No trim): '%s'\n", result);  // Expected: "NoTrimHere"
//     free(result);

//     result = ft_strtrim("  ", " ");
//     printf("Test 5 (Only spaces): '%s'\n", result);  // Expected: ""
//     free(result);

//     return 0;
// }
