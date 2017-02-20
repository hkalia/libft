/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 15:09:38 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/20 15:39:13 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# ifndef GRDS
#  define GRD(a, b) do{if(a){return(b);}}while(0)
#  define GRD1(a, b, c) do{if(a){b;return(c);}}while(0)
#  define GRD2(a, b, c, d) do{if(a){b;c;return(d);}}while(0)
#  define GRD3(a, b, c, d, e) do{if(a){b;c;d;return(e);}}while(0)
#  define GRD4(a, b, c, d, e, f) do{if(a){b;c;d;e;return(f);}}while(0)
#  define GRD5(a, b, c, d, e, f, g) do{if(a){b;c;d;e;f;return(g);}}while(0)
#  define GRD6(a, b, c, d, e, f, g, h) do{if(a){b;c;d;e;f;g;return(h);}}while(0)
# endif

# include <stddef.h>

typedef struct		s_lst
{
	void			*ptr;
	size_t			sze;
	struct s_lst	*nxt;
}					t_lst;

void				ft_lstadd(t_lst **alst, t_lst *elm);
void				ft_lstaddend(t_lst *lst, t_lst *elm);
void				ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_lst *lst, void (*f)(t_lst *elm));
t_lst				*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elm));
t_lst				*ft_lstnew(const void *src, size_t sze);

#endif
