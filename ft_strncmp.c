/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:59:51 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/25 17:33:24 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*uc_s1;
	const unsigned char	*uc_s2;
	size_t				i;

	if (n == 0)
		return (0);
	uc_s1 = (const unsigned char *)s1;
	uc_s2 = (const unsigned char *)s2;
	i = 0;
	while (uc_s1[i] && uc_s2[i] && i < n)
	{
		if (uc_s1[i] != uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		i++;
	}
	if (i != n && uc_s1[i] && !uc_s2[i])
		return (uc_s1[i]);
	if (i != n && uc_s2[i] && !uc_s1[i])
		return (uc_s2[i] * -1);
	return (0);
}

// int main()
// {
//     char s1[] = "aiueo";
//     char s2[] = "aiue\0o";

//     printf("%d\n", ft_strncmp(s1, s2, 6));
//     printf("%d\n", strncmp(s1, s2, 6));
// }