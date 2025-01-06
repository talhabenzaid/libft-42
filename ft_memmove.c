/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:34:19 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/13 19:59:44 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		return (dst);
	}
}
