#include <stdio.h>
#include <string.h>
#include <ctype.h>



char words [10][20];
int length[10];
int total=0;
void output();
void insert();
void reverse();
void convert();
void info();



int main(){
	insert();
	reverse();
	convert();
	info();
	return 0;
}
//this prints out the strings in order
void output(){
	for(int i=0; i<total;i++){
		printf("%s\n ",words[i]) ;
	}
}


//this reverses the order of the words
void reverse(){
    char temp[20];
	for(int i=0;i<total/2;i++){
	strcpy( temp , words[i]) ;
	strcpy(	words[i],words[total-1-i]) ;
	strcpy(	words[total-1-i],temp) ;
	}

	printf("this is the words reversed \n");
	output();
}



// this funtion allows you to enter words and automatically puts then in
//alpabetical order
void insert(){
	int i;
	char newword[20];
	while(scanf("%s",newword)==1 && total<10){
		if(total==0){
		strcpy(words[0],newword);
		}
		else{
		   for(i=0;i<total;i++){
			   if(strcasecmp(newword,words[i])<0){
				    for(int j=total-1;j>=i;j--){
					   strcpy(words[j+1],words[j]);
			    	}
		    		strcpy(words[i],newword);
					break;
			   }
	    	}
		}
		if(i==total){
			strcpy(words[total],newword);
		}
		total++;
	}
	printf("this is the words in alphabetical order\n ");
	output();
}



//this function capitilizes all of the letters in each word
void convert(){
	char *p;
	for(int i=0;i<total;i++){
		p=words[i];
		int count=0;
		while(*p!='\0'){
		  if(islower((int)*p)) {
		      *p=toupper((int)*p);
			  }
		count++;
		p++;
		}
		length[i]=count;
	}
	printf("this is after capitilizing \n");
	output();
}



//this function returns the shortest, longest, and average length of each 
//word.  it also returns which words dont start with a letter.
void info(){
	int sum = 0;
	int average;
	for (int i = 0; i < total; i++){
		length[i] = strlen(words[i]);
	}
	    int min  = length[0];
		int max  = length[0];
		char shortword[10];
		char longword[10];
	    strcpy(shortword, words[0]);
	    strcpy(longword, words[0]);

	for(int i = 0; i < total; i++){
		if(length[i] < min){
			min = length[i];
			strcpy(shortword, words[i]);
		}
	}

	for(int i = 0; i < total; i++){
		if(length[i] > max){
			max = length[i];
			strcpy(longword, words[i]);
		}
	}
						
	printf("The longest word is %s\n", longword);
	printf("The shortest word is %s\n", shortword);

	for(int i =0; i<total; i++){
		sum += length[i];
	}

		average = (sum/total);
		printf("The average is %d\n", average);

        for(int i=0; i<total;i++){
			if(isalpha(words[i][0])==0 ){
				printf("the word %s starts with a non letter \n", words[i]);
			}
		}
}










