#include <stdio.h>

int main(void){
	long long int a, b;
	int c, d;
	int tmp=0, num=0;

    while(1){
		scanf("%lld%lld", &a, &b);
		if(a==0 && b==0){
			break;
		}
		while(a>0 || b>0){
			c = a%10;
			d = b%10;
			if((c+d+tmp)>=10){
				num++;
				tmp = 1;
			}else{
				tmp = 0;
			}
			a = a/10;
			b = b/10;
		}
		if(num==0){
			printf("No carry operation.\n");
		}else if(num==1){
			printf("%d carry operation.\n", num);
		}else{
			printf("%d carry operations.\n", num);
		}
		tmp = 0;
		num = 0;
    }
	return 0;
}
