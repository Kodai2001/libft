/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:36:24 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/25 18:35:54 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return ((void *)mem);
}

// int main()
// {
//     char str[] = "";
//     char _str[] = "";

//     memset(str, '*', 3);
//     ft_memset(_str, '*', 3);

//     printf("%s\n",str);
//     printf("%s\n",_str);
// }