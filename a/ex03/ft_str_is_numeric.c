/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:20:15 by zchagar           #+#    #+#             */
/*   Updated: 2024/02/24 04:46:20 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i] >= '0' && str[i] <= '9';
		if (!(a))
			return (0);
		i++;
	}
	return (1);
}
