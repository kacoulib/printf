#include "ft_printf.h"


 int testIt(const char * restrict format, ...)
 {
 	va_list 	ap;
 	char		*s = NULL;


 	va_start(ap, format);



 	while (*format++)
 	{
 		if (*format == 's')
 			printf(" = d %s= \n", format);
 		else if (!(s = va_arg(ap, char *)))
 			break;
		printf("%s\n", s);
 	}

 	va_end(ap);

 	return (0);
 }


void init(t_printf *data)
{
	ft_memset(data->content, '\0', ft_strlen(data->content));
	ft_memcpy(data->content, "hello", 10);
	data->len = 3;
}


int	main(int argc, char const *argv[])
{
	t_printf tmp;

	if (argc && argv)
		;

	init(&tmp);

	printf("%#o\n", 5);
	// testIt("12", "first", "second", "third", "fourth");
	return (0);
}