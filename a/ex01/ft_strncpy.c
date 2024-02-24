/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:21:56 by zchagar           #+#    #+#             */
/*   Updated: 2024/02/24 04:44:56 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int     main(){

char src1[]= "Hello";
char src2[]= "World";
char src3[] = "Goodnight";
char src4[] = "";
char src5[] = "0123456789";


char dest1[] = "Oui";
char dest2[] = "Fi";
char dest3[] = "Worldend";
char dest4[] = "";
char dest5[] = "9876543210";




printf("%s\n", ft_strncpy(dest1,src2,2));

printf("%s\n", strncpy(dest1,src2,2));


printf("%s\n", ft_strncpy(dest2,src3,3));

printf("%s\n", strncpy(dest2,src3,3));


printf("%s\n", strncpy(dest2,src4,1));

printf("%s\n", ft_strncpy(dest2,src4,1));


printf("%s\n", strncpy(dest1,src5,6));

printf("%s\n", ft_strncpy(dest1,src5,6));

*/
