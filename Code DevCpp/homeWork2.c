#include <stdio.h>
#define Pie 3.14159

int main(){
	
	printf(circularShape(), circularLine());

	return 0;
}


//******************** Method *********************//

//----------- Method Circular Line ----------------//
void circularLine(){
	float resultRadius, radius = 8.5; 
	int x = 2;
	 resultRadius = x*radius*Pie;
	 printf("The value of Radius is : %f\n",resultRadius);
	 
	 return 0;
}

//--------------- Method Circular Shape ---------------//
void circularShape(){
	float resultOfShape, radius = 8.5;
	
	resultOfShape = radius*radius*Pie;
	printf("The value of Circular Shape is : %f", resultOfShape);
	
	return 0;
	
//	Coder By NouDarker
}


