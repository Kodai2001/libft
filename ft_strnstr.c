/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayashikdi <hayashikdi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:26:58 by hayashikdi        #+#    #+#             */
/*   Updated: 2023/02/20 22:36:28 by hayashikdi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!haystack || (len == 0 && needle_len != 0))
		return (0);
	if (needle_len == 0 || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (
			haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (j == needle_len)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

// int main()
// {
//     char *a = ft_strnstr("aiueo", "aiueo", 10);
//     char *b = strnstr("aiueo", "aiueo", 10);

//     printf("%p\n", a);
//     printf("%p\n", b);
// }