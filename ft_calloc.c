/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:14:40 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 15:17:29 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if ((SIZE_MAX / size) < count)
		return (NULL);
	p = (char *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// int main()
// {
// 	if (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL)
// 		printf("%d\n", 1);
// }