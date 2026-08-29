*This project has been created as part of the 42 curriculum by liaktas.*

# LIBFT

Description

Libft, is the first project of the 42 commoncore and aims to write various functions of libc, and to develop personalized functions for strings, memory, and linked lists. The goal of the project is to understand how "libc" functions work, to understand memory management with malloc\calloc\free, pointer and string operations, and to create a personal utility library ("libft.a") that we can reuse in our later projects in 42. The resulting "libft.a" static library (a collection of pre-compiled functions in a single file) can be included in all subsequent C projects as "libft" whenever needed.

The library consists of three main sections:
1- Libc Functions: Functions prefixed with `ft_`:
Memory:`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
Strings:`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup`
Character Check:: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

2- Additional Functions: Helpful utility functions:
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

3- Linked List: Functions designed to manipulate the custom `t_list` structure:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Instructions

Compilation: To compile the library, in the project root directory:

`make` or `make all` - compiles the source files and creates the static library `libft.a`.
`make clean` : removes all object (`.o`) files.
`make fclean` : removes all object files and the compiled `libft.a` library.
`make re` : rebuilds everything from scratch (`fclean` + `all`).

Installation

How to use it in C projects:

Copy the "libft" folder to your project
Make sure you compile and link libft in your own "Makefile"
Include the "libft.h" header file in your source files

Resources

* [Libft man pages (Linux man-pages)](https://man7.org/linux/man-pages/)
* [The GNU C Library (glibc) documentation](https://www.gnu.org/software/libc/manual/)
* 42 School — Libft subject PDF
* AI Usage: Artificial intelligence (Sonnet 5) was used to copy the ".c" type functions of the source code within the Makefile.
