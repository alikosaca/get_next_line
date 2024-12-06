/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akosaca <akosaca@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-25 14:41:19 by akosaca           #+#    #+#             */
/*   Updated: 2024-11-25 14:41:19 by akosaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"



// size_t ft_strlen(const char *s) {
//     size_t i = 0;
//     while (s && s[i])
//         i++;
//     return i;
// }

// char *ft_strchr(const char *s, int c) {
//     if (!s)
//         return NULL;
//     while (*s) {
//         if (*s == (char)c)
//             return (char *)s;
//         s++;
//     }
//     return NULL;
// }

// char *ft_strjoin(char *s1, char *s2) {
//     size_t len1 = ft_strlen(s1);
//     size_t len2 = ft_strlen(s2);
//     char *new_str = malloc(len1 + len2 + 1);
//     size_t i = 0;

//     if (!new_str)
//         return NULL;
//     while (s1 && *s1)
//         new_str[i++] = *s1++;
//     while (s2 && *s2)
//         new_str[i++] = *s2++;
//     new_str[i] = '\0';
//     return new_str;
// }
