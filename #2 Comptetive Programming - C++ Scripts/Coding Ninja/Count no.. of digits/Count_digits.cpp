#include<bits/stdc++.h>
using namespace std;

int count(int n){
    if(n == 0){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns+1;
}
int main(){
    cout<<count(156);
}
