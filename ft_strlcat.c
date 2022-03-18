/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:38:36 by smikayel          #+#    #+#             */
/*   Updated: 2022/03/12 14:40:02 by smikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t dstsize)
{
	size_t	destlen;
	size_t	sourcelen;

	destlen = ft_strlen((char *)dest);
	sourcelen = ft_strlen((char *)source);
	if (destlen >= dstsize)
		return (dstsize + sourcelen);
	if (dstsize - destlen <= sourcelen)
	{
		ft_memcpy(dest + destlen, source, dstsize - 1);
		dest[dstsize - 1] = 0;
	}
	else
		ft_memcpy(dest + destlen, source, sourcelen + 1);
	return (destlen + sourcelen);
}
