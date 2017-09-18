#include "libft.h"

int	ft_getlen(int num, int base)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / base;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	char	*sval;
	int	sign;
	int	len;
	int	rem;

	len = 0;
	sign = 0;
	rem = 0;
	if (value == 0)
		return ("0");
	if (base < 2 || base > 16)
		return (0);
	if (value == -2147483648)
		return ("-2147483648");
	if (value < 0 && base == 10)
	{
		sign = 1;
		value = -value;
	}
	len = ft_getlen(value, base);
	sval = (char*)malloc(sizeof(char*) * (len + sign));
	sval[len] = '\0';
	len--;
	while (len >= 0)
	{
		rem = value % base;
		if (rem > 9)
			sval[len] = (rem - 10) + 'A';
		else
			sval[len] = rem + '0';
		len--;
		value = value / base;
	}
	if (sign)
		sval[len] = '-';
	return (sval);
}
