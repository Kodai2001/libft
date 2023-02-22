/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:46:23 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/02 13:11:43 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	if (!s || fd < 0)
		return ;
	c = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &c, 1);
}

// int main()
// {
//     char* str = "aiueo";
//     ft_putendl_fd(str, 1);
// }