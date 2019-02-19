#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
		int count = 0;
		int number1 = 0;
		int number2 = 0;
		int number3 = 0;
	
		srand ((int) time (NULL));
		
		for (int i = 0; i < 10; i++){
			
	
			number1 = rand()%13;
			number2 = rand()%13;


			printf("%d * %d\n", number1, number2 );
	
		


			scanf("%d", &number3);

			if (number3 == number1 * number2){
					count +=1;
			}
		}
		count *= 10;
		printf("\nyou got %d percent \n ",count);

}
