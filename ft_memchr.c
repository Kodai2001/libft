/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 06:59:46 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/04 20:55:00 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc_c;
	unsigned char	*uc_str;

	i = 0;
	uc_c = (unsigned char)c;
	uc_str = (unsigned char *)s;
	while (i < n)
	{
		if (uc_str[i] == uc_c)
			return (uc_str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	//check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks();
// 	if (ft_memchr(s,  2 + 256, 3) == s + 2)
// 		printf("%d\n", 1);
// }