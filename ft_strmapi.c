/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:25:21 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/02 18:56:59 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
