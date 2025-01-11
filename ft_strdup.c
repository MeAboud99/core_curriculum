/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:55:29 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 18:53:13 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*new;
	int		i;

	s2 = (char *)s1;
	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	while (s2[i])
	{
		new[i] = s2[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
