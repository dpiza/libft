# Libft

![42-Badge](https://img.shields.io/badge/%C3%89cole-42SP-blue)![C-Badge](https://img.shields.io/badge/Language-C-lightgrey)[![42Unlicense](https://img.shields.io/badge/License-42Unlicense-yellowgreen)](https://github.com/gcamerli/42unlicense)

## Description

This project aims to code a C library regrouping usual functions that will
be used for all next projects. Later projects are included to the library. Ex: ft_printf.


## Functions

Re-code of a set of the libc functions, as defined in their man.
Some functions present the same prototype and behaviors as the originals. Others are either not included in the libc, or included in a different form.

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
|[`ft_calloc`](/src/ft_calloc.c)|allocate dynamic memory|
|[`ft_strdup`](/src/ft_strdup.c)|duplicate a string|
|[`ft_substr`](/src/ft_substr.c)|return a substring from a string|
|[`ft_strjoin`](/src/ft_strjoin.c)|string concatenation|
|[`ft_strtrim`](/src/ft_strtrim.c)|copy string trimming selected characters|
|[`ft_split`](/src/ft_split.c)|split string with character as delimiter|
|[`ft_itoa`](/src/ft_itoa.c)|return a string representing an integer|
|[`ft_strmapi`](/src/ft_strmapi.c)|apllies function to each character|
|[`ft_putchar_fd`](/src/ft_putchar_fd.c)|outputs character to fd|
|[`ft_putstr_fd`](/src/ft_putstr_fd.c)|outputs string to fd|
|[`ft_putendl_fd`](/src/ft_putendl_fd.c)|outputs string to fd followed by a new line|
|[`ft_putnbr_fd`](/src/ft_putnbr_fd.c)|outputs integer to fd|


## Project Functions

The following functions have been added to the library as result of later projects.

| Function |  Description |
|---|---|
|[`get_next_line`](https://github.com/dpiza/get_next_line)|Returns a line, read from a file descriptor|
|[`ft_printf`](https://github.com/dpiza/ft_printf)|Re-code of printf|

## Usage

To compile the library, either run:

```
$ make
```
or if the ft_printf is allowed in the project:
```
$ make printf
```

Then, include its header in the code:
```
#include "includes/libft.h"
```

or, with ft_printf allowed:
```
#include "includes/ft_printf.h"
```

Lastly, add the following flags when compiling the project:
```
-L./libft_dir -lft 
```

## License

This work is published under the terms of [42 Unlicense](https://github.com/gcamerli/42unlicense)
