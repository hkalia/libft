/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:37:21 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/20 15:40:25 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lst.h>
#include <stdlib.h>

void	ft_lstdelone(t_lst **alst, void (*del)(void *, size_t))
{
	del((*alst)->ptr, (*alst)->sze);
	free(*alst);
	*alst = 0;
}
