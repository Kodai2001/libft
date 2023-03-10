/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:44:32 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/11 14:18:40 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	if (dst == src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	c_dst = (unsigned char *)dst;
	c_src = (const unsigned char *)src;
	while (n)
	{
		c_dst[n - 1] = c_src[n - 1];
		n--;
	}
	return ((void *)(c_dst));
}

// int main()
// {
// 	char _src[] = "abcdefgh";
// 	ft_memmove(_src+1, _src, 7);
// 	printf("%s\n", _src);
// }