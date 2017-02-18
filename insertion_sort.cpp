#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int A[n] = {30, 40, 20, 50, 10};
	int i, j;
	cout << "Array is 30, 40, 20, 50, 10" << endl;
	
	for( i=1; i<n; i++){
	{
		int tmp=A[i];
		for(j=i-1; j>=0 && tmp<A[j];j--)
		{
			A[j+1] = A[j];
		}
		A[j+1]= tmp;
	}
	for (int k=0; k<5; k++)
			cout << A[k] << " ";
			cout << "\n";
		}
}
