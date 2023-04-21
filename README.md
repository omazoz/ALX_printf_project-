# Project 0x11. C - printf


## Collaborators
- Oumayma Mazoz-  [omazoz](https://github.com/omazoz).
.
- B. Hamza Khan -(https://github.com/mrv8x))

## Description
The goal of this project is to build a simplified version of the printf function in the C programming language.

## Function Description
The `_printf` function prints formatted output to the standard output stream. It's a variadic function that can take a variable number of arguments, similar to the original printf function. It supports the following conversion specifiers:

- `%c` : prints a single character.
- `%s` : prints a string of characters.
- `%d`, `%i` : prints a decimal (base 10) number.
- `%u` : prints an unsigned decimal (base 10) number.
- `%o` : prints an octal (base 8) number.
- `%x`, `%X`: prints a hexadecimal (base 16) number.
- `%%` : prints a literal % character.

## File Structure
The project directory contains the following files:

`README.md`: the file that you're currently reading. It contains information about the project, its goals, and the file structure.

`_printf.c`: this file contains the implementation of the custom printf function.

`_put_bin.c`: this file contains the implementation for printing unsigned integers in binary format.


`_put_num.c`: this file contains the implementation for printing decimal and integer values.

`_put_X.c`: this file contains the implementation for printing unsigned integers in uppercase hexadecimal format.

`_put_x.c`: this file contains the implementation for printing unsigned integers in lowercase hexadecimal format.

`_putstr.c`: this file contains the implementation for printing null-terminated strings.

`_put_o.c`: this file contains the implementation for printing unsigned integer in octal format.

`_put_S.c`: this file contains the implementation for printing string of characters with non-printable characters encoded.

`_put_p.c`: this file contains the implementation for printing pointer address.

`main.h`: this file contains the function prototypes and necessary header files.

## ABout Files: 
Each file has a specific purpose and contains the necessary code to implement the custom printf function. The `_printf.c` file is the main file and contains the implementation of the custom printf function. The rest of the files contain helper functions that are called by _printf.c to handle specific conversion specifiers.

The `main.h` file contains the function prototypes for all the functions in the project and includes the necessary header files. This file is included in all the other source files to ensure that they have access to the function prototypes and header files.

## Usage

To use the custom printf function in your own program, simply include the main.h header file and call the function with the desired format string and any necessary arguments.

Example usage:
```
#include "main.h"

int main(void)
{
    _printf("%s %d %b %#X %o\n", "Welcome to the printf function!", 256, 256, 65535, 63);
    return (0);
}
```
This will output:
```
Welcome to the printf function! 256 100000000  0xFFFF 77

```
## Testing

