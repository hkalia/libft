/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:37:27 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/20 15:41:18 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lst.h>

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*new;
	t_lst	*i;

	new = f(lst);
	i = new;
	while (lst->nxt)
	{
		i->nxt = f(lst->nxt);
		i = i->nxt;
		lst = lst->nxt;
	}
	return (new);
}
