/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:32:25 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:11:47 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int					ft_atoi(const char *str);
char				*ft_strcat(char *str1, const char *str2);
int					ft_strcmp(const char *str1, const char *str2);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strrchr(const char *str, int c);
void				*ft_memcpy(void *dst, const void *str, size_t n);
void				*ft_memmove(void *dst, const void *str, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strcpy(char *dst, const char *str);
char				*ft_strncat(char *str1, const char *str2, size_t n);
char				*ft_strncpy(char *strd, const char *strs, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memchr(const void *str1, int c, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
void				*ft_memset(void *b, int c, size_t x);
char				*ft_strdup(const char *str1);
void				*ft_bzero(void *str1, size_t n);
void				*ft_memccpy(void *strd, const void *strs, int c, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *strs, size_t dstsize);
int					ft_strnequ(char const *str1, char const *str2, size_t n);
char				*ft_strnstr(const char *stack, const char *ned, size_t len);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *str, char c);
char				*ft_itoa(int n);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
#endif
