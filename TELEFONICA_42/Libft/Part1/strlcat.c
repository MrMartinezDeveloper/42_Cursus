/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:35 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:35 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t longitud_destino = ft_strlen(dst);
    size_t longitud_origen = ft_strlen(src);
    if (longitud_destino >= dstsize)
        return dstsize + longitud_origen;
    size_t copia_len = dstsize - longitud_destino - 1;
    if (copia_len > longitud_origen)
        copia_len = longitud_origen;
    ft_memcpy(dst + longitud_destino, src, copia_len);
    dst[longitud_destino + copia_len] = '\0';
    return longitud_destino + longitud_origen;
}
