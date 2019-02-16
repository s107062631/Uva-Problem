#include <stdio.h>

long long int table[200000];

void precomputing(int num){
	for(int i=0; i<num; i++){
		if(i==0){
			table[i] = 1;
		}else{
			table[i] = table[i-1] + i;
		}
	}
}

int main(void){
	precomputing(200000);
	long long int num, position, div;

	while(EOF!=scanf("%lld", &num)){
		for(long long int i=0; i<200000; i++){
			if(num>=table[i] && num<table[i+1]){
				div = num - table[i];
				position = i + 1;
				break;
			}
		}
		printf("%lld/%lld\n", position-div , 1+div);
	}
	return 0;
}

