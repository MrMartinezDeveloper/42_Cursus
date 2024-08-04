/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:53 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:53 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    const char *ultimo = NULL;
    while (*s) {
        if (*s == (char)c)
            ultimo = s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return (char *)ultimo;
}
