/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:07:33 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 14:51:33 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 97 || c > 122)
		return (c);
	return (c - 32);
}

// int main()
// {
//     char c = toupper('A');
//     printf("%c\n", c);

//     char _c = ft_toupper('A');
//     printf("%c\n", _c);
// }