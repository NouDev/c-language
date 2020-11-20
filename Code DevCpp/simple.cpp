#include <stdio.h>

int main(){
	int width, height, sum;
	
	printf("The value of width :");
	scanf("%d", &width);
	printf("The value of height :");
	scanf("%d", &height);
	
	sum = width + height;
	
	printf("The value is %d + %d = %d", width, height, sum);
	
	return 0;
}
