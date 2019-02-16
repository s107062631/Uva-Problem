#include <stdio.h>

int main(void){
	int num;
	long long int a, b, c;

	scanf("%d", &num);
	for(int i=0; i<num; i++){
		scanf("%lld%lld%lld", &a, &b, &c);
		if(a<=0 || b<=0 || c<=0){
			printf("Oh~NO!!\n");
		}else{
			if(a==b && b==c){
				printf("3 equal\n");
			}else{
				if((a+b)>c && (a+c)>b && (c+b)>a){
					if(a==b || b==c || a==c){
						printf("2 equal\n");
					}else{
						printf("OK!\n");
					}
				}else{
					printf("Oh~NO!!\n");
				}
			}
		}
	}
	return 0;
}

