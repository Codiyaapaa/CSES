#include<iostream>

using namespace std;

int main(){
    string n;
    cin>>n;
    int cnt = 1;
    int ans = 0;
    for(int i=0; i<n.size(); i++){
        if(n[i] == n[i+1]) cnt++;
        else cnt = 1;
        ans = max(ans,cnt);
    }
    cout<<ans;
}