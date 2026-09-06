#include <stdio.h>
#include <math.h>

int sum (double a[], double size){
	int sum = 0;

	for (int i = 0; i <= size; i++){
		return sum += a[i]; 
	}
}

double avg (double a[], double size){
	double avg = 0;	
	return avg = sum(a, size)/size; 
}

double stdDev (double a[], double size){
	double arrAverage = avg(a, size);
	
	return 0;
}

int main (){
	double numA[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double aSize = sizeof(numA) / sizeof (double);
	
	//printing array?
	printf("\n");
	printf("Printing out the output for Intro Assignment\n");
	
	for (int i = 0; i < aSize; i++){
		printf("numA[%d]: %.2lf\n", i, numA[i]);
	}

	printf("sizeA: %.0lf\n", aSize);
	printf("Sum: %.2lf\n", sum(numA, aSize));
	printf("Average: %.2lf\n", avg(numA, aSize));

	int numB[3] = {10,20,30};
	int numC[7] = {3,7,1,9,2,6,0};
	return 0; 
}


