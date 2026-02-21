#include<bits/stdc++.h>
using namespace std;
void wavePrint(int arr[100][100],int row,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main(){
    int row,col;
    cout<<"enter the value of the row and column";
    cin>>row>>col;
    int arr[100][100];
    cout<<"enter the element of the array";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    wavePrint(arr,row,col);

}