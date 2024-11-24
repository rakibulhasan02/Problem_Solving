#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    string s;
    cin>>s;
    set<char> ch(s.begin(),s.end());
    if(ch.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
