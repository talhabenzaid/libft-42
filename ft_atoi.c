/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:33:02 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/14 09:45:12 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int signe)
{
	if (signe == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	r;

	r = 0;
	i = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r > (9223372036854775807 - (str[i] - '0')) / 10)
			return (check_overflow (signe));
		r = (r * 10) + str[i] - '0';
		i++;
	}
	return ((int)(r * signe));
}
