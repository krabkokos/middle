#include "sort.h"

void QSFunc(int left, int right, float* data);
void swap_data(float* data, int left_temp, int right_temp);
void QuickSort(float* data, int num_of_elements)
{
	QSFunc(0, num_of_elements, data);
}

void QSFunc(int left, int right, float* data)
{
	int middle = ((left + right) / 2);
	int left_temp = left;
	int right_temp = right;
	while (left_temp <= right_temp)
	{
		while (data[left_temp] < data[middle])
			left_temp++;
		while (data[right_temp] > data[middle])
			right_temp--;
		if (left_temp <= right_temp)
			swap_data(data, left_temp++, right_temp--);
		if (right_temp == left_temp)
			break;
	}
	if (left < right_temp)
		QSFunc(left, right_temp, data);
	if (right > left_temp)
		QSFunc(left_temp, right, data);
}

void swap_data(float* data, int left_temp, int right_temp)
{
	float temp;
	temp = data[left_temp];
	data[left_temp] = data[right_temp];
	data[right_temp] = temp;
}
