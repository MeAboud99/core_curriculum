/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:44:38 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/06 12:57:46 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*casted;

	casted = (char *)s;
	while (n--)
	{
		*casted = '\0';
		casted++;
	}
}

// int	main(void)
// {
// 	char x[] = "lets try this";
// 	ft_bzero(x, 1);
// 	printf("the vari has %s bytes", x);
// }
