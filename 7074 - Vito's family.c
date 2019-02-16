#include <stdio.h>
#include <stdlib.h>

void merge(int door[], int front, int mid, int end){
	int f1=front, f2=mid+1, f=front;
	int tmp[500];
	while(f1<=mid && f2<=end){
		if(door[f1]<door[f2]){
			tmp[f] = door[f1++];
		}else{
			tmp[f] = door[f2++];
		}
		f++;
	}

	while(f1<=mid){
		tmp[f] = door[f1++];
		f++;
	}

	while(f2<=end){
		tmp[f] = door[f2++];
		f++;
	}

	for(int i=front; i<=end; i++){
		door[i] = tmp[i];
	}
}

void mergesort(int door[], int front, int end){
	if(front<end){
		mergesort(door, front, (end+front)/2);
		mergesort(door, (end+front)/2+1, end);
		merge(door, front, (front+end)/2, end);
	}
}

int main(void){
	int num1, num2, midnum, sum;
	int door[500];

	scanf("%d",&num1);
	for(int i=0; i<num1; i++){
			sum = 0;
		scanf("%d", &num2);
		for(int j=0; j<num2; j++){
			scanf("%d", &door[j]);
		}
		mergesort(door, 0, num2-1);
		if(num2%2==1)
			midnum = door[num2/2];
		else
			midnum = door[num2/2 - 1];
		for(int j=0; j<num2; j++){
			sum = sum + abs(door[j] - midnum);
		}
		printf("%d\n",sum);
	}

	return 0;
}
