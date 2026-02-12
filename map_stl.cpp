#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="hello";
    m[4]="hero";
    m[9]="hey";
    m[6]="okay";
    m.insert({5,"alright"});
    for(auto i:m){
        cout<<i.first<<" ";
        cout<<i.second<<" ";
    }
    cout<<endl;
    cout<<m.count(9)<<endl;
    m.erase(6);
    cout<<m.count(6)<<endl;


}