/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:11:46 by rhssayn           #+#    #+#             */
/*   Updated: 2025/09/18 15:11:46 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (const unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
