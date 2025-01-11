/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:51:00 by abdeahme          #+#    #+#             */
/*   Updated: 2024/11/27 15:17:05 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
// 	char	c;

// 	c = '3';
// 	if (ft_isalpha(c))
// 	{
// 		printf("Character '%c' is a letter.\n", c);
// 	}
// 	else
// 	{
// 		printf("Character '%c' is not a letter.\n", c);
// 	}
// 	return (0);
// }
