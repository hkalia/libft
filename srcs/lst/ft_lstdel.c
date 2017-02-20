/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:37:18 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/20 15:40:00 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lst.h>

void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	if ((*alst)->nxt)
		ft_lstdel(&(*alst)->nxt, del);
	ft_lstdelone(alst, del);
}
