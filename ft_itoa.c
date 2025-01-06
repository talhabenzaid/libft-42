/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenzaid <tbenzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:02:53 by tbenzaid          #+#    #+#             */
/*   Updated: 2024/11/11 11:49:45 by tbenzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_number(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*if_zero(void)
{
	char	*s;

	s = malloc(2 * sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	nb;

	nb = (long) n;
	if (nb == 0)
		return (if_zero ());
	count = count_number (nb);
	str = malloc ((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[count] = '\0';
	while (nb > 0)
	{
		str[--count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
