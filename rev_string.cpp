#include<bits/stdc++.h>
using namespace std;
void revstr(char name[] , int n){
    int i=0;
    int j=n-1;
   while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
bool palindrome(char name[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(name[i++]==name[j--]){
            return true;
        }
        else{
            return false;
        }
    }

}

int main (){

char name[10];
int n;
cout<<"enter the lenght of the name : "<<endl;
cin>>n;
cout<<"enter the name :"<<endl;
cin>>name;
cout<<"your name is : "<<name<<endl;

revstr(name,n);
cout<<"the reverse name is :"<<name<<endl;

cout<<"palindrome or not: "<<palindrome(name,n);


}