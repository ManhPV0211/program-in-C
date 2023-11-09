#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int MAX = 100, MIN = 1;
	int privateNum, yourNum;
	int count = 0;
	
	srand(time(NULL));
	privateNum = MIN + (rand()%(MAX - MIN + 1));
	
	
	do{
//		printf("private = %d", privateNum);
		printf("So can tim la bao nhieu ? ");
		scanf("%d", &yourNum);
		
		if(yourNum == privateNum) {
			printf("Chuc mung. Ban da tim duoc so bi mat...\n");
			break;
		} else if(yourNum > privateNum) {
			printf("Nho hon...\n");
		} else {
			printf("Lon hon...\n");
		}
		
//		
//		yourNum > privateNum ?
//		printf("Nho hon di") : printf("Lon hon di");
	} while(1);
	return 0;
}
