/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:26:43 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/13 19:59:03 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return ((char *) dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
