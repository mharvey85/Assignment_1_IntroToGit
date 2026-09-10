#include <stdio.h>
#include <math.h>

double sum (double a[], double size){
	double sum = 0;

	for (int i = 0; i <= size; i++){
		sum += a[i]; 
	}
	return sum;
}

double average (double a[], double size){
	double avg = 0;	
	return avg = sum(a, size) / size; 
}

double stdDev (double a[], double size){
	double avg1 = average(a, size);
	double sum = 0;
	double square = 0; 
	double stdDev = 0;

	for (int i = 0; i < size; i++){
		square = pow((a[i] - avg1), 2);
		sum += (square);
	}
	return stdDev = sqrt(sum / size);
}

int main (){
	double numA[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double numB[7] = {3, 7, 1, 9, 2, 6, 0};
	
	double arrSize = sizeof(numB) / sizeof(numB[0]);
	
	printf("\n");
	printf("Printing out the output for Intro Assignment\n");
	printf("Sum: %.2lf\n", sum(numB, arrSize));
	printf("Average: %.2lf\n", average(numB, arrSize));
	printf("Standard Deviation: %.2lf\n\n", stdDev(numB, arrSize));
	return 0; 
}


