#include <stdio.h>
#include <math.h>
int main(void)
{
    int a=1;
	int b=2;
	int c=3;

	double delta;
	delta=b*b-4*a*c;

	if(delta>0)
	  {
	    printf("两个解");
	  }
	else if(delta==0)
      {
		printf("一个解")；
	  }
	else
	  {
		printf("无解");
	  }

	return 0;
}
