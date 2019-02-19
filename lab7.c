
#include "lab7.h"
#include <stdio.h>
#include "string.h"

	int main(){
	 
	    char lessons[5][20];
	    for (int i = 0; i < 5; i++)
	    {
       lessons[i][0]='\0' ;  
	    }
    char name[20];
    int total = 0;
    int userInput=0;
    int cancelNumber=0;
    int result = 0;
    char letter;
 while(1){
	printf("%s","type 1 to request a class, type 2 to cancel a class, type 3 to see the available schedule, type 4 to see a list of names, type 9 to quit \n  ");
  
       scanf("%d",&userInput);
       switch (userInput){
      
		   case 1 :
    	      printf("whats your name\n");
			   if(total==5){
	           printf("there are no free slots \n");
				break;				        
	           }          
				else{
				   scanf("%s", lessons[total]);
	                 total++  ;
			break;
				}
		
				
				break;
		   
		   
		   
		   case 2 :         
		           printf ( "enter the name that the class was scheduled under \n");
		            
				   if(total== 0){
		                 printf("%s","there is no class scheduled for that time\n");
		             }
		            scanf("%s", name);
		           
					
					for (int i = 0; i < 5; i++)
		            {
		             
		             result = strcmp(lessons[i], name);
		          if (result==0){
						for(int j=i; j<total-1 ; j++){

							strcpy(lessons[j],lessons[j+1]);
											  
				 
						}	
	 			printf("class was cancelled\n");
						lessons[total-1][0]='\0';
						total--;
				  	}
					}
					
	                break;

		   
		   case 3 :  for (int i = 0; i < total; i++){
	                  if (total==0)
	               {
	                 printf("No lessons have been requested yet\n");
          				 break;
           				    }
           			 
        			     else {
        			  printf("%s has a lesson at %dpm\n",lessons[i],i+1 );
       				          }
        			   };
    				   break; 
    		case 4 :
					   printf("enter the first letter of the name\n");
     				 scanf(" %c", &letter);
	 				 for (int i = 0; i < 5; i++)
				      {
					 if (lessons[i][0] == letter)
    					   {
					printf("%s\n", lessons[i]);		}
					}
					break;
	       case  9 :  return 1;
				break;
	
		   default : printf( "Bad option\n" ); break;
		}
	}
	}
