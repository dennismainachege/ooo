#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int _printf(const char *format, ...);
void conversion_handler(const char *format, va_list extras);
#endif