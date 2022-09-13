#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[] = {88, 2, 38, 4, 5, 65, 75, 10};
	int arr2[] = {4, 5, 95, 11, 6, 10};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int i, j, flag, k = 0;
	int result[100];
	printf("The common elements are: ");
	for (i = 0; i < size1; i++)
	{

		for (j = 0; j < size2; j++)
		{

			if (arr1[i] == arr2[j])
			{

				result[k] = arr1[i];
				cout << result[k] << " ";
				k++;
			}
		}
	}
}
