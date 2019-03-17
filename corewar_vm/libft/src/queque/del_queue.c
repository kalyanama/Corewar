/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_queue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:59:36 by mmalanch          #+#    #+#             */
/*   Updated: 2019/03/04 15:59:47 by mmalanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	del_queue(t_queue *queue)
{
	while (queue->size != 0)
		dequeue(queue);
	ft_memdel((void **)&queue);
}
