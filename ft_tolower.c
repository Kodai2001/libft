/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:18:29 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 14:51:23 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 65 || c > 90)
		return (c);
	return (c + 32);
}

// int main()
// {
//     char c = tolower('a');
//     printf("%c\n", c);

//     char _c = ft_tolower('a');
//     printf("%c\n", _c);
// }