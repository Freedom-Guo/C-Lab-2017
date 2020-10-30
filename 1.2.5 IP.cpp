#include <stdio.h>
#define r1 0xff000000
#define r2 0x00ff0000
#define r3 0x0000ff00
#define r4 0x000000ff
 int main()
 {
    long int x,ip1,ip2,ip3,ip4=0;
 	printf("Please input a number:");
 	scanf("%ld",&x);
 	ip1=(r1&x)>>24;
 	ip2=(r2&x)>>16;
 	ip3=(r3&x)>>8;
 	ip4=(r4&x);
 	printf("%ld,%ld,%ld,%ld",ip4,ip3,ip2,ip1);
 	return 0;
  } 
