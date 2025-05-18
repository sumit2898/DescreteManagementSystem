/*Q5) Write a Program to evaluate a polynomial function. (For example store f(x) = 4n^2 + 2n + 9 in an array and for a given value of n, say n = 5, compute the value of f(n)).*/ 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int degree;
    cout <<"Enter the degree of the polynomial:";
    cin>> degree;
    int coeff[degree + 1];
    

    for (int i=0; i <= degree; i++){
        cout << "Enter the coefficient of x^" << i << ":";
        cin >> coeff[i];
    }

    int n;
    cout << "Enter the value of x: ";
    cin >> n;
    int final = 0;
    for(int i=degree; i>=0; i--){
        
        
        final+= coeff[i] * pow(n, i);
        ;

    }
    cout <<"The value of f("<<n<<") for the given function="<< final << endl;
    return 0;
}


