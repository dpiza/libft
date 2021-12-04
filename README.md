# Libft

![42-Badge](https://img.shields.io/badge/%C3%89cole-42SP-blue)![C-Badge](https://img.shields.io/badge/Language-C-lightgrey)[![42Unlicense](https://img.shields.io/badge/License-42Unlicense-yellowgreen)](https://github.com/gcamerli/42unlicense)

## Description

This project aims to code a C library regrouping usual functions that will
be used for all next projects. Later projects are included to the library. Ex: ft_printf.


## Functions

Some functions present the same prototype and behaviors as the originals. Others are either not included in the libc, or included in a different form.

### Libc Functions

Re-code of a set of the libc functions, as defined in their man.

| Function |  Description |
|---|---|
|[`ft_isalpha`](/src/ft_isalpha.c)|alphabetic character check|
|[`ft_isdigit`](/src/ft_isdigit.c)|digit character check|
|[`ft_isalnum`](/src/ft_isalnum.c)|alphanumeric character check|
|[`ft_isascii`](/src/ft_isascii.c)|ASCII character check|
|[`ft_isprint`](/src/ft_isprint.c)|printable character check|
|[`ft_strlen`](/src/ft_strlen.c)|calculate the length of a string|
|[`ft_memset`](/src/ft_memset.c)|fill memory with a constant byte|
|[`ft_bzero`](/src/ft_bzero.c)|zero a byte string|
|[`ft_memcpy`](/src/ft_memcpy.c)|copies n bytes from src to dst|
|[`ft_memmove`](/src/ft_memmove.c)|copies n bytes from src to dst|
|[`ft_strlcpy`](/src/ft_strlcpy.c)|size-bounded string copying|
|[`ft_strlcat`](/src/ft_strlcat.c)|size-bounded string concatenation|
|[`ft_toupper`](/src/ft_toupper.c)|convert character to uppercase|
|[`ft_tolower`](/src/ft_tolower.c)|convert character to lowercase|
|[`ft_strchr`](/src/ft_strchr.c)|locate character in string|
|[`ft_strrchr`](/src/ft_strrchr.c)|locate character in string backwards|
|[`ft_strncmp`](/src/ft_strncmp.c)|compare two strings|
|[`ft_memchr`](/src/ft_memchr.c)|scan memory for a character|
|[`ft_memcmp`](/src/ft_memcmp.c)|compare memory areas|
|[`ft_strnstr`](/src/ft_strnstr.c)|locate a substring in a string|
|[`ft_atoi`](/src/ft_atoi.c)|convert a string to an integer|


### Aditional Functions

| Function |  Description |
|---|---|
|[`ft_calloc`](/src/ft_calloc.c)|allocate dynamic memory|
|[`ft_strdup`](/src/ft_strdup.c)|duplicate a string|
|[`ft_substr`](/src/ft_substr.c)|return a substring from a string|
|[`ft_strjoin`](/src/ft_strjoin.c)|string concatenation|
|[`ft_strtrim`](/src/ft_strtrim.c)|copy string trimming selected characters|
|[`ft_split`](/src/ft_split.c)|split string with character as delimiter|
|[`ft_itoa`](/src/ft_itoa.c)|return a string representing an integer|
|[`ft_strmapi`](/src/ft_strmapi.c)|apllies the provided function to each character|
|[`ft_striteri`](/src/ft_striteri.c)|applies the provided function to each character passed by reference|
|[`ft_putchar_fd`](/src/ft_putchar_fd.c)|outputs character to fd|
|[`ft_putstr_fd`](/src/ft_putstr_fd.c)|outputs string to fd|
|[`ft_putendl_fd`](/src/ft_putendl_fd.c)|outputs string to fd followed by a new line|
|[`ft_putnbr_fd`](/src/ft_putnbr_fd.c)|outputs integer to fd|

### Bonus Functions

The bonus functions are made to manage a list defined by the following struct:

```C
typedef struct	s_list
{
	void			*content;	/* the data contained in the element */
	struct s_list 	*next;		/* the next element’s address || NULL if last element */
}	t_list;
```

| Function |  Description |
|---|---|
|[`ft_lstnew`](/src/ft_lstnew.c)|create a new element|
|[`ft_lstadd_front`](/src/ft_lstadd_front.c)|adds the element at the beginning of the list|
|[`ft_lstadd_back`](/src/ft_lstadd_back.c)|adds the element at the end of the list|
|[`ft_lstsize`](/src/ft_lstsize.c)|counts the number of elements in a list|
|[`ft_lstlast`](/src/ft_lstlast.c)|returns the last element of the list|
|[`ft_lstdelone`](/src/ft_lstdelone.c)|deletes the content and free the element|
|[`ft_lstclear`](/src/ft_lstclear.c)|deletes and free every element and its successors|
|[`ft_lstiter`](/src/ft_lstiter.c)|iterates the list applying the provided function|
|[`ft_lstmap`](/src/ft_lstmap.c)|iterates the list applying the provided function and return a list of affected elements|

### Project Functions

The following functions have been added to the library as result of later projects.

| Function |  Description |
|---|---|
|[`get_next_line`](https://github.com/dpiza/get_next_line)|Returns a line, read from a file descriptor|
|[`ft_printf`](https://github.com/dpiza/ft_printf)|Re-code of printf|

## Usage

To compile the library, either run:

```Shell
$ make
```
or if the ft_printf is allowed in the project:
```Shell
$ make printf
```

Then, include its header in the code:
```C
#include "libft.h"
```

or, with ft_printf allowed, you can add:
```C
#include "ft_printf.h"
```

Lastly, add the following flags when compiling the project:
```Shell
-L./libft_dir -I./libft_dir/includes -lft 
```

## License

This work is published under the terms of [42 Unlicense](https://github.com/gcamerli/42unlicense)
