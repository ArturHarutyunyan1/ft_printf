/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:31:50 by arturhar          #+#    #+#             */
/*   Updated: 2024/01/22 11:56:11 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if ((count > SIZE_MAX || size > SIZE_MAX) || (count > 0 && SIZE_MAX / count < size))
		return (NULL);
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}

// int main() {
// 	size_t count = 5;
// 	size_t size = sizeof(int);

// 	int *arr = (int *)ft_calloc(count, size);
// 	int *arr1 = (int *)calloc(count, size);
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("ft - %d \n", arr[i]);
// 	}
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("lib - %d \n", arr1[i]);
// 	}

// }