/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:00:45 by mdulcie           #+#    #+#             */
/*   Updated: 2020/10/29 16:10:42 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
void * ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void * ft_memcpy(void * dst, const void * src, size_t n);
void * ft_memccpy(void * dst, const void * src, int c, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
void * ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(const char	*s);
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t  ft_strlcat(char * dst, const char * src, size_t dstsize);
char * ft_strchr(const char *s, int c);
char * ft_strrchr(const char *s, int c);
char * ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void * ft_calloc(size_t count, size_t size);
char * strdup(const char *s1);

#endif
