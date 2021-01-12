#include <stdio.h>
//n,m is global so to use it in every method/function
int n = 0;
int m = 0;
//this is a checker to see if the user is inputing the right numbers for columns
void checkNM(){
	//im using a duble while to have a "menu" and not to have both prompts if the first is rong
	while(1){
		printf("Enter value for dimentions of first column: ");
    	scanf("%d", &n);
    	printf("\n");
    	if(n >= 10){
    		printf("You need to input a number smaller than 10 \n");
			continue;
		}
		while(1){
		printf("Enter value for dimentions of second column: ");
    	scanf("%d", &m);
    	printf("\n");
		if(m < 20){
			break;
		}
		printf("You need to input a number smaller than 20 \n");
	}
	break;
}
		
}
//method to fill the array
void arrayFill(int A[n][m]){
	//you can use this format of for in iso c99 and iso c11 (which is c)
	//and using a double for to fill a 2D array
	for(int i=0; i<n; i++) {
      for(int j=0;j<m;j++) {
         printf("Enter value for array[%d][%d]:", i, j);
         scanf("%d", &A[i][j]);
      }
   }
}
//a method to calculate if the number is even and positive 
//and returns 1 or 0
int isEvenPositive(int num){
	if(num >= 0 && num % 2 == 0){
        	return 1;
		 }
	return 0;
}
//counts if the above method returns 1 and prints how many times it returned 1
void sumMethod(int A[n][m]){
	int counter = 0;
	for(int i=0; i<n; i++) {
      for(int j=0;j<m;j++) {
        if(isEvenPositive(A[i][j]) == 1){
        	counter++;
		}
      }
   }
   printf("The sum of positive/even numbers is: %d",counter);
}
//a method to calculate the average of some numbers
double averageCalculation(double num,int num2){
	return  num / num2;
}
//using the above method i calculate and print the average of every line
//when for(i..) prompts sum is 0 so to calculate only 1 line at a time
void average(int A[n][m]){
	double sum = 0;
    for (int i=0; i<n; i++){
    	sum = 0;
    	for (int j=0; j<m; j++){
        	sum = sum + A[i][j];
    	}
    	printf("Average of line %d is %.1f\n",(i+1),averageCalculation(sum,m));
	}
}
//this is printing the array 
void printArray(int A[n][m]){
	for(int i=0; i<n; i++) {
    	for(int j=0;j<m;j++) {
        	printf("%d ", A[i][j]);
    	}
    	//breaks every line of array
    	printf("\n");
	}
}
//here is everything that main needs to run 
void programRun(){
	checkNM();
	int A[n][m];	
	arrayFill(A);
	average(A);
	printArray(A);
	sumMethod(A);
}
//for some reason main didnt want me to have it void and 
//i had to make it return nothing to play
int main(){
	programRun();
	return 0;
}
