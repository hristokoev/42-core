#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int	ft_digits(int n)
{
	int	i;

	i = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_allocator(long int *ln, int size, int neg)
{
	char	*s;

	s = malloc((sizeof(char)) * size + neg + 1);
	if (!s)
		return (NULL);
	if (*ln < 0)
	{
		*ln = *ln * -1;
		s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int			i;
	int			size;
	int			neg;
	long int	ln;
	char		*s;

	ln = n;
	i = 0;
	size = ft_digits(ln);
	neg = 0;
	if (ln < 0)
		neg = 1;
	s = ft_allocator(&ln, size, neg);
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[size - 1 - i + neg] = ln % 10 + '0';
		ln /= 10;
		i++;
	}
	s[size + neg] = '\0';
	return (s);
}

int ft_printf(const char *str, ...)
{
	int i;
	i = 0;
	va_list args;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
			}
			else if (str[i] == 's')
			{
				char *s = va_arg(args, char *);
				while (*s)
				{
					write(1, s, 1);
					s++;
				}
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
				int d = va_arg(args, int);
				char *s = ft_itoa(d);
				while (*s)
				{
					write(1, s, 1);
					s++;
				}
			}
			else if (str[i] == 'u')
			{
				unsigned int u = va_arg(args, unsigned int);
				printf("%u", u);
			}
			else if (str[i] == 'x')
			{
				unsigned int x = va_arg(args, unsigned int);
				printf("%x", x);
			}
			else if (str[i] == 'X')
			{
				unsigned int X = va_arg(args, unsigned int);
				printf("%X", X);
			}
			else if (str[i] == 'p')
			{
				void *p = va_arg(args, void *);
				printf("%p", p);
			}
			else if (str[i] == '%')
			{
				printf("%%");
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return 0;
}

// Driver Code
int main()
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello World!");
	ft_printf("Pointer: %p\n", &ft_printf);
	ft_printf("Decimal: %d\n", 123);
	ft_printf("Integer: %i\n", 123);
	ft_printf("Unsigned: %u\n", 123);
	ft_printf("Hexadecimal (lowercase): %x\n", 123);
	ft_printf("Hexadecimal (uppercase): %X\n", 123);
	ft_printf("Percent sign: %%\n");
	return 0;
}