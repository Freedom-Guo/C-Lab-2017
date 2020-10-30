#include<stdio.h>
enum {COPY,SPACE,START};
int main()
{
	char c;
	int state=COPY;
	printf("Please input a char:\n");
	while((c=getchar())!='\n'){
	    switch(state){
	    	case COPY:
	    		if(c==' ')state=START;
	    		else putchar(c);
	    		break;
	    	case START:
	    		putchar(' ');
	    		if(c==' ')state=SPACE;
	    		else 
				{state=COPY;putchar(c);}
				break; 
			case SPACE:
				if(c!=' ')
				{state=COPY;putchar(c);}
			    else state=SPACE;
			    break; 
		}
	} 
	 return 0;
 } 
