#include<stdio.h>

void swap(int *jp, int *jpp){
	int temp = *jp;
	*jp = *jpp;
	*jpp = temp;
}

void shellSort(int array[], int n){
	int i,j,gap;
	for(gap= n/2; gap>=1; gap= gap/2){
		for(j=gap; j<n; j++){
			for(i=j-gap; i>=0; i-=gap){
				if(array[i+gap] > array[i]){
						break;	
				}else{
					swap(&array[i+gap], &array[i]);
				}
	
			}
		}
	}
	
	
}

void print(int array[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",array[i] );
	}
}

int main(){
	int array[100], i, j, n;
	printf("Enter total number: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter %d st/nd/rd/th element: ", i+1);
		scanf("%d", &array[i]);
	}
	
	shellSort(array, n);
	printf("After sorting: ");
	print(array, n);
	return 0;
}
