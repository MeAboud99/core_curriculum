/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:23:55 by abdeahme          #+#    #+#             */
/*   Updated: 2024/11/27 15:14:18 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	c;

// 	c = ' ';
// 	if (ft_isprint(c))
// 	{
// 		printf ("%c ist printable", c);
// 	}
// 	else
// 	{
// 		printf ("%c ist nicht printable", c);
// 	}
// }
