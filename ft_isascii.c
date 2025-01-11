/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:50:42 by abdeahme          #+#    #+#             */
/*   Updated: 2024/11/26 17:12:46 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	int c;

// 	c = 1;
// 	if (ft_isascii(c))
// 	{
// 		printf("input is %d is ascii", c);
// 	}
// 	else 
// 	{
// 		printf ( "its not ascii");
// 	}
// }
