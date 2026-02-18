#include<bits/stdc++.h>
using namespace std;
bool ispresent(int arr[][100],int target,int row, int col){
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==target){
            return true;
        }
    }
}
return false;
}
int main(){
    int row,col;
    cout<<"enter the value of row and column"<<endl;
    cin>>row>>col;
    int arr[100][100];
    cout<<"enter the elements of the 2d array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"enter the value of the target"<<endl;
    cin>>target;
    if(ispresent(arr,target,row,col)==true){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"enlement is not found"<<endl;
    }
return 0;
}
