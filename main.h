#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *s);
int print_int(long int n);
int print_bin(int *k);
int print_uint(unsigned int n);
int print_octal(int n);
int print_lowhex(int n);
int print_uphex(int n);
int print_reverse(char *s);
int print_rot13(char *s);
int printString(char *s);
int csupport(char z, int cont);

#endif
