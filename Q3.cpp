/*
Write a Program that generates all the permutations of a given set of digits without 
repetition.
*/

#include <iostream>
using namespace std;


int print(int n , int * num){
    for ( int i=0 ;i < n ; i++){
        cout << num [i] << " ";


    }
    cout<< endl;
}

int swap (int i , int j , int * num){
    int t =  num [i];
    num [i ] = num [j ];
    num [j] = t;

}

int permutation(int index,int n , int * num){
    if( index == n){
        print (n, num );
        return 0;
    }

    for (int i= index; i <n ; i++){
        swap (i , index , num );
        permutation (index + 1, n , num );
        swap (i, index , num ); 

    }

}

int main (){
    int n ;
    cout<< " enter the number of digit ";
    cin >> n;
    int * num = new int [n];
    for ( int i =0 ; i<n ; i++){
        cout << "Enter the "<<i+1<<" digit :";
        cin >> num [i];
    }
    permutation(0,n, num);
    delete[] num ;
}
