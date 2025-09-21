/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:21:56 by rhssayn           #+#    #+#             */
/*   Updated: 2025/09/17 16:21:56 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len-- >= 0)
	{
		if ((unsigned char)s[s_len] == (unsigned char)c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
