#include <stdio.h>
#include <math.h>

int array[10];
int i, j,n=10,temp;

void main() {

	for ( i = 0; i < 10; i++){
		array[i] = rand() % 10;
		//printf("%d", array[i]);
	}
	printf("\n");

	for (i = 1; i < n; i++) {
		temp = array[i];
		j = i - 1;
		while (j>=0 && temp<array[j])
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = temp;
	}
	//for ( i = 0; i < n; i++)
	//{
	//	printf("%d", array[i]);
	//}
}