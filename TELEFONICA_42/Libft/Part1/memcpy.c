/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:16 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:16 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n) {
    unsigned char *destino = (unsigned char *)dst;
    const unsigned char *origen = (const unsigned char *)src;
    while (n--)
        *destino++ = *origen++;
    return dst;
}
