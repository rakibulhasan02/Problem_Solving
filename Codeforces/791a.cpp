#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main(){
   ll a,b,score=0,limak=1,bob=1;
   cin>>a>>b;
   while (1)
   {
    limak=3*a;
    bob=2*b;
    if(limak<=bob){
        score++;
        
    }
    else break;
    a=limak;
    b=bob;
   }
   cout<<score+1<<endl;
   
}
