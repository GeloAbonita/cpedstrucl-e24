#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int A[n] = {40, 30, 20, 50, 10};
	cout << "Array is 40, 30, 20, 50, 10" << endl;
	
	for(int i=0; i<n-1; i++){
	{ 
		int min =A[i], index=i;
		for (int j=i+1;j<n;j++)
			{
				if(A[j]<min)
				{
					min=A[j];
					index=j;
				}
			}
			A[index] = A[i];
			A[i]=min;
		}
			for (int k=0; k<5; k++)
			cout << A[k] << " " ;
			cout << "\n";
	}
} 
