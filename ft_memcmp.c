/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:52:07 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 13:09:34 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*uc_s1;
	const unsigned char	*uc_s2;

	uc_s1 = s1;
	uc_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (uc_s1[i] > uc_s2[i] || uc_s1[i] < uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};

// 	if (ft_memcmp(s, s2, 1) > 0)
// 		printf("%d\n", 1);
// 	if (memcmp(s, s2, 1) > 0)
// 		printf("%d\n", 1);
// }