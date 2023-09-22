#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_size(char **strs, int size)
{
	int	k;
	int	i;
	int	a;

	a = 0;
	k = 1;
	i = 0;
	while (k < size)
	{
		while (strs[k][i])
		{
			a++;
			i++;
		}
		k++;
	}
	return (a);
}

void	ft_assign(char **strs, char *sep, int size, char *str)
{
	int	k;
	int	p;
	int	i;

	p = 0;
	k = 1;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			str[p] = strs[k][i];
			i++;
			p++;
		}
		i = 0;
		while (sep[i] && k != size - 1)
		{
			str[p] = sep[i];
			p++;
			i++;
		}
		k++;
	}
	str[p] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	char	*str;

	str = malloc(ft_size(strs, size) * 1 + 1);
	if (str == (void *)0 || size == 0)
	{
		empty = malloc(1);
		empty[0] = 0;
		return (empty);
	}
	ft_assign(strs, sep, size, str);
	return (str);
}



/*#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}