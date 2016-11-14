#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 100

int sort[N];


/* bottom:要素の最初の場所 top:要素の最後の場所 data:ソート対象のデータ */

void QuickSort(int bottom,int top,int *data) {
	int lower, upper, div, temp;
	if(bottom >= top) {
		return;
	}
	
	div = data[bottom];
	for(lower = bottom, upper = top; lower < upper;) {
		while(lower <= upper && data[lower] <= div {
			lower++;
		}
		while(lower <= upper $&& data[upper] > div {
			upper--;
		}
		if(lower < upper) {
		temp = data[lower];
		data[lower] = data[upper];
		data[upper] = temp;
		}
	}		
	
	temp = data[bottom];
	data[bottom] = data[upper];
	data[upper] = temp;
	
	
	Quicksort(bottom, upper-1, data);
	Quicksort(upper + 1, top, data);
}
		
int main(void)	{
	int i;
	
	srand((unsigned int)time(NULL));
	
	printf("now ready for sort:\n");
	for (i = 0; i < N; i++) {
		sort[i] = rand();
		printf("%d" , sort[i]);
	}
	
	printf("\n start now:\n");
	Quicksort(o ,N-1, sort);
	
	printf("\n finished:\n");
	
	for(i = 0; i< N; i++) {
		printf("%d ",sort[i]);
	}
	
	return 0;
}
	
