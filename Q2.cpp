/*Create a class RELATION, use Matrix notation to represent a relation. Include member 
functions to check if the relation is Reflexive, Symmetric, Anti-symmetric, Transitive. Using 
these functions check whether the given relation is: Equivalence or Partial Order relation or 
None*/
#include <iostream>
using namespace std;


void reflexive(int** M, int size) {
    bool isReflexive = true;
    for (int i = 0; i < size; i++) {
        if (M[i][i] != 1) {
            isReflexive = false;
            break;
        }
    }
    if (isReflexive) {
        cout << "The matrix is reflexive" << endl;
    } else {
        cout << "The matrix is not reflexive" << endl;
    }
}


void symmetric(int** M, int size) {
    bool isSymmetric = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (M[i][j] != M[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }
    if (isSymmetric) {
        cout << "The matrix is symmetric" << endl;
    } else {
        cout << "The matrix is not symmetric" << endl;
    }
}

void antisymmetric(int **M,int size){
    bool isAntisymmetric = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (M[i][j] == 1 && M[j][i] == 1 && i != j) {
                isAntisymmetric = false;
                break;
            }
        }
    }
    if (isAntisymmetric) {
        cout << "The matrix is antisymmetric" << endl;
    } else {
        cout << "The matrix is not antisymmetric" << endl;
    }
}



void transitive(int** M, int size) {
    bool isTransitive = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (M[i][j] == 1) {
                for (int k = 0; k < size; k++) {
                    if (M[j][k] == 1 && M[i][k] != 1) {
                        isTransitive = false;
                        break;
                    }
                }
            }
        }
    }
    if (isTransitive) {
        cout << "The matrix is transitive" << endl;
    } else {
        cout << "The matrix is not transitive" << endl;
    }
}
void equivalence(int **M, int size ,bool isReflexive, bool isSymmetric, bool isTransitive) {
    
    if (isReflexive && isSymmetric && isTransitive) {
        cout << "The matrix is equivalence" << endl;
    } else {
        cout << "The matrix is not equivalence" << endl;
    }
}
void partialorderrelation(int **M, int size , bool isReflexive , bool isAntisymmetric , bool isTransitive ){
    if (isReflexive && isAntisymmetric && isTransitive ){
        cout<<"The matix is parial order relation "<<endl;
}else{
    cout <<"The matrix is not partial order relation"<<endl;

}
}

int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    
    int** M = new int*[size];
    for (int i = 0; i < size; i++) {
        M[i] = new int[size];
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            M[i][j] = 0;
        }
    }

    int a, b;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Enter the row index: ";
            cin >> a;
            cout << "Enter the column index: ";
            cin >> b;
            if (0 <= a && a < size && 0 <= b && b < size) {
                M[a][b] = 1;
            } else {
                cout << "Invalid input. Indices must be between 0 and " << size - 1 << "." << endl;
            }
        }
    }

    
    cout << "The matrix is:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    reflexive(M,size);
    symmetric(M,size);
    antisymmetric(M,size);
    transitive (M,size);
    equivalence(M,size,reflexive,symmetric,transitive);
    partialorderrelation(M,size,reflexive,antisymmetric,transitive);
    
    
        
    for (int i = 0; i < size; i++) {
        delete[] M[i];
    }
    delete[] M;

    
    return 0;
}
