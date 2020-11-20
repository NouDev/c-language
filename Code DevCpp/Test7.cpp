#include <stdio.h>
#include <conio.h>
int main(){
	char ch; int intValue; double dbValue;
	
	intValue = 78;
	ch = (char) intValue;
	printf("Char %d : %c \n", intValue, ch);
	
	intValue = 39;
	dbValue = (double) intValue;
	printf("Double %d : %f \n", intValue, dbValue);
	
	ch = 69;
	dbValue = (double) ch;
	printf("Double %c : %f \n", ch, dbValue);
	
	ch = 'A';
	dbValue = 10.0;
	intValue = (int) (dbValue + ch);
	printf("Integer %f + %c : %d", dbValue, ch, intValue);
	
	getch();
}
