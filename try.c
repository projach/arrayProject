#include <stdio.h>

int n = 0;
int m = 0;

void checkNM(){
	while(1){
		printf("Enter value for dimentions of first array: \n");
    	scanf("%d", &n);
    	if(n < 10){
			break;
		}
		printf("You need to input a number smaller than 10 \n");
	}
	while(1){
		printf("Enter value for dimentions of second array: \n");
    	scanf("%d", &m);
		if(m < 20){
			break;
		}
		printf("You need to input a number smaller than 20 \n");
	}	
}

void arrayFill(int A[n][m]){
	for(int i=0; i<n; i++) {
      for(int j=0;j<m;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &A[i][j]);
      }
   }
}

int isEvenPositive(int num){
	if(num >= 0 && num % 2 == 0){
        	return 1;
		 }
	return 0;
}

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

double averageCalculation(double num,int num2){
	num = num / num2;
	return num;
}

void average(int A[n][m]){
	double sum = 0;
    for (int i=0; i<n; i++){
    	sum = 0;
    	for (int j=0; j<m; j++){
        	sum = sum + A[i][j];
    	}
    	printf("Average of line %d is %.1f\n",i,averageCalculation(sum,m));
	}
}

void printArray(int A[n][m]){
	for(int i=0; i<n; i++) {
    	for(int j=0;j<m;j++) {
        	printf("%d ", A[i][j]);
    	}
    	printf("\n");
	}
}

void programRun(){
	checkNM();
	int A[n][m];	
	arrayFill(A);
	average(A);
	printArray(A);
	sumMethod(A);
}

int main(){
	programRun();
	return 0;
}
