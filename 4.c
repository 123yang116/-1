/*4.合成最大三位整数*/
#include <stdio.h>
int main()
{
	int x,y,z,max,a,min;
 	printf("请输入三个数："); 
 	scanf("%d、%d、%d",&x,&y,&z);
 	if(x>y){
 		    if(y>z){max=x,a=y,min=z;}
 		    else{if(x>z){max=x,a=z,min=y;}
			 	else{max=z,a=x,min=y;}}
	 		}
	else{
	        if(x>z){max=y,a=x,min=z;}
	        else{if(y>z){max=y,a=z,min=x;}
	        	 else{max=z,a=y,min=x;}
			}
		}
		printf("最大的三位整数为：%d",max*100+a*10+min);
	return 0;
}