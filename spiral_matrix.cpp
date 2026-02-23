#include<bits/stdc++.h>
using namespace std;
void spiral(int arr[100][100], int row, int col){
    int starting_row=0;
    int ending_row=row-1;
    int starting_column=0;
    int ending_column=col-1;
    int total=row*col;
    int count=0;
    vector<int>ans;
    while(count<total){
        //left to right
        for(int i=starting_column;i<=ending_column;i++){
            cout<<arr[starting_row][i]<<" ";
            count++;
        }
        starting_row++;
        //top to bottom
    for(int i=starting_row;i<=ending_row;i++){
        cout<<arr[i][ending_column]<<" ";
        count++;
    }
    ending_column--;
        //right to left
    for(int i=ending_column;i>=starting_column;i--){
        cout<<arr[ending_row][i]<<" ";
        count++;
    }
    ending_row--;
        //bottom to top 
    for(int i=ending_row;i>=starting_row;i--){
        cout<<arr[i][starting_column]<<" ";
        count++;
    }
    starting_column++;
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
    spiral(arr,row,col);
}