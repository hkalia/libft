/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:37:30 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/20 15:43:17 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lst.h>
#include <ft_string.h>
#include <stdlib.h>

t_lst	*ft_lstnew(const void *src, size_t sze)
{
	t_lst	*new;

	GRD((new = malloc(sizeof(t_lst))) == 0, 0);
	if (src == 0)
	{
		new->ptr = 0;
		new->sze = 0;
	}
	else
	{
		GRD((new->ptr = malloc(sze)) == 0, 0);
		ft_memcpy(new->ptr, src, sze);
		new->sze = sze;
	}
	new->nxt = 0;
	return (new);
}
