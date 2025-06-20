/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraccan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:36:48 by edraccan          #+#    #+#             */
/*   Updated: 2025/06/10 16:52:09 by edraccan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "first_last.h"

void first_last(int arr[], int size, int target, int *first, int *last)
{
	int i = 0;
	int f = 0, l = 0;

	while (i < size)
	{
		if (arr[i] == target && f == 0)
		{
			*first = i;
			f++;
		}
		if (arr[size - i - 1] == target && l == 0)
		{
			*last = size - i - 1;
			l++;
		}
		if (l == 0 || *first == *last)
			*last = -1;
		if (f  == 0)
			*first = -1;
		i++;
	}
}


// int main()
// {
// 	int a[11] = {12, 12, 32, 434, 355, 35, 12, 45, -54, 3, 45};
// 	int f = 0, l = 0;
// 	first_last(a, 11, -54, &f, &l);
// 	printf("f: %d, l: %d\n", f, l);
// }