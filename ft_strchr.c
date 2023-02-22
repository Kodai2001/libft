/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:22:34 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/11 15:18:45 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc_c;
	int				i;

	uc_c = (unsigned char)c;
	i = 0;
	if (uc_c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == uc_c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char s[] = "tripouille";
// 	if (ft_strchr(s, 0) == s + strlen(s))
//         printf("%d\n", 1);
// }