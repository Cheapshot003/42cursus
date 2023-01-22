/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:10:12 by ole               #+#    #+#             */
/*   Updated: 2023/01/22 11:10:15 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	int	*nums;

	if (argc < 2 || check_num(argv, argc - 1))
    {
		return (0);
	}
	nums = fetch_numbers(argc, argv);
	if (check_dup(nums, argc))
	{
		ft_putstr_fd("DUPS FOUND XD", 1);
		return (0);
	}
	printf("SUPPA\n");
	return 0;

}