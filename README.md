# C - Printf

**Team Members:** 
1. [Mido-Hyuga](https://github.com/Mido-Hyuga)
2. [amalia8029](https://github.com/amalia8029)

## Description

This project is a custom implementation of the `printf` function in C. The `printf` function is a powerful and commonly used function in C that is used to print formatted output to the standard output stream. Our goal was to create our own version of this function, adhering to the specifications and behavior of the standard `printf` function.

## Functionality

Our custom `printf` function supports the following conversion specifiers:

- `%c`: Character
- `%s`: String
- `%%`: Percentage sign (literal `%`)

The `printf` function can be used to print characters, strings, and the percentage sign. It can handle multiple arguments and format them based on the provided conversion specifiers.

## How to Use

1. Clone the repository from [C - Printf](https://github.com/Mido-Hyuga/C-Printf).

2. Include the header file containing our custom `printf` function in your C program:

```c
#include "our_printf.h"
```

3. Use the custom `printf` function in your program just like the standard `printf`:

```c
int main(void) {
    char ch = 'A';
    char *str = "Hello, World!";
    int percentage = 100;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Percentage: %% %d\n", percentage);

    return (0);
}
```

4. Compile and run your C program:

```bash
gcc -Wall -Werror -Wextra -pedantic your_program.c our_printf.c -o output
./output
```

## Project Structure

The project is organized as follows:

```
.
├── _printf.c
├── our_printf.h
├── your_program.c
├── README.md
└── ...
```

- `_printf.c`: Contains the implementation of our custom `printf` function.
- `our_printf.h`: Header file containing function prototypes and necessary includes.
- `your_program.c`: Your C program that uses the custom `printf` function.
- `README.md`: This README file providing information about the project.

## Contributions

We worked collaboratively to create this custom `printf` function. Each team member contributed to different aspects of the project, including design, coding, and testing.

## Support or Contact

If you encounter any issues or have any questions regarding the project, feel free to contact us through our GitHub profiles.

---
