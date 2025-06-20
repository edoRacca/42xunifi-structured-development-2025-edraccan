/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmented_runs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraccan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:00:30 by edraccan          #+#    #+#             */
/*   Updated: 2025/06/10 17:25:58 by edraccan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "segmented_runs.h"

int count_segments(const int *arr, int size)
{
	int i = 0, counter = 0, j;
	
	while (i < size)
	{
		printf("i: %d\n", i);
		if (arr[i] != -1)
		{
			j = 0;
			while (arr[i + j] != -1 && i + j < size)
			{
				j++;
				if (arr[i + j] <= arr[i + j - 1])
					break ;
			}
			if (j >= 3)
				counter++;
			i += j;
		}
		i++;
	}
	return (counter);
}

/* 
int main()
{
	int a[19] = {12, -1, 32, 33, 37, -1, 1, 2, 3, -1, 12, 45, 67, 90, 91, 98, -1, 3, 45};
	
	printf("segs: %d\n", count_segments(a, 19));
} */