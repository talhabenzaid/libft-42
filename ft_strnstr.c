/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:42:15 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/13 20:04:45 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
