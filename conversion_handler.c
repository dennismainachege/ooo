#include "main.h"

void conversion_handler(const char *format, va_list extras)
{
    int i;
    
    for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case '%':
				i++; /* Move to the next character after '%' */
				switch (format[i])
				{
					case 'c':
					{
						int character = va_arg(extras, int);

						printf("%c", character);
						break;
					}
					case 's':
					{
						char *character_string = va_arg(extras, char *);

						if (character_string != NULL)
						{
							printf("%s", character_string);
						}
						else
						{
							printf("(null)");
						}
						break;
					}
					default:
						printf("%%");
						break;
				}
				break;
			default:
				printf("%c", format[i]);
				break;
		}
	}
}