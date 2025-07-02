#include <stdio.h>

int number_of_combinations(int p, int num_option);

int main(void)
{
	int min = 1, max = 30, p;

	printf("Введіть число у проміжку від %d до %d включно: ", min, max);
	if (scanf("%d", &p) != 1) {
		printf("\nНекоректні дані\n");
		return 1;
	}

	if (p < min || p > max) {
		printf("\nЧисло не входить у діапазон\n");
		return 1;
	}

	int res = number_of_combinations(p, 2);

	printf("\nКількість комбінацій без можливих '555' та '999': %d\n", res);

	return 0;
}

int number_of_combinations(int p, int num_option)
{
	return (1 << p) - num_option * ((p - 2) * (p - 1) / 2);
}
