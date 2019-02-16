#include <stdio.h>

int main(void){

	unsigned long long int num;

	while(EOF!=scanf("%lld",&num)){
		if(num%2==0 && num!=2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}
