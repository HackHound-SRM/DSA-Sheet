#include <bits/stdc++.h>
using namespace std;

void p17(int n) {
   for(int i=1; i<=n; i++) {
    if(i%3 ==0 && i%5==0) cout <<"FizzBuzz ";
    else if(i%3==0) cout <<"Fizz ";
    else if (i%5==0) cout <<"Buzz ";
    else cout <<i<<" ";
   }
}


int main() {
   int n;
   cin >>n;
   p17(n);
}