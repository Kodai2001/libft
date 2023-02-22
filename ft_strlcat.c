/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:23:16 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 15:22:24 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (d_len >= dstsize)
		return (s_len + dstsize);
	while (*dst)
		dst++;
	while (src[i] && (i < (dstsize - d_len - 1)))
		*dst++ = src[i++];
	*dst = '\0';
	return (s_len + d_len);
}

// int	main(void)
// {
// 	char	dest[30];
// 	char	*src;

// 	memset(dest, 0, 30);
// 	src = (char *)"12345";
// 	dest[0] = 'B';
// 	//ft_strlcat(dest, src, 1);
// 	strlcat(dest, src, 0);
// 	printf("%s\n", dest);
// }
