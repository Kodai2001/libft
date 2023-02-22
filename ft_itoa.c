/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:04:48 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 12:55:40 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_nbrlen(long n)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	digit_count;
	long			tmp;
	long			l_n;

	l_n = n;
	digit_count = ft_nbrlen(l_n);
	str = (char *)malloc(sizeof(char) * ((digit_count) + 1));
	if (!str)
		return (NULL);
	str[digit_count--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		l_n *= -1;
	}
	tmp = l_n;
	while (tmp > 9)
	{
		str[digit_count--] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	str[digit_count] = tmp + '0';
	return (str);
}

// int main()
// {
// 	char *res = ft_itoa(-2147483648);
//     printf("%s\n", res);
// }