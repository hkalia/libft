/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:39:39 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/02 12:22:37 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <str.h>

void	ft_striter(char *src, void (*f)(char *))
{
	if (src != 0 && f != 0)
		while (*src)
			f(&(*src++));
}