#include <iostream>
using namespace std;

bool czy_k_podobne(int n, int A[], int B[], int k) {
    for (int i = 0; i < k; i++) {
        if (A[i] != B[n - k + i]) return false;
    }
    for (int i = 0; i < n - k; i++) {
        if (B[i] != A[k + i]) return false;
    }
    return true;
}

int main()
{
    //         0 1 2 3 4
    int A[] = {7,5,1,4,5};
    int B[] = {1,4,5,7,5};
    int n = 5;
    int k = 2;

    cout << czy_k_podobne(n, A, B, k);

    


    return 0;
}
