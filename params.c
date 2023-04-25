#include "main.h"

/**
 * init_params - clear struct fields
 * @params: the parameters struct
 * @ap: the arg pointer
 * Return: void
 */

void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
