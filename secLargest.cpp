#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size){
	int max1 = arr[0], max2 = arr[0];
	for (int i = 0; i < size; i++){
		if (arr[i] > max1){
			max1 = arr[i];
		}
	}
	for(int i = 0; i < size; i++){
	    if (arr[i] > max2 && arr[i] < max1){
			max2 = arr[i];
		}
	}
	return max2;
}

int main (){

	int arr[] = {2,4,6,1,9};
	int size = 5;
	cout<<findSecondLargest(arr, size);

	return 0;
}