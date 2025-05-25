/*
Write a Program that generates all the permutations of a given set of digits without 
repetition.
*/

#include <iostream>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

void swap(int i, int j, int arr[]) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void printArray(int A[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void permutation(int index, int A[], int n) {
    if(index == n) {
        printArray(A, n);
        return;
    }

    for(int i = index; i < n; ++i) {
        swap(i, index, A);
        permutation(index + 1, A, n);
        swap(i, index, A);
    }
}

int main() {
    int A[3] = {1, 2, 3};
    int n = 3;

    permutation(0, A, n);

    return 0;
}
