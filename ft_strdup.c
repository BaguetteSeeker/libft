/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:45:52 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/20 21:41:34 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*strdup_ptr;
	int		i;
	int		len;

	len = ft_strlen(src) + 1;
	strdup_ptr = malloc(sizeof(char) * len);
	if (strdup_ptr == NULL)
		exit(0);
	i = 0;
	while (i < (len))
	{
		strdup_ptr[i] = src[i];
		i++;
	}
	return (strdup_ptr);
}

/*int	main(void)
{
	char	*ptr;
	char	*str = "Marguerite";
	ptr = ft_strdup(str);
	printf("Address of 1st str is %s and address of 2nd str is %s", str, ptr);
}*/
