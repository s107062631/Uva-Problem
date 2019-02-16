#include <stdio.h>

int tmp[500000], original[500000], target[500000];

void merge(int arr[], int front, int mid, int end){
	int f1=front, f2=mid+1, f=front;

	while(f1<=mid && f2<=end){
		if(arr[f1]<arr[f2])
			tmp[f++] = arr[f1++];
		else
			tmp[f++] = arr[f2++];
	}
	while(f1<=mid)
		tmp[f++] = arr[f1++];
	while(f2<=end)
		tmp[f++] = arr[f2++];
	for(int i=front; i<=end; i++)
		arr[i] = tmp[i];
}

void mergesort(int arr[], int front, int end){
	if(front<end){
		int mid = (front+end)/2;
		mergesort(arr, front, mid);
		mergesort(arr, mid+1, end);
		merge(arr, front, mid, end);
	}
}

int main(){
	int num, flag;
	while(scanf("%d", &num)!=EOF){
		if(num==0)
			break;
		flag = 0;
		for(int i=0; i<num; i++)
			scanf("%d%d", &original[i], &target[i]);

		mergesort(original, 0, num-1);
		mergesort(target, 0, num-1);
		for(int i=0; i<num; i++){
			if(original[i]!=target[i]){
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
