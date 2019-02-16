#include <stdio.h>

int table[5800];

void precomputing(int num){
	int j=0;
	for(int i=2; i<num+100; i++){
		if(i%7!=0 && i%3!=0){
			table[j] = i;
			j++;
		}
	}
}

int main(void){
	int num, k=0;

	precomputing(10000);

	while(EOF!=scanf("%d", &num)){
		if(k!=0){
			printf("\n");
		}
		printf("1");
		for(int i=0; i<5800; i++){
			if(num>table[i]){
				printf(" %d", table[i]);
			}else if(table[i]<10000){
				break;
			}
		}
		printf("\n");
		k = 1;
	}
	return 0;
}
