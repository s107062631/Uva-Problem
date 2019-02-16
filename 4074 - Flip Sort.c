#include <stdio.h>

int table[1000], num;

void swap(int *i, int *j){
	num++;
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

void bubblesort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		num = 0;
		for(int i=0; i<N; i++){
			scanf("%d",&table[i]);
		}
		bubblesort(table, N);
		printf("Minimum exchange operations : %d\n",num);
	}

	return 0;
}
