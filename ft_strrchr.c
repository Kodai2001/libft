/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:22:31 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/03/04 20:42:05 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (len && s[len - 1])
	{
		if (s[len - 1] == (char)c)
			return ((char *)(s + (len - 1)));
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
//     char s[] = "computer program";
// 	char *p = ft_strrchr(s, 'p');
// 	printf("%s\n", p);
// }
