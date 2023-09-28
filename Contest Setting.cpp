#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,b,y;
    double x;
    cin>>t;
    while(t--){
        cin>>b>>y;
       if(b<y) cout<<1<<endl;
       else {
       x = ((-(double)y+sqrt(y*y+4*b))/2.0);
       x=(x-(int)x>0.5)?x+1:x;
       cout<<pow(2,(int)x)<<endl;
       }
        
    }
    return 0;
}
