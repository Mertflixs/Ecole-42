/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:59:39 by agunes            #+#    #+#             */
/*   Updated: 2022/06/09 11:59:40 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_LIST_H
# define FT_LIST_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif