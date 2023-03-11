/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:26:50 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/11 14:18:05 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*_src;
	char unsigned		*_dst;
	size_t				i;

	if (!dst && !src)
		return (dst);
	_src = (const unsigned char *)src;
	_dst = (unsigned char *)dst;
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