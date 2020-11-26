#include <stdio.h>

int main(){
	int y, count;
	
	count = 1;
	y = count ++;
	
	printf("y = %d, count = %d \n", y, count);
	
	count = 1;
	
	y = ++count;
	printf("y = %d, count = %d", y, count);
	
	return 0;
}
