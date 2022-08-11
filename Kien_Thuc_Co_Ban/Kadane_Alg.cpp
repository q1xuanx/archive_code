#include <bits/stdc++.h>
using namespace std;
int kadane(int a[], int n){
	int max_so_far = 0;
	int max_ending = 0;
	for (int i = 0; i < n; i++){
		max_ending += a[i];
		if (max_ending < 0){
			max_ending = 0;
		}
		if (max_so_far < max_ending){
			max_so_far = max_ending;
		}
	}
	return max_so_far;
}
int main(){
	int a[] ={-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	cout << "Maximum elements: " << kadane(a,n);
	return 0;
}
