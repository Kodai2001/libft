/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:26:50 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 14:57:19 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*_src;
	char		*_dst;
	size_t		i;

	if (!dst && !src)
		return (dst);
	_src = (char *)src;
	_dst = (char *)dst;
	i = 0;
	while (i < n)
	{
		_dst[i] = _src[i];
		i++;
	}
	return ((void *)_dst);
}

// int main()
// {
//     char dest[100];
//     memset(dest, 'A', 100);

//     char *rtn = (char *)ft_memcpy(dest, NULL, 0);
//     if ((rtn == dest) && (dest[0] == 'A'))
//         printf("%d\n", 0);
// }