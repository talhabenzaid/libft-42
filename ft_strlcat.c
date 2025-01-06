/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:53:42 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/13 20:01:44 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen (dst);
	while (src [j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
