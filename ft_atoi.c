/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:38:07 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/04 20:32:35 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow_underflow(int nbrsign)
{
	if (nbrsign == 0)
		return ((int)LONG_MAX);
	return ((int)LONG_MIN);
}

static int	is_char_valid(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	return (i);
}

static int	check_nbrsign(const char *str, int i)
{
	int	is_negative;

	is_negative = 0;
	if (str[i] != '\0' && str[i] == '-')
		is_negative = 1;
	else if (str[i] == '+')
		is_negative = 0;
	return (is_negative);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	nbr;
	int			is_negative;

	nbr = 0;
	is_negative = 0;
	i = is_char_valid(str);
	if ((str[i] != '\0' && str[i] == '-') || str[i] == '+')
	{
		is_negative = check_nbrsign(str, i);
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		if ((nbr > LONG_MAX / 10) || ((nbr == LONG_MAX / 10) && ((str[i]
						- '0') > LONG_MAX % 10)))
			return (check_overflow_underflow(is_negative));
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	if (is_negative == 1)
		return (nbr * -1);
	return (nbr);
}

// int	main(void)
// {
// 	char str[] = " 	\n -2147483647";
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }