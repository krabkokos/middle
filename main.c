#include "sort.h"

int main(void)
{
	float massiv[8] = {5, 1.2, 0.1, 4.5, 3, 8, -2, 3.6}; // задан массив чисел
	int num = 7;										 // число элементов - 1
	QuickSort(massiv, num);
	float middle_data;
	int middle_num[2] = {0, (num + 1)};
	if (!(middle_num[1] % 2))
	{
		middle_num[1] /= 2;
		middle_num[0] = middle_num[1] - 1;
		middle_data = massiv[middle_num[1]] + massiv[middle_num[0]];
		middle_data /= 2;
	}
	else
	{
		middle_data = massiv[(middle_num[1] / 2)];
	}
	printf("middle=%f\n", middle_data);
	system("pause");
	return 0;
}
