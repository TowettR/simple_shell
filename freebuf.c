#include "shell.h"
/**
 * freebuf - Frees a pointer and sets it to NULL
 * @ptr: A pointer to be freed and set to NULL
 *
 * Return: 1 if the pointer was freed, 0 if not
 */
int freebuf(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
