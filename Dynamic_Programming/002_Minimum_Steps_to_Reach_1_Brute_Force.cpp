// Minimum steps to reach a number to 1

/*
Options allowed

1. Decrement by 1
2. Divide by 2.
3. Divide by 3.

*/


#include<bits/stdc++.h>
using namespace std;

int minSteps(int n){
    /// base case
    if(n <= 1){
        return 0;
    }
    /// recursive
    int x = minSteps(n-1);
    int y,z;
    y=z=INT_MAX;

    if(n%2==0){
         y = minSteps(n/2);
    }
    if(n%3==0){
         z = minSteps(n/3);
    }
    /// calculate ans
    int ans = min(x,min(y,z)) + 1;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n)<<endl;
    return 0;
}
