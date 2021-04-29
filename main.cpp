#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k;
bool check[80000+1];
int main()
{
  
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        check[x]=true;
    }
    int i=1;
    while(k>0){
        if(!check[i]){
            cout<<i<<endl;
            k--;
        }
        i++;
    }
    return 0;
}
