#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "shuvam";
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<" ";
}