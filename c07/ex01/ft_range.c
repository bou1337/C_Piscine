/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:10:50 by iait-bou          #+#    #+#             */
/*   Updated: 2023/10/01 00:33:26 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	n;

	n = 0;
	p = malloc(sizeof(int *) * (max - min));
	if (max <= min || p == NULL)
	{
		p = NULL;
		return (p);
	}
	while (min < max)
		p[n++] = min++;
	return (p);
}
