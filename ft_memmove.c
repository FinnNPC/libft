/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:51:54 by rhssayn           #+#    #+#             */
/*   Updated: 2025/09/20 17:51:54 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pdst = dest;
	psrc = src;
	if (dest > src)
	{
		while (n--)
		{
			pdst[n] = psrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
