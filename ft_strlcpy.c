/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:37:38 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 15:07:37 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	dest[10];
// 	char src[] = "coucou";
// 	memset(dest, 'A', 10);
// 	(ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0
// 			&& dest[1] == 'A')
//     printf("%zu\n", ft_strlcpy(dest, src, 1));
//     printf("%c\n", dest[0]);
// }