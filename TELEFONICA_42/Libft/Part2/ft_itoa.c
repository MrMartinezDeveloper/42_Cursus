/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart  <mikemart @student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:50:09 by mikemart          #+#    #+#             */
/*   Updated: 2024/08/04 22:50:09 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_numlen(int n) {
    size_t len = 1;
    if (n < 0)
        len++;
    while (n /= 10)
        len++;
    return len;
}

char *ft_itoa(int n) {
    char *str;
    size_t len = ft_numlen(n);
    unsigned int num = (n < 0) ? -n : n;

    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return NULL;
    str[len] = '\0';
    if (n < 0)
        str[0] = '-';
    while (len-- && str[len] != '-') {
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    return str;
}
