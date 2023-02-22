/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:57:37 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 15:19:06 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	str_len;

	str_len = 0;
	while (*str++)
		str_len++;
	return (str_len);
}

// int main()
// {
//     printf("%lu\n", ft_strlen(NULL));
//     // printf("%lu", strlen(NULL));
// }