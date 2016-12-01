/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgengo <jgengo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:03:55 by jgengo            #+#    #+#             */
/*   Updated: 2016/12/01 10:17:47 by jgengo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddnext(t_list *lst, t_list *elm)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	lst->next = elm;
}
