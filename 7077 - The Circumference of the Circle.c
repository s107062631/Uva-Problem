#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

int main(void){
	float x1, x2, x3, y1, y2, y3;
	float x, y, r;
	float a, b, c, d, e, f;

	while(EOF!=scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3)){
		a = x1 - x2;
		b = y1 - y2;
		c = x1 - x3;
		d = y1 - y3;
		e = ((x1*x1 - x2*x2) - (y2*y2 - y1*y1))/2;
		f = ((x1*x1 - x3*x3) - (y3*y3 - y1*y1))/2;
		x = (b*f - d*e)/(b*c - a*d);
		y = (c*e - a*f)/(b*c - a*d);
		r = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));
		printf("%.2f\n", 2*r*M_PI);
	}
	return 0;
}
