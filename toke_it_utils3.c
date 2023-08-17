/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toke_it_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iszitoun <iszitoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:57:46 by iszitoun          #+#    #+#             */
/*   Updated: 2023/08/13 05:37:55 by iszitoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void    ft_down(t_tokenz *m)
{
    m->i--;
    m->j--;
}

void    redi_is_more(char *str, t_tokenz *m)
{
    if (ft_isspace(str[m->i]))
		m->array[m->j] = '2';
	else
	    m->array[m->j] = '*';
}