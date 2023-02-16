#include <iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);

	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);

	int min, temp;

	for (int i = 0; i<n-1; ++i)
	{
		min = i;

		for (int j = i+1; j<n; ++j)
		{
			if (arr[min] > arr[j])
				min = j;
		}

		if (min != i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}

	for (int i = 0; i<n; ++i)
		printf("%d\n", arr[i]);

	free(arr);

	return 0;
}