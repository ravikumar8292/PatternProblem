// 1
// 3 2
// 6 5 4 
// 10 9 8 7

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=0;

    for(int i=1;i<5;i++){
        k+=i;
        for(int j=k;j>k-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}