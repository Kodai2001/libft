/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:58:13 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/10 14:41:28 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s;
	size_t	len;

	len = ft_strlen(s1);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s1, len);
	new_s[len] = '\0';
	return (new_s);
}

// int	main(void)
// {
// 	printf("%s\n", strdup("aiueo"));
// 	printf("%s\n", ft_strdup("aiueo"));
// }