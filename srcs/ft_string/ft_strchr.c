/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:39:21 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/02 11:56:40 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strchr(const char *src, int src_x)
{
	while (*src != (char)src_x)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char *)src);
}
