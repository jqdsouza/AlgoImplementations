#include <iostream>

using namespace std;

void bubbleSort(int A[], int length){
	
	bool swapped;
	int temp;
	
	do {
		swapped = false;
		for(int i = 0; i < length-1; i++){
			if(A[i] > A[i+1]){
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				swapped = true;
			}
			
		}
	} while (swapped);

}

void printArray(int A[], int length){

	for(int i = 0; i < length; i++){
		cout << A[i] << " ";
	}

}

int main(){

	int A[] = {50,20,60,100,10,20,5,1,6,7};	
	int length = sizeof(A) / sizeof(int);

	cout << "Before Bubble Sort: " << endl;
	printArray(A,length);
	
	cout << "\n" << endl;

	bubbleSort(A,length);

	cout << "After Bubble Sort: " << endl;
	printArray(A,length);

	return 0;

}