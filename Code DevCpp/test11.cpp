#include <stdio.h>

int main (){
	int x,y,result;
	printf("Enter X: ");
	scanf("%d", &x);
	printf("Enter Y: ");
	scanf("%d", &y);
	
	result = (x==y);
	
	printf("X == Y is %d", result);
	
	return 0;
}
