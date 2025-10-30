#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int testscore[SIZE];
	int i;
	int sum=0;
    printf("%i명의 점수를 입력하세요.\n");
	
	for(i=0;i<SIZE;i++){
			scanf("%d",&testscore[i]);
			sum+=testscore[i];
	}

	#if 0
	for(i=0;i<SIZE;i++)
	printf("grade[%i]=%i\n",i,grade[i]);
	#endif
	
	

	
	system("PAUSE");
		return 0;
}
