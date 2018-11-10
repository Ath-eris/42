void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void 	ft_striter(char *s, void (*f)(char *));
void 	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s);
char 	**ft_strsplit(char const *s, char c);
char 	*ft_itoa(int n);
void 	ft_putchar(char c);
void 	ft_putstr(char const *s);
void 	ft_putendl(char const *s);
void 	ft_putnbr(int n);
void 	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char const *s, int fd);
void 	ft_putendl_fd(char const *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
size_t	strlen(const char *s);
strdup
strcpy
strncpy
strcat
strncat
strlcat
strchr
strrchr
strstr
strnstr
strcmp
strncmp
atoi
isalpha
isdigit
isalnum
isascii
isprint
toupper
tolower
