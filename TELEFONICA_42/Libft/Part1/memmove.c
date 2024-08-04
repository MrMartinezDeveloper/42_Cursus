/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:21 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:21 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *destino = (unsigned char *)dst;
    const unsigned char *origen = (const unsigned char *)src;
    if (destino < origen) {
        while (len--)
            *destino++ = *origen++;
    } else {
        destino += len;
        origen += len;
        while (len--)
            *--destino = *--origen;
    }
    return dst;
}
