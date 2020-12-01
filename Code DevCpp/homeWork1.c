#include <stdio.h>

int main(){
	float x = 10.5, y = 6.5, xy, a = 3.5, ad, b = 56.5,c = 8.5, xyad,bc,  result;
	int d = 7;
	
	xy = x * y;
	ad = a * d;
	xyad = xy - ad;
	
	bc = b - c;
	result = xyad / bc;
	printf("The value is %f", result);
	
	return 0;
}
