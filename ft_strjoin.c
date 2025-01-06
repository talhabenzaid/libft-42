/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:50:13 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/11 11:51:11 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join(char const *s1, char const *s2)
{
	char	*d;
	int		j;
	int		i;

	j = ft_strlen (s1) + ft_strlen (s2) + 1;
	d = malloc(j * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		d[i] = s2[j];
		i++;
		j++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup (s2));
	else if (!s2)
		return (ft_strdup (s1));
	return (join (s1, s2));
}
