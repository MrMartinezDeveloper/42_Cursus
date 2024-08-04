/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:08 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:08 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *ptr = (const unsigned char *)s;
    while (n--) {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}
