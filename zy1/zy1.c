#include <stdio.h>
 int main()
 {
 	int a[]={3,4,23,12,45};
 	int n=0;
 	for(int i=0;i<5;i++)
 	{
 		for(int j=i+1;j<5;j++)
 		{
 			if(a[i]>a[j]) 
 			{
 				n=a[i];
 				a[i]=a[j];
 				a[j]=n; 
 				
			 }
		 }
	 }
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
 	return 0;
 }