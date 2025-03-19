/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:05:18 by iait-bou          #+#    #+#             */
/*   Updated: 2023/10/01 00:16:02 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		n;

	n = 0;
	while (src[n])
		n++;
	p = malloc(sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	n = 0;
	while (src[n])
	{
		p[n] = src[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}
