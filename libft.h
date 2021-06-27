#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
int					ft_isprint(int ch);
int					ft_isdigit(int ch);
int					ft_isascii(int ch);
int					ft_isalpha(int ch);
int					ft_isalnum(int ch);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_memcmp(const void *src, const void *src2, size_t n);
int					ft_isprint(int ch);
int					ft_isdigit(int ch);
int					ft_isascii(int ch);
int					ft_isalpha(int ch);
int					ft_isalnum(int ch);
int					ft_lstsize(t_list *lst);

char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strnstr(const char *big, const char *small, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(const char *str);
char				*ft_strchr(const char *str, int ch);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);

void				*ft_memset(void *src, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *src, int c, size_t n);
void				*ft_memccpy(void *dest, const void *src,\
					int ch, size_t len);
void				*ft_calloc(size_t num, size_t size);
void				ft_bzero(void *str, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_strdel(char **s);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));

size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsz);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);

#endif
