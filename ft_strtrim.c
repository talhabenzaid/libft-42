/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:04:27 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/11 11:51:39 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup (s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (j > i && check(s1[j], set))
		j--;
	if (i > j)
		return (ft_substr(s1, i, 0));
	return (ft_substr(s1, i, (j - i + 1)));
}
