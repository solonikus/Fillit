
#include "ft_fillit.h"

int		ft_flag(int *ovl, int d)
{
	int i;

	i = d * d;
	while (i--)
	{
		if (ovl[i] != 0)
			return (i);
	}
	return (0);
}

int		ft_cmass(int *mass, int n)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i <= n)
	{
		if (mass[i] == 1)
			count++;
		i++;
	}
	return (count);
}

int		ft_checkrtr(t_tetro *tetro)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= tetro->d * tetro->d)
	{
		while (j <= tetro->n)
		{
			if (tetro->rtr[i][j] == 1)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}