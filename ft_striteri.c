/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:58:30 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/04 20:21:03 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !(*f))
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, s + i);
		i++;
	}
}

// void	my_func(unsigned int i, char *s)
// {
// 	*s += i;
// }

// int	main(void)
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, my_func);
// 	if (!strcmp(s, "0123456789"))
// 		printf("%d\n", 1);
// }