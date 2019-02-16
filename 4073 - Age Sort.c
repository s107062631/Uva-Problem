#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num, *table, position, tmp;

	while(1){
		scanf("%d", &num);
		if(num==0){
			break;
		}
		table = (int *)malloc(num * sizeof(int));
		for(int i=0; i<num; i++){
			table[i] = 0;
		}
		for(int i=0; i<num; i++){
			scanf("%d", &position);
			table[position]++;
		}
		tmp = 0;
		for(int i=0; i<num; i++){
			while(table[i]!=0){
				if(tmp==num-1){
					printf("%d\n", i);
					break;
				}else{
					printf("%d ", i);
					table[i]--;
					tmp++;
				}
			}
			if(tmp==num-1){
				break;
			}
		}
		free(table);
	}
	return 0;
}

