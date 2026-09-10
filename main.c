#include <stdio.h>
#include <math.h>

double sum (double arr[], double size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i]; 
	}
	return sum;
}

double average (double arr[], double size){
	double avg = 0;
	return avg = sum(arr, size) / size; 
}

double stdDev (double arr[], double size){
	double avg = average(arr, size);
	double sum = 0;
	double square = 0; 
	double stdDev = 0;

	for(int i = 0; i < size; i++){
		square = pow((arr[i] - avg), 2);
		sum += (square);
	}
	return stdDev = sqrt(sum / size);
}

int main (){
	double numA[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double arrSizeA = sizeof(numA) / sizeof(numA[0]);

	double numB[] = {11.0, 22.0, 33.0, 44.0, 55.0};
	double arrSizeB = sizeof(numB) / sizeof(numB[0]);
	
	double numC[] = {10.4, 15.4, 12.8};
	double arrSizeC = sizeof(numC) / sizeof(numC[0]);

	printf("\n");
	printf("Printing out the output for Intro Assignment\n\n");
	
	printf("ArrayA[%.1lf] = ", arrSizeA);
	for(int i = 0; i < arrSizeA; i++){
		printf("%.2lf ", numA[i]);
	}
	printf("\nSum of A: %.2lf\n", sum(numA, arrSizeA));
	printf("Average of A: %.2lf\n", average(numA, arrSizeA));
	printf("Standard Deviation of A: %.2lf\n\n", stdDev(numA, arrSizeA));


	printf("ArrayB[%.1lf] = ", arrSizeB);
	for(int i = 0; i < arrSizeB; i++){
		printf("%.2lf ", numB[i]);
	}
	printf("\nSum of B: %.2lf\n", sum(numB, arrSizeB));
	printf("Average of B: %.2lf\n", average(numB, arrSizeB));
	printf("Standard Deviation of B: %.2lf\n\n", stdDev(numB, arrSizeB));


	printf("ArrayC[%.1lf] = ", arrSizeC);
	for(int i = 0; i < arrSizeC; i++){
		printf("%.2lf ", numC[i]);
	}
	printf("\nSum of C: %.2lf\n", sum(numC, arrSizeC));
	printf("Average of C: %.2lf\n", average(numC, arrSizeC));
	printf("Standard Deviation of C: %.2lf\n\n", stdDev(numC, arrSizeC));

	return 0; 
}


