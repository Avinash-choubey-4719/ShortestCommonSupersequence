#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int lcs(string a, int n, string b, int m){
    if(m == 0 || n == 0){
        return 0;
    }

    if(a[n - 1] == b[m - 1]){
        return 1 + lcs(a, n - 1, b, m - 1);
    }

    else if(a[n - 1] != b[m - 1]){
        return max(lcs(a, n - 1, b, m), lcs(a, n, b, m - 1));
    }
}

int solve(string a, int n, string b, int m){
    return ((m + n) - lcs(a, n, b, m));
}

int main(){
    string a = "geeks";
    string b = "eke";
    int n = 5;
    int m = 3;

    int result = solve(a, n, b, m);
    cout<<result<<endl;
    return 0;
}