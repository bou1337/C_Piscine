/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:37:52 by iait-bou          #+#    #+#             */
/*   Updated: 2023/09/18 12:08:38 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i ++;
	}
}
