#include<stdio.h>
int main()
{
	float x, w,n1=0.00,n2=0.05,n3=0.10,n4=0.15,n5=0.20,n6=0.25;
    printf("Please enter x:\n");
	while (scanf("%f", &x) != EOF)
    {
    	if (x < 1000)
		w = 0;
	else
		if (x >= 1000 && x < 2000)
			w=1000*n1+(x-1000)*n2;
		else
			if (x >= 2000 && x < 3000)
				w=1000*n1+1000*n2+(x-2000)*n3;
			else
				if (x >= 3000 & x < 4000)
					w=1000*n1+1000*n2+1000*n3+(x-3000)*n4;
				else
					if (x >= 4000 && x < 5000)
						w=1000*n1+1000*n2+1000*n3+1000*n4+(x-4000)*n5;
					else
						if (x > 5000)
							 w=1000*n1+1000*n2+1000*n3+1000*n4+1000*n5+(x-5000)*n6;
	printf("%.2f\n", w);
	}
	return 0;
}
