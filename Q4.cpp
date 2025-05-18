/*Q4) For any number n, write a program to list all the solutions of the equation x1 + x2 + x3 + ...+ xn = C, 
where C is a constant (C<=10) and x1, x2, x3,...,xn are non-negative integers, using brute force strategy.*/


#include <iostream>
using namespace std;

const int max_n=10;
int n,C;
int x[max_n];

void findsolution(int idx, int sum){
    if(idx==n-1){
        if(sum<=C){
            x[idx]=C-sum;
            cout<<"(";
            for(int i=0;i<n;i++){
                cout<<x[i];
                if(i!=n-1) cout<<",";
            }
            cout<<")";
        }
        return;
    }

    for(int i=0;i<n;++i){
        x[idx]=i;
        findsolution(idx+1,sum+i);
    }
}

int main(){
    cout << "Enter number of variables (n): ";
    cin >> n;
    cout << "Enter target sum (C, <=10): ";
    cin >> C;

    if(n<=0||C<0||C>10||n>max_n){
        cout << "Invalid input. Ensure 1 <= n <= " << max_n << " and 0 <= C <= 10.\n";
        return 1;
    }

    cout << "Solutions:\n";
    findsolution(0, 0);

    return 0;
}
