#include <stdio.h>
#include <math.h> //Use pow (x,y)
#define Pie 3.14159
int main(){
//	const double Pie = 3.14159;
	
//	pow = power ---Soud khg kha nit sart
	double radius = 50, area = Pie * pow(radius, 2);
	
	printf("Value of Pie = %.2Lf \nValue of Radius = %.3Lf\nCircle area is = %.3Lf", Pie, radius, area);
	
	return 0;
}
