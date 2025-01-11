/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:17:12 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:32:40 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

// int main(int argc, char *argv[])
// 	{
//           int res;

//            if (argc < 3) {
//                fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
//                exit(EXIT_FAILURE);
//            }

//            if (argc == 3)
//                res = strcmp(argv[1], argv[2]);
//            else
//                res = strncmp(argv[1], argv[2], atoi(argv[3]));

//            if (res == 0) {
//                printf("<str1> and <str2> are equal");
//                if (argc > 3)
//                    printf(" in the first %d bytes\n", atoi(argv[3]));
//                printf("\n");
//            } else if (res < 0) {
//                printf("<str1> is less than <str2> (%d)\n", res);
//            } else {
//                printf("<str1> is greater than <str2> (%d)\n", res);
//            }
//            exit(EXIT_SUCCESS);
//        }