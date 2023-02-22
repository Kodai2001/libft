/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:39:03 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/02 13:11:53 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	if (ft_strlen(s) <= 2147483647)
		write(fd, s, ft_strlen(s));
}

// int main()
// {
//     char* str = "aiueo";
//     ft_putstr_fd(str, 1);
// }