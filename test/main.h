#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/*
 * int _putchar(char character);
 * int printf_char(va_list args, int printed);
 * int printf_string(va_list args, int printed);
 * int printf_integer(int n);
 * int format_handler(const char *format, va_list args, int printed);
 * int printf_binary(unsigned int num, int printed);
 * int _printf(const char *format, ...);
 * int _x(unsigned int n, int uppercase);
 * int printf_octal(unsigned int n);
 * int printf_unsigned_int(unsigned int n);
 * int printf_reverse(va_list args, int printed);
 * int printf_pointer(va_list args, int printed);
 * int _puts(char *str);
 * */

/*new updates*/
int _putchar(char character);
int printf_char(va_list args, int printed);
int _printf(const char *format, ...);
int printf_integer(int n);
int printf_unsigned_int(unsigned int n);
int printf_octal(unsigned int n);
int printf_binary(unsigned int n);
int printf_hex(unsigned int n, int is_upper);
int printf_address(void *p);
char *printf_base(unsigned int n, int base);
int printf_string(char *str);
int printf_to_upper(int len, char *str);
int format_handler(char specifier, va_list *args);
int format_string(va_list *args);
/*
 * int print_base(unsigned int n, int base, char *digits);
 * int printf_character(int c);
 * int printf_str(char *s);
 * int printf_int(int n);
 * int printf_unsigned_integer(unsigned int n);
 * char *printf_base_char(unsigned int n, char base);
 * int printf_unknown(char format);
 * int _strlen(char *s);
 * int _itoa(int n, char *s);
 * int _utoa(unsigned int n, char *s);
 * void _reverse(char *s);
 * */

#endif
