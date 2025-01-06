/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:55:30 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/07 10:41:57 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc (1, 1));
	d = malloc ((len + 1) * sizeof(char));
	if (!d)
		return (NULL);
	while (s[i] && i != start)
		i++;
	j = 0;
	while (s[i] && j < len)
	{
		d[j] = s[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (d);
}
