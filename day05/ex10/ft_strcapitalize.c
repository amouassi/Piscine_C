/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:39:16 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/01 21:06:29 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(str[i - 1] < '0' || (str[i - 1] > '9' &&
			str[i - 1] < 'A') || (str[i - 1] > 'Z' &&
			str[i - 1] < 'a') || str[i - 1] > 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
