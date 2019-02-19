
#include <stdio.h>
#include "string.h"

	
	 
	char lessons[5][20];
	char phones[5][20];
	char groups[5];
	char schedule[5];
	char letter;

	int total = 0; 	
	int userInput=0;
	void request();
	void cancel();
	void list();
	void firstletter();
	void groupsize();
	
	
	int main() {
		int option;
	while(1){
	printf("%s","type 1 to request a class, type 2 to cancel a class, type 3 to see the available schedule, type 4 to see a list of names, type 5 to see the group size,  type 9 to quit \n  ");
  
       scanf("%d",&userInput);
       switch (userInput){
      
		   case 1 :
			request();   
			break;
		   
		   case 2 :         
			 cancel();				
	         break;
		   
		   case 3 :
    		 list();
			 break; 
		   
		   case 4 :
			  firstletter();
				break;
		   case 5 :
				groupsize();
				break;

			case  9 :  return 1;
				break;
	
		   default : printf( "Bad option\n" ); break;
		}
	}
}

//takes input for name, phone# and group size.  checks if it is valid and then saves it
void  request(){
		char phonenum[20];
		char name[20];
		int groupsize=0;

    	 printf("whats your name\n");
		
	if(total==5){
	      printf("there are no free slots \n");
		  return;				        
	  }          
	
	else{
		  scanf("%s", name);
			  
	   for(int i=0; i<total; i++){
			if(strcmp(lessons[i],name)==0 ){
					printf("name is already taken\n ");
		   			return;
			}
	   }

		   printf("what's your phone numer?\n ");
		   scanf("%s",phonenum);

			printf("how many in your group\n");
			scanf("%d",&groupsize);
				
		if(groupsize < 1 ||  groupsize > 4){
			     printf("incorrect group size\n ");
				 return;
		}

				strcpy(lessons[total],name);
				strcpy(phones[total], phonenum);
				groups[total]=groupsize;
				total++;	
				return;
			}
		}
//cancels a chunk of data associated with the name entered
void cancel(){
	char name[20];
	int result=0;
	printf ( "enter the name that the class was scheduled under \n");  

   if(total== 0){
       printf("%s","there is no class scheduled for that time\n");
   }

		scanf("%s", name);

   for (int i = 0; i < 5; i++){
		    result = strcmp(lessons[i], name);
     if (result==0){
	   	  
	 		printf("%s's  class was cancelled amd there phone number is %s \n",lessons[i],phones[i]);
		 for(int j=i; j<total-1 ; j++){
	
			   strcpy(lessons[j],lessons[j+1]);
			   strcpy(phones[j],phones[j+1]);
			   groups[j]=groups[j+1];				
		   	
			   printf("%s was moved up to %d PM \n ", lessons[j+1],j+1 ) ;
				printf("The phone number is %s and the group size is %d\n ", phones[j], groups[j]); 
		   
		   
		   }	
			lessons[total-1][0]='\0';
			total--;
			
			
			
			return;
				
					  
					  
      }
   }

}

//lists out all of the classes scheduled
void list(){
	
	for (int i = 0; i < total; i++){
	    if (total==0){
	        printf("No lessons have been requested yet\n");
          	break;
        }			 
        else {
        	  printf("%s has a lesson at %dpm\n",lessons[i],i+1 );
       		  printf("the phone number is %s\n",phones[i]);
			  printf("the group size is %d\n\n ", groups[i]);
		 }
     }
		return;
}

//finds what classes have been booked by first name
void firstletter(){
	   printf("enter the first letter of the name\n");
       scanf(" %c", &letter);
	 for (int i = 0; i < 5; i++){
		if(lessons[i][0] == letter){
			printf("%s\n", lessons[i]);	
		}
	}
	return;
}



//finds what classes have been booked based on group size
void groupsize() {
	
	int i;
	int groupsize = 0;
	if(total==0){
		printf("nothing scheduled\n ");
	}
	else{
	printf("enter the number in the group\n ");	
	scanf("%d",&groupsize);
		for(int i=0; i<total; i++){
			if(groups[i]==groupsize){
			printf("%s",lessons[i]);
			printf("%s",phones[i]);
			printf("%d",groups[i]);

			}
	}


}
}


