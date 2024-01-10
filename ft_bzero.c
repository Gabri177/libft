
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}