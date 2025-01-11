/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:39:08 by abdeahme          #+#    #+#             */
/*   Updated: 2024/11/26 17:37:51 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main (void)
// {
// 	char c;

// 	c = '1';
// 	if (ft_isalnum(c))
// 	{
// 		printf("the input %c is letter or num\n", c);
// 	}
// 	else 
// 	{
// 		printf("the input %c is not a letter or num\n", c);
// 	}
// }
