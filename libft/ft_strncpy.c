/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakwins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:01:34 by msakwins          #+#    #+#             */
/*   Updated: 2016/11/12 16:43:12 by msakwins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (ft_strlen(src) < len)
	{
		ft_memcpy(dst, src, ft_strlen(src));
		ft_bzero(dst + ft_strlen(src), len - ft_strlen(src));
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
