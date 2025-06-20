/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraccan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:21:36 by edraccan          #+#    #+#             */
/*   Updated: 2025/06/10 16:34:01 by edraccan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "average.h"

float average(const int *arr, int size)
{
	int 	i = 0, cont = 0;
	float	avg = 0;

	while (i < size)
	{
		if (arr[i] >= 0 && arr[i] <= 100)
		{
			avg += arr[i];
			printf("num: %d\n", arr[i]);
			cont++;
		}
		i++;
	}
	return (avg / cont);
}

/* 
// 12 32 35 12 45 3 45
int main()
{
	int a[11] = {12, 32, 434, 355, 35, 564, 12, 45, -54, 3, 45};
	printf("avg: %f\n", average(a, 11));
} */