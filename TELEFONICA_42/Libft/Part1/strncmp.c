/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:49:46 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:49:46 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    while (n--) {
        if (*s1 != *s2 || !*s1 || !*s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
    }
    return 0;
}
