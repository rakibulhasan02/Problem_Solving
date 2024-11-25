#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void tc(){
string s;
   cin>>s;
    char a=s[0],b=s[2];
    char op=s[1];
    if((op=='='&&a==b)||(op=='>'&&a>b)||(op=='<'&&a<b)) cout <<s<<endl;
    else{
        if(a>b) cout<<a<<'>'<<b<<endl;
        else if(a==b) cout<<a<<'='<<b<<endl;
        else cout<<a<<'<'<<b<<endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        tc();
    }
   
        

}
