
#include <iostream> 

using namespace std;

bool czy_k_podobne(int n, int A[], int B[], int k) {
	for (int i = 0; i < k; i++) {
		if (A[i] != B[n - k + i]) {
			return false;
		}
	}
	for (int i = 0; i < n - k; i++) {
		if (B[i] != A[k + i]) {
			return false;
		}
	}
	return true;
}

bool czy_podobne(int n, int A[], int B[]) {
	
	for (int k = 0; k < n; k++) {
		if (czy_k_podobne(n, A, B, k)) {
			return true;
		}
	}
	return false;
}

int main(){

	int A[] = {1,2,3,4,5};
	int B[] = {3,4,5,1,2};
	int n = 5;
	int k = 3;
	cout << czy_podobne(n, A, B);

}