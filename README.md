# Ft_printf

Short Description
-----------------

- Educational C library that implements a subset of the standard `printf` API.
- Provides formatted output for basic types and pointers, implemented on top of a small custom `libft`.

Key Features
------------

- Implement common specifiers: `%c`, `%s`, `%p`, `%d`/`%i`, `%u`, `%x`, `%X`, and `%%`.
- Minimal, testable modules: separate handlers for characters, strings, numbers, unsigned, hex, and pointers.
- Uses variadic arguments (`stdarg.h`) and compact recursive algorithms for numeric/hex printing.
- Small footprint: designed as a static library to link into small C projects or tests.

Tech Stack
- Language: C (ANSI/POSIX-compatible)
- Build: GNU Make, `gcc`
- Libraries: project-local `libft` (utilities and helpers)
- Platform: POSIX-compatible (Linux/macOS)

Architecture & Design
---------------------

- Single public entry: `ft_printf` (delegates to per-specifier helper functions).
- Source split into focused modules under `src/` (e.g. `ft_print_char.c`, `ft_print_nbr.c`, `ft_print_ptr.c`) to keep logic testable and maintainable.
- Format parsing is minimal and deterministic: each recognized specifier is dispatched to a dedicated printer that returns its output length.

Getting Started
---------------

Prerequisites
- `gcc` or compatible C compiler
- `make`
- POSIX shell environment

Installation
- Build the library from the project root:

```sh
make
```

This runs the project `Makefile` and the `libft/Makefile` to produce the static archive(s) used for linking.

Running the project
- The repository builds a static library (archive). To run code that uses `ft_printf`, compile a small test program and link the produced archive. Example:

```sh
# compile your test program (test.c should `#include "ft_printf.h"`)
gcc test.c ./libftprintf.a -I./src -o test
./test
```

Usage
-----

- Include the public header and call `ft_printf` like the standard `printf` for supported specifiers.

Example (C):

```c
#include "ft_printf.h"

int main(void)
{
	int n = 42;
	ft_printf("char: %c\n", 'A');
	ft_printf("string: %s\n", "hello");
	ft_printf("int: %d, unsigned: %u\n", -7, 7);
	ft_printf("hex: %x %X, ptr: %p\n", 255, 255, &n);
	return 0;
}
```

Public header: `src/ft_printf.h` contains the `ft_printf` declaration and helper prototypes.

What I Learned / Technical Challenges
-------------------------------------

- Correct use of `stdarg.h` and handling of default argument promotions.
- Designing small, single-responsibility printer functions for each format specifier.
- Implementing hexadecimal and pointer printing using recursion while tracking byte counts.
- Integrating with a minimal `libft` to remain self-contained and portable.

Future Improvements
-------------------

- Add support for width, precision, and flags (align, padding, plus/space, etc.).
- Expand specifier coverage (floating point, `o`, `%n`, localized behavior).
- Add buffered output to reduce write syscalls for performance.
- Add unit tests and CI to validate conformance against edge cases.

Author & Contact
----------------
- Author: schamizo
- Repository: project files in this workspace (see `src/` and `libft/`)
- Contact: salvadorchamizo@gmail.com
