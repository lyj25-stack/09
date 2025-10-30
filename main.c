#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int testgrade[5];
	int i;
	
	testgrade[0]=10;
    testgrade[1]=20;
	testgrade[2]=30;
	testgrade[3]=40;
	testgrade[4]=50;
	for(i=0;i<5;i++)
	printf("grade[%i]=%i\n",i,testgrade[i]);
	
	system("PAUSE");
		return 0;
}
