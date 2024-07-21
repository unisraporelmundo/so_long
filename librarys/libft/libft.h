/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:21:22 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/17 15:07:59 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char	*dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *str, int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strchr(const char *str, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t size);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *str, int c);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
char		**ft_split(const char *str, char c);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif 
