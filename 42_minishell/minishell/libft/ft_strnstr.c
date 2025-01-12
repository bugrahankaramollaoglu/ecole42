/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:57:36 by bkaramol          #+#    #+#             */
/*   Updated: 2023/07/29 15:57:36 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos;

	if (*to_find == '\0')
		return ((char *)str);
	pos = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= pos)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, pos) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
