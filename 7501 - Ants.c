#include <stdio.h>

void merge(int ants[], int front, int mid, int end){
	int f1=front, f2=mid+1, f=front;
	int tmp[10000];

	while(f1<=mid && f2<=end){
        if(ants[f1]<ants[f2]){
			tmp[f] = ants[f1++];
        }else{
			tmp[f] = ants[f2++];
        }
        f++;
	}
	while(f1<=mid){
		tmp[f] = ants[f1++];
		f++;
	}
	while(f2<=end){
		tmp[f] = ants[f2++];
		f++;
	}
	for(int i=front; i<=end; i++){
		ants[i] = tmp[i];
	}
}

void mergesort(int ants[], int front, int end){
	if(front < end){
		mergesort(ants, front, (front+end)/2);
		mergesort(ants, (front+end)/2+1, end);
		merge(ants, front, (front+end)/2, end);
	}
}

int main(void){

	int num1, length, antnum;
	int ants[10000];
	int tmp, fast;

	scanf("%d",&num1);
	for(int i=0; i<num1; i++){
		scanf("%d%d", &length, &antnum);
		for(int j=0; j<antnum; j++){
			scanf("%d", &ants[j]);
		}
		mergesort(ants, 0, antnum-1);
		tmp = length/2;
		if(tmp>=ants[antnum-1]){
			fast = ants[antnum-1];
		}else if(tmp<=ants[0]){
			fast = length - ants[0];
		}else{
			for(int j=0; j<antnum; j++){
				if(ants[j]<=tmp && tmp<=ants[j+1]){
					if(ants[j]>(length - ants[j+1]))
						fast = ants[j];
					else
						fast = length - ants[j+1];
				}
			}
		}
		printf("%d ", fast);
		if((length-ants[0])>ants[antnum-1]){
			printf("%d\n", length-ants[0]);
		}else{
			printf("%d\n", ants[antnum-1]);
		}
	}
	return 0;
}

