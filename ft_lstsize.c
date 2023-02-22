/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:00:04 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 13:05:38 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size_count;

	size_count = 0;
	while (lst)
	{
		size_count++;
		lst = lst->next;
	}
	return (size_count);
}

// int main()
// {
//     t_list *lst;
//     lst.
//     int ans = ft_lstsize()
// }