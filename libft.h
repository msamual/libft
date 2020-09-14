
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *ptr, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
void	*ft_memmove(void *dest, const void *source, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(void *arr1, void *arr2, size_t size);
int	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dest, const char *append);
char	*ft_strncat(char *dest, const char *append, size_t n);
char	*ft_strlcat(char *dst, const char *append, size_t size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t loc);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
