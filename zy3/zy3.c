#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
	int b[5] = {6,7,8,9,10};
 int sizea = sizeof(a)/sizeof(a[0]);
 int sizeb = sizeof(b)/sizeof(b[0]);
 int c[sizea+sizeb];
 for(int i=0;i<sizea;i++)
 {
 c[i] = a[i];
 }
 for(int i=0;i<sizea;i++)
 {
 c[sizea+i] = b[i];
 }
 for(int i=0;i<sizea+sizeb;i++)
 {
 printf("%d\t",c[i]);
 }
 
 return 0;
}