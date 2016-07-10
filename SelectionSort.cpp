#include <iostream>

using namespace std;

void selectionSort(int A[], int length){	

	int iMin, temp;

	for(int i = 0; i < length-1; i++){	// need to do n-2 passes
		iMin = i;	// ith position: elements from i through n-1 are candidates
		
		for(int j = i+1; j < length; j++){
			if(A[j] < A[iMin]){
				iMin = j;	// update index of minimum element
			}
		}

		temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}

}

void printArray(int A[], int length){

	for(int i = 0; i < length; i++){
		cout << A[i] << " ";
	}

}

int main(){

	int A[] = {6,9,10,3,2,100,50,99,66,2};	// sample array of size 10
	int length = sizeof(A) / sizeof(int);

	cout << "Before Selection Sort: " << endl;
	printArray(A,length);

	selectionSort(A,length);

	cout << "\n" << endl;
	cout << "After Selection Sort: " << endl;
	printArray(A,length);

	return 0;

}
