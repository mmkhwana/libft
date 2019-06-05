/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:32:25 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/05 15:55:24 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int					ft_atoi(const char *str);
char				*ft_strcat(char *restrict str1, const char *restrict str2);
int					ft_strcmp(const char *str1, const char *str2);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strrchr(const char *str, int c);
void				*ft_memcpy(void *dst, const void *str, size_t n);
void				*ft_memmove(void *dst, const void *str, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strcpy(char *dst, const char *str);
char				*ft_strncat(char *str1, const char *str2, int n);
char				*ft_strncpy(char *strd, const char *strs, int n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memchr(const void *str1, int c, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
void				*ft_memset(void *b, int c, size_t x);
char				*ft_strdup(const char *str1);
void				*ft_bzero(void *str1, size_t n);
void				*ft_memccpy(void *restrict strd, const void *restrict strs, int c, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
#endif
