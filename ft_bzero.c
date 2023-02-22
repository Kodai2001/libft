/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:01:36 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/02 13:10:59 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*mem;
	size_t	i;

	mem = (char *)s;
	i = 0;
	while (i < n)
	{
		mem[i] = '\0';
		i++;
	}
}

// int main()
// {
//     char str[] = "012345";
//     char _str[] = "012345";

//     bzero(str, 2);
//     ft_bzero(_str, 2);

//     printf("%s\n", str + 2);
//     printf("%s\n", _str + 2);
// }