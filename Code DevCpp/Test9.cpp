#include<stdio.h>

main()
{
char ch;
int intValue;
double db1Value;

intValue = 78;
ch = (char) intValue;
printf("Char %d : %c \n", intValue, ch);

intValue = 39;
db1Value = (double) intValue;
printf("Double %d : %f \n", intValue, db1Value);

ch = 69;
db1Value = (double) ch;
printf("Double %c : %f \n", ch, db1Value);

ch = '69';
db1Value = 10.0;
intValue = (int) (db1Value + ch);
printf("Integer %f + %c : %d", db1Value, ch, intValue);

return 0;
}
