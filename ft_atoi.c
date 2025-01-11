/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:57:37 by abdeahme          #+#    #+#             */
/*   Updated: 2024/12/10 19:40:05 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' \
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

// int main (void)
// {
// 	char check1[] = "dfdf13123df";
// 	char check2[] = "  \n-1f3123df";
// 	printf("after atoi is %d\n", ft_atoi(check1));
// 	printf("after atoi is %d\n", ft_atoi(check2));

// 	char check3[] = "dfdf13123df";
// 	char check4[] = "  \n-1f3123df";
// 	printf("after atoi is %d\n", atoi(check3));
// 	printf("after atoi is %d\n", atoi(check4));
// }