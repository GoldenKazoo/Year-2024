/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:15:37 by zchagar           #+#    #+#             */
/*   Updated: 2024/02/24 04:57:54 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;
	int	a;
	int	b;
	int	d;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		a = (str[i] < '0' || str[i] > '9');
		b = (str[i] < 'A' || str[i] > 'Z');
		d = (str[i] < 'a' || str[i] > 122);
		if (next == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (next == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (a && b && d)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
