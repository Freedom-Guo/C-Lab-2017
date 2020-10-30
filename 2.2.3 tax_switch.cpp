#include<stdio.h>
int main()
{
	float x,w,n1=0,n2=0.05,n3=0.10,n4=0.15,n5=0.20,n6=0.25;
	printf("Please enter your salary x:\n");
	while (scanf("%f", &x) != EOF)
	{
		if(x<5000)
	  switch((int)x/1000)
	  {
	  	case 4:w=1000*n1+1000*n2+1000*n3+1000*n4+(x-4000)*n5;break;
	  	case 3:w=1000*n1+1000*n2+1000*n3+(x-3000)*n4;break;
	  	case 2:w=1000*n1+1000*n2+(x-2000)*n3;break;
	  	case 1:w=1000*n1+(x-1000)*n2;break;
	  	case 0:w=x*n1;break;
	  }
	else
	    w=1000*n1+1000*n2+1000*n3+1000*n4+1000*n5+(x-5000)*n6;
	printf("%.2f\n",w);
	}
	return 0;
 } 
