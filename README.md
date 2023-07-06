# 42-libft

This project is a collection of custom functions implemented in the libft library, which provides a set of common C library functions from scratch. The functions are categorized into three parts: Part 1, Part 2, and Bonus. Additionally, there are some functions specific to other projects that I implemented lately.

## Table of Contents

- [Part 1](#part-1)
- [Part 2](#part-2)
- [Bonus](#bonus)
- [Others](#others)

## Part 1

The functions in this part replicate commonly used functions from the standard C library.

| Function                             | Description                                                                                               |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------- |
| `void ft_bzero(void *str, size_t len)` | Sets `len` bytes of memory pointed to by `str` to zero.                                                    |
| `int ft_isalnum(int c)`                | Checks if `c` is an alphanumeric character.                                                               |
| `int ft_isalpha(int c)`                | Checks if `c` is an alphabetic character.                                                                 |
| `int ft_isascii(int c)`                | Checks if `c` is a valid ASCII character.                                                                 |
| `int ft_isdigit(int c)`                | Checks if `c` is a digit.                                                                                 |
| `int ft_isprint(int c)`                | Checks if `c` is a printable character.                                                                   |
| `void *ft_memchr(const void *s, int c, size_t n)`   | Locates the first occurrence of `c` in the first `n` bytes of memory pointed to by `s`. |
| `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of memory pointed to by `s1` and `s2`.                                          |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from memory area pointed to by `src` to memory area pointed to by `dest`.                   |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from memory area pointed to by `src` to memory area pointed to by `dest`, even if the memory areas overlap. |
| `void *ft_memset(void *str, int c, size_t len)` | Sets `len` bytes of memory pointed to by `str` to the value of `c`.                                          |
| `char *ft_strchr(const char *s, int c)`  | Locates the first occurrence of `c` in the string `s`.                                                      |
| `size_t ft_strlcat(char *dest, const char *src, size_t size)` | Appends the string `src` to the end of `dest` ensuring that there is enough space for the result.       |
| `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | Copies up to `size` characters from the string `src` to `dest`.                                            |
| `size_t ft_strlen(const char *str)`      | Computes the length of the string `str`.                                                                   |
| `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares the first `n` characters of `s1` and `s2`.                                                         |
| `char *ft_strnstr(const char *big, const char *little, size_t len)`| Locates the first occurrence of the string `little` in the string `big` within the first `len` characters.|
|`char *ft_strrchr(const char *s, int c)`| Locates the last occurrence of `c` in the string `s`.|
| `int ft_tolower(intc)`| Converts the character `c` to lowercase.|
| `int ft_toupper(int c)`| Converts the character `c` to uppercase.|
| `int ft_atoi(const char *str)`| Converts the string `str` to an integer.|
| `void *ft_calloc(size_t nmemb, size_t size)`| Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes the allocated memory to zero.|
| `char *ft_strdup(const char *src)`| Creates a duplicate of the string `src` in dynamically allocated memory and returns a pointer to it.|

## Part 2

This part includes additional utility functions for string manipulation and conversion.

| Function                             | Description                                                                                               |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------- |
|`char *ft_substr(char const *s, unsigned int start, size_t len)`| Extracts a substring from the string `s`, starting at index `start` with a length of `len`.|
| `char *ft_strjoin(char const *s1, char const *s2)`| Concatenates two strings `s1` and `s2` into a new string.|
| `char *ft_strtrim(char const *s1, char const *set)`| Trims the leading and trailing characters specified in `set` from the string `s1`.|
| `char **ft_split(char const *str, char charset)`| Splits the string `str` into an array of substrings using `charset` as the delimiter.|
| `char *ft_itoa(int nb)`| Converts an integer `nb` into a string.|
| `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`| Applies the function `f` to each character of the string `s` and creates a new string from the results.|
| `void ft_striteri(char *s, void (*f)(unsigned int, char *))`| Applies the function `f` to each character of the string `s` with its index as the first argument.|
| `int ft_putchar_fd(char c, int fd)`| Writes the character `c` to the file descriptor `fd`.|
| `int ft_putendl_fd(char *s, int fd)`| Writes the string `s`, followed by a newline, to the file descriptor `fd`.|
| `int ft_putstr_fd(char *s, int fd)`| Writes the string `s` to the file descriptor `fd`.|
| `int ft_putnbr_fd(int n, int fd)`| Writes the integer `n` to the file descriptor `fd`.|

## Bonus

The bonus section includes additional functions related to linked lists.

| Function                             | Description                                                                                               |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------- |
| `typedef struct s_list`| A structure representing a node in a linked list.|
| `t_list *ft_lstnew(void *content)`| Creates a new node with the specified `content`.|
| `void ft_lstadd_front(t_list **alst, t_list *new)`| Adds a new node `new` at the beginning of the linked list `alst`.|
| `int ft_lstsize(t_list *lst)`| Counts the number of nodes in the linked list `lst`.|
| `t_list *ft_lstlast(t_list *lst)`| Returns a pointer to the last node in the linked list `lst`.|
| `void ft_lstadd_back(t_list **alst, t_list *new)`| Adds a new node `new` at the end of the linked list `alst`.|
| `void ft_lstdelone(t_list *lst, void (*del)(void *))`| Deletes a node from the linked list `lst` using the provided function `del`.|
| `void ft_lstclear(t_list **lst, void (*del)(void *))`| Deletes all nodes from the linkedlist `lst` using the provided function `del`.|
| `void ft_lstiter(t_list *lst, void (*f)(void *))`| Applies the function `f` to each node in the linked list `lst`.|
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`| Applies the function `f` to each node in the linked list `lst` and creates a new list with the modified elements.|

## Others

In addition to the standard library functions, this project includes some functions specific to the Minishell project.

| Function                             | Description                                                                                               |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------- |
| `int ft_atoi2(const char *nptr, long *nbr)`| Converts the string `nptr` to a long integer and stores it in `nbr`.|
| `char **ft_dup_matrix(char **m)`| Creates a duplicate of the matrix `m`.|
| `char **ft_extend_matrix(char **in, char *newstr)`| Extends the matrix `in` by appending `newstr` as a new element.|
| `void ft_free_matrix(char ***m)`| Frees the memory allocated for the matrix `m`.|
| `int ft_isspace(char c)`| Checks if `c` is a whitespace character.|
| `char **ft_matrix_replace_in(char ***big, char **small, int n)`| Replaces the `n`th element of the matrix `big` with the matrix `small`.|
| `int ft_matrixlen(char **m)`| Computes the number of elements in the matrix `m`.|
| `int ft_putmatrix_fd(char **m, int nl, int fd)`| Writes the matrix `m` to the file descriptor `fd`, adding a newline after each row if `nl` is non-zero.|
| `int ft_strchars_i(const char *s, char *set)`| Finds the index of the first character in `s` that matches any character in `set`.|
| `int ft_strchr_i(const char *s, int c)`| Finds the index of the first occurrence of the character `c` in the string `s`.|
| `char **ft_subsplit(char const *s, char *needle)`| Splits the string `s` into substrings based on the delimiter `needle`.|
| `char **ft_lsttomatrix(t_list *lst)`| Converts a linked list `lst` into a matrix.|
| `t_list *ft_matrixtolst(char **matrix)`| Converts a matrix into a linked list.|

## Usage

To use the libft library in your project, follow these steps:

1. Clone the repository: `git clone https://github.com/your_username/your_project.git`
2. Include the `libft.h` header file in your project source files.
3. Compile your project with the `libft.a` library file.
<br/>

For detailed usage examples and further documentation, refer to the project's source code.
