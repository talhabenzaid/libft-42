/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:29:31 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/13 19:57:29 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;

	if (count && (count * size / count) != size)
		return (NULL);
	d = malloc (count * size);
	if (!d)
		return (NULL);
	ft_bzero (d, count * size);
	return (d);
}
