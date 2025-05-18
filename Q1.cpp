*/Write a program to represent SETS using bit strings. Also, perform the following SET operations: 
a. is member: check whether an element belongs to the set or not and return 
value as true/false.
b. union and intersection of two sets. 
c. complement: assume universal set as per the input elements from the user. 
d. set difference and symmetric difference between two sets. 
e. cartesian product of two sets./*

#include <iostream>
using namespace std;

void unionintersect(int A[], int B[], int C[], int D[]) {
    cout << "Union of A and B: ";
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] | B[i];
        D[i] = A[i] & B[i];
        cout << C[i] << " ";
    }
    cout << endl << "Intersection of A and B: ";
    for (int i = 0; i < 10; i++) {
        cout << D[i] << " ";
    }
    cout << endl;
}

void ismember(int A[]) {
    int i;
    cout << endl << "Enter element number to check: ";
    cin >> i;
    if (A[i] == 1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

int subset(int B[], int A[]) {
    for (int i = 0; i < 10; i++) {
        if (A[i] == 0 && B[i] == 1) {
            cout << endl << "B is not a subset of A" << endl;
            return 0;
        }
    }
    cout << "B is a subset of A" << endl;
    return 1;
}

void complement() {
    int n;
    cout << "Enter size of the set to make complement: ";
    cin >> n;
    int set[n];

    cout << "Enter elements in the set: ";
    for (int i = 0; i < n; i++) {
        cin >> set[i];
    }
    int setcomp[n];
    for (int i = 0; i < n; i++) {
        setcomp[i] = !set[i];
        cout << setcomp[i] << " ";
    }
    cout << endl;
}

void cartesianproduct(int A[], int B[]) {
    cout << "Cartesian product:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i] == 1 && B[j] == 1) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

void setdifference(int A[], int B[]) {
    int diff[10];
    cout << "Set difference A-B: ";
    for (int i = 0; i < 10; i++) {
        if (A[i] == 1 && B[i] == 1) {
            diff[i] = 0;
        } else {
            diff[i] = A[i];
        }
        cout << diff[i] << " ";
    }
    cout << endl;
}

void symmetric_diff(int C[], int D[]) {
    int SymmDiff[10];
    cout << "Symmetric Difference of A and B: ";
    for (int i = 0; i < 10; i++) {
        if (D[i] == 1 && C[i] == 1) {
            SymmDiff[i] = 0;
        } else {
            SymmDiff[i] = C[i];
        }
        cout << SymmDiff[i] << " ";
    }
    cout << endl;
}

int main() {
    int U[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int A[10] = {0, 1, 0, 1, 0, 0, 0, 1, 0, 0};
    int B[10] = {1, 0, 0, 1, 0, 0, 1, 0, 0, 1};
    int C[10];
    int D[10];
    unionintersect(A, B, C, D);
    ismember(A);
    complement();
    cartesianproduct(A, B);
    setdifference(A, B);
    subset(A, B);
    symmetric_diff(C, D);
    return 0;
}
