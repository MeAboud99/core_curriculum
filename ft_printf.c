/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeahme <abdeahme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:44:30 by abdeahme          #+#    #+#             */
/*   Updated: 2025/01/11 17:42:03 by abdeahme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	print_format(char spec, va_list args)
{
	int	count;

	count = 0;
	if(spec == 'c')
		count += ft_putchar_fd(va_arg(args, int));
	else if(spec == 's')
		count += print_str(va_arg(args, char *));
	else if(spec == 'p')
		count += print_pointer(va_arg(args ))
	
}

int	ft_printf(const char *strt, ...)
{
	va_list			args;
	int				count;
	
	count = 0;
	va_start(args, strt);
	
	while (*strt != '\0')
	{
		if (*strt == '%')
			count += print_format(*(++strt), args);
		else
			count +=write(1, strt, 1);
		++strt;
	}
	va_end(args);
	return(count);
}

int main()
{
	int	count;
	
	count = ft_printf("Hello %s\n", "tester");
	ft_printf("the chars count is %d\n", count);
	return(0);
}

//CspdiuxX% THEY ARE

//va_start, va_arg, va_copy, va_end

//just print a string without any special cases
