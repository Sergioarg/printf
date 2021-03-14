#include "holberton.h"

int (*conversion_specifiers(char c))()
{
	con_spe cs_arr[] = {
  	{'c', sing_char},
	{'s', str_char},
    {'%', percent_sign},
	{'\0', NULL}
	};
	int i = 0;

	while(cs_arr[i].c != '\0')
	{
		if (cs_arr[i].c == c)
		  return(cs_arr[i].f);
		i++;
	}
	return (NULL);
}