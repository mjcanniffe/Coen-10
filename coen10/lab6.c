#include <stdio.h>

//by Michael Canniffe

int main()
{
		int lessons[5] = {0,0,0,0,0};
		int freeslots = 5;
		int userInput=0;
		int cancelNumber=0;
		
			printf("%s","type 1 to request a class, type 2 to cancel a class, type 3 to see the available schedule, type 9 to quit \n  ");
		
while(1){
			
			scanf("%d",&userInput);
	switch (userInput){		

		case 1 :           

			if(freeslots==0){

				printf("there are no free slots \n");
				break;
			}

			for (int i = 0; i < 5; i++){
				if (lessons[i] == 0){
					lessons[i] = i+ 1;				
	
					printf("%s  %d  %s","I'll sign you up for the ", i+1 , "PM class \n ");
					i=5;
					freeslots -=1;
				}	
			}	
			
			break;

		case 2 :         printf ( "enter the time of the class you would like to cancel \n"); 
						 scanf("%d", &cancelNumber);
						 cancelNumber = cancelNumber - 1;
						 if(cancelNumber>4 || cancelNumber<0 ){
						 printf("%s", "thats not a time we offer\n");
						 }
						 else if(lessons[cancelNumber] == cancelNumber + 1  ){
								lessons[cancelNumber] = 0;
								freeslots += 1;
								printf("your class was canceled\n");
						 }
						 else if(lessons[cancelNumber]== 0){
						 	printf("%s","there is no class scheduled for that time\n");
						 }
						 
						 
						 break; 
																									   	

		case 3 :  for (int i = 0; i < 5; i++){
																															  							
			if (freeslots==5)
				{
					printf("No lessons have been requested yet\n");
					i=5;
				}
																								
			else if (lessons[i] == 0){
					printf( "free\n" );
				}
																																				
			else {
					printf("%s\n", "lesson\n" );
				}
			};
			 break; 
																			   	
   		case  9 :  return 1;
		
			break;                   
				
		default : printf( "Bad option\n" ); break;

	}	
  }	       	
}







