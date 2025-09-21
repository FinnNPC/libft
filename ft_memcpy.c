/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:40:48 by rhssayn           #+#    #+#             */
/*   Updated: 2025/09/19 21:40:48 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pdst = dest;
	psrc = src;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dest);
}
