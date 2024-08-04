/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:47:59 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:47:59 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1) {
    char *copia;
    size_t longitud = ft_strlen(s1);

    copia = (char *)malloc((longitud + 1) * sizeof(char));
    if (!copia)
        return NULL;
    ft_memcpy(copia, s1, longitud + 1);
    return copia;
}
