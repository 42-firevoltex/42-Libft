#ifndef LIB_FT_H
# define LIB_FT_H

# include <unistd.h>
# include <stdlib.h>
# include <strings.h>

void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char const *str);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		*ft_memset(void *ptr, int value, size_t num);
void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		*ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_strclr(char *as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putnbr(int nb);
void		ft_putnbr_fd(int nb, int fd);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);

int			ft_strlen(char const *str);
int			ft_isdigit(int nb);
int			ft_isalpha(char c);
int			ft_isblank(char c);
int			ft_isspace(char c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_atoi(const char *str);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_strcmp(char const *s1, char const *s2);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
int			ft_memcmp(void const *str1, void const *str2, size_t n);

char		*ft_strdup(char *str);
char		*ft_toupper(char *str);
char		*ft_tolower(char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
char		*ft_strtrim(char const *s);
char		*ft_strchr(char const *s, int c);
char		*ft_strrchr(char const *s, int c);
char		*ft_strstr(char const *s1, char const *s2);
#endif 
