#include <stdio.h>

int main(void){
	int flag=0, num=0;
	char ch;

	while(EOF!=scanf("%c", &ch)){
		if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
			flag =1;
		}else if(ch=='\n'){
			if(flag==1){
				num++;
			}
			printf("%d\n", num);
			num = 0;
			flag = 0;
		}else{
			if(flag==1){
				num++;
				flag = 0;
			}
		}
	}
	return 0;
}
