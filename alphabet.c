#include<stdio.h>
int main()
{
char var;
scanf("%c",&var);
if((var>=65 && var<=90) || (var>=97 && var<=122))
printf("its a alphabet");
else
printf("its not a alphabet");
getch();
return 0;
}
