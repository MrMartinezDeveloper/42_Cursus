/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:29 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:29 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return NULL;
}
