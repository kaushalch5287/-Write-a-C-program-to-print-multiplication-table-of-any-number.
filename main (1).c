/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, num;
 printf("Enter number to print table: ");
 scanf("%d", &num);
for(i=1; i<=10; i++)
 {
 printf("%d * %d = %d\n", num, i, (num*i));
 }
 return 0;
}