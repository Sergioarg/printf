# Printf. :pencil2:

_In this repository you will find a replica of the PRINTF of C language function_.

---

### ¿How to compile?

- _Run that command on your console where the project is located._

```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c && ./a.out
```
---

### ¿How is it used?

- These are some examples of how you can use it.

```c
    #include "holberton.h"
    /**
    * Filename: main.c
    * main - Entry point
    *
    * Return: Always 0
    */
    int main(void)
    {
        /* Print strings */
        _printf("Hello World\n");
        /* Print integers */
        _printf("%d\n", 123);
        /* Print a single char */
        _printf("%c\n", '1');
        return (0);
    }
```
---
### 📖 - Man Page

* To see the _printf manual you must execute this command.

```
man ./man_3_printf
```
---

### 📖 - Man Page

* You can see the Flowchart in this link: <a href="https://miro.com/welcomeonboard/EsJ8ag4mHZM0pZoZLp6w8ZnQ7cV9c3x4So5UJnWLSajA0TjO7jFH3EYw8VU5ZTMa">Flowchart</a>

---

### 🗃 - Files

No|Files|Description
:---:|:---|:---:
1|[README.md](./README.md)| It contains all the information about the project and all its content.
2|[_printf.c](./_printf.c)| Is the main file where we call the other functions.
3|[conversion_replace.c](./conversion_replace.c)| In this file we convert the type of data that is to print.
4|[get_specifier.c](./get_specifier.c)| In this file we choose the type of data you want to print by means of an structure.
5|[holberton.h](./holberton.h)| Header file with prototypes and functions.
6|[man_3_printf](./man_3_printf)| Manual of the function _printf.
7|[print_numbers.c](./print_numbers.c)| In this file is the function so that it only prints numbers.
8|[putchar_func.c](./putchar_func.c)| File that prints a single character.

---

### Authors. <img src="https://image.flaticon.com/icons/png/512/25/25231.png" width="25" height="25">

- *Manuel Bedoya* : [@ManuBedoya](https://github.com/ManuBedoya)
- *Jean Pierre Ballen* : [@jeanpierreba](https://github.com/jeanpierreba)
- *Sergio Ramos* : [@Sergioarg](https://github.com/Sergioarg)
