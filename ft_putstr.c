#include "libft.h"

void	ft_putstr(char *str)
{
		if (!str)
			error("NULL");
		while (*str)
			ft_putchar(*str++);
}
