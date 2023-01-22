#include "push_swap.h"

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