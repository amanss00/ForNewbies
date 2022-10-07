#include<iostream>
using namespace std;

int main(){
    
    int row, column;
    // here we take rows from the user.
    cout<<"Enter the number of rows: "<<"\n";
    cin>>row;
    // here we take coloumns from the users.
    cout<<"Enter the number of columns: "<<"\n";
    cin>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}
