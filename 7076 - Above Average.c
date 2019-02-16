#include <stdio.h>

int main(void){
	int num1, num2, num, j;
	float grades[1000];
	float sum, avg, tmp;

	scanf("%d", &num1);
	for(int i=0; i<num1; i++){
		sum = 0;
		num = 0;
		scanf("%d", &num2);
		for(j=0; j<num2; j++){
			scanf("%f", &grades[j]);
			sum = sum + grades[j];
		}
		avg = sum/(float)num2;
		for(j=0; j<num2; j++){
			if((avg-grades[j])<0){
				num++;
			}
		}
		tmp =  (float)num/(float)num2;
		printf("%.3f%%\n", tmp*100);
	}
	return 0;
}
