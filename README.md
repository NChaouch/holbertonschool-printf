# C-Printf Project.

This project was to re-create the function printf, our requirements was structure, library, variadic functions and .C files.


## Main Prototype

_printf - Function That Display. 

format - String

... - Variable contain data and display .


```bash
int _print(const char *format, ...)
```

## Files Used

[do_printf.c](https://github.com/NChaouch/holbertonschool-printf/blob/main/do_printf.c)

[printffunction.c](https://github.com/NChaouch/holbertonschool-printf/blob/main/printffunction.c)

[main.h](https://github.com/NChaouch/holbertonschool-printf/blob/main/main.h)

[man_3_printf](https://github.com/NChaouch/holbertonschool-printf/blob/main/man_3_printf)

[_putchar.c](https://github.com/NChaouch/holbertonschool-printf/blob/main/_putchar.c)


## Compilation And Exec.

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
Compilation command will create test file after executed.
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
## Specifiers

```
print_char %c  Print a character

print_string %s  Print a string

print_percent  %  Print the symbol %
```
## Team

Files got created in sandbox terminal of intranet or VSCode.

Nour Chaouch's Repo, invited Nail Ozer.
