// 1
// 3 5
// 5 7 9
// 7 9 11 13
// 9 11 13 15 17

#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<2*(i+j)-3<<" ";
        }
        cout<<endl;
    }

    return 0;
}