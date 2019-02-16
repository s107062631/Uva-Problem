#include <stdio.h>

int times;

void swap(int *i, int *j){
	int tmp;
	times++;
	tmp = *i;
	*i = *j;
	*j = tmp;
}

int partition(int value[], int front, int end){
	int pivot = value[end];
	int i = front - 1;
	for(int j=front; j<end; j++){
		if(value[j]<pivot){
			i++;
			swap(&value[i], &value[j]);
		}
	}
	i++;
	swap(&value[i], &value[end]);
	return i;
}

void quicksort(int value[], int front, int end){
	if(front<end){
		int pivot = partition(value, front, end);
		quicksort(value, front, pivot-1);
		quicksort(value, pivot+1, end);
	}
}

int main(){
	int num, value[500000];

	while(scanf("%d", &num)!=EOF){
		if(num==0){
			break;
		}
		times = 0;
		for(int i=0; i<num; i++){
			scanf("%d", &value[i]);
		}
		quicksort(value, 0, num-1);
		printf("%d\n",times);
	}
	return 0;
}
