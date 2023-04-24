#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1


#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE 1
#define CONVET_UNSIGNED 2

/**
 * struct parameters - parametrs struct
 * @unsign: flag if unsigned value
 * @plus_flag: on if plus_flag
 * @space_flag: on if hashtag_flag
 * @hashtag_flag: on if flag
 * @minus_flag: on
 * @width: var
 * @precision: var
 * @h_modifier: var
 * @l_modifier: var
 */
typedef struct parameters
{
	unsigned int unsign		: 1;
	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int minus_flag		: 1;
	unsigned int width		: 1;
	unsigned int precision		: 1;
	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;
} params_t;

/**
 * struct specifier - strcut token
 * @specifier: format token
 * @f: function
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);

/* print _functions.c*/
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);

/* number.c module*/
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);
#endif
