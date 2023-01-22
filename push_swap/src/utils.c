/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:14:10 by ole               #+#    #+#             */
/*   Updated: 2023/01/22 11:09:49 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*fetch_numbers(int argc, char **args)
{
	int	*nums;
	int	i;

	i = 1;
	nums = (int *)malloc(sizeof(int) * argc - 1);
	if (nums == NULL)
	{
		ft_putstr_fd("MEMORY ERROR\n", 1);
		return (NULL);
	}
	while (i < argc)
	{
		nums[i] = ft_atoi(args[i]);
		i++;
	}
	return (nums);
}

int	check_num(char **args, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i <= size)
	{
		while (args[i][j])
		{
			if (ft_isdigit(args[i][j]))
			{
				j++;
			}
			else
			{
				return (1);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

int	check_dup(int *list, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	size--;
	while (i <= size)
	{
		while (j < size)
		{
			if (list[i] == list[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
