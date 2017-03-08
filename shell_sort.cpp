#include <iostream>
using namespace std;

void shell_sort (int *A, int n){
	int h,i,j,k;
	for (h=n; h /= 2;) {
		for(i=h; i < n; i++) {
			k = A[i];
			for (j=i; j>=h && k < A[j-h]; j-=h) {
				A[j] = A[j-h];
			}
			A[j] = k;
		}
	}
}

int main(int ac, char **av) {	
	int A[5] = {32,0,3,30,56};
	int n = sizeof A / sizeof A[0];
	shell_sort(A,n); 	
	cout << "Sorted Array list: " << endl;
	for(int p=0; p<5; p++) {
		cout << A[p] << " ";
	}
	return 0;
}
