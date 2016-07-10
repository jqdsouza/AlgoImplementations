#include <iostream>

using namespace std;

void insertionSort(int A[], int length){

	int temp, hole;

	for(int i = 1; i < length; i++){
		temp = A[i];
		hole = i;

		while(hole > 0 && A[hole-1] > temp){
			A[hole] = A[hole-1];
			hole--;
		}

		A[hole] = temp;
	}

}

void printArray(int A[], int length){

	for(int i = 0; i < length; i++){
		cout << A[i] << " ";
	}

}

int main(){

	int A[] = {66,53,79,12,33,6,3,101,99,62};
	int length = sizeof(A) / sizeof(int);

	cout << "Before Insertion Sort: " << endl;
	printArray(A,length);

	insertionSort(A,length);

	cout << "\n" << endl;
	cout << "After Insertion Sort: " << endl;
	printArray(A,length);

	return 0;

}