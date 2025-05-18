/*Q6) Write a Program to check if a given graph is a complete graph. Represent the graph using the Adjacency Matrix representation. */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of vertices in the graph: ";
    cin>>n;
    int M[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the value of edge from "<<i+1<<" to "<<j+1<<": ";
            cin>>M[i][j];
        
        }
    }
    bool complete=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(M[i][j]==0 && i!=j){
                complete=false;
                break;
            }
        }
    }
    if(complete){
        cout<<"the graph is complete"<<endl;
    }
    else{
        cout<<"the graph is not complete"<<endl;
    }
}
