/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:18:53 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:20:15 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main (void)
// {
// 	int c;

// 	c = 7;
// 	if(ft_digit(c))
// 	{
// 		printf("the input %d is a number", c);
// 	}
// 	else
// 	{
// 		printf("the input %d is not a number", c);
// 	}
// }
