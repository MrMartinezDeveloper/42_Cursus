/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:39 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:39 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
    size_t longitud_origen = ft_strlen(src);
    if (dstsize > 0) {
        size_t copia_len = (longitud_origen >= dstsize) ? dstsize - 1 : longitud_origen;
        ft_memcpy(dst, src, copia_len);
        dst[copia_len] = '\0';
    }
    return longitud_origen;
}
