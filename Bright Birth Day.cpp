#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int c = 0;
       if(s.find('r')&&s.find('e')&&s.find('d')) {
           c+=1;
           s[s.find('r')]='1';
           s[s.find('e')]='1';
           s[s.find('d')]='1';
           
       }
       if(s.find('b')&&s.find('l')&&s.find('u')&&s.find('e')) {
           c+=1;
           s[s.find('b')]='1';
           s[s.find('l')]='1';
           s[s.find('u')]='1';
           s[s.find('e')]='1';
           
       }
        if(s.find('g')&&s.find('r')&&s.find('e')&&s.find('e')&&s.find('n')) {
           c+=1;
           s[s.find('g')]='1';
           s[s.find('r')]='1';
           s[s.find('e')]='1';
           s[s.find('e')]='1';
           s[s.find('n')]='1';
           
           
       }
       if(s.find('p')&&s.find('u')&&s.find('r')&&s.find('p')&&s.find('l')&&s.find('e')) {
           c+=1;
           s[s.find('p')]='1';
           s[s.find('u')]='1';
           s[s.find('r')]='1';
           s[s.find('p')]='1';
           s[s.find('l')]='1';
           s[s.find('e')]='1';
           
           
       }
        if(s.find('y')&&s.find('e')&&s.find('l')&&s.find('l')&&s.find('o')&&s.find('w')) {
           c+=1;
           s[s.find('y')]='1';
           s[s.find('e')]='1';
           s[s.find('l')]='1';
           s[s.find('l')]='1';
           s[s.find('o')]='1';
           s[s.find('w')]='1';
           
           
       }
        if(s.find('o')&&s.find('r')&&s.find('a')&&s.find('n')&&s.find('g')&&s.find('e')) {
           c+=1;
           s[s.find('o')]='1';
           s[s.find('r')]='1';
           s[s.find('a')]='1';
           s[s.find('n')]='1';
           s[s.find('g')]='1';
           s[s.find('e')]='1';
           
           
       }
       
        if(s.find('b')&&s.find('r')&&s.find('o')&&s.find('w')&&s.find('n')) {
           c+=1;
           s[s.find('b')]='1';
           s[s.find('r')]='1';
           s[s.find('o')]='1';
           s[s.find('w')]='1';
           s[s.find('n')]='1';
       }
       
       if(s.find('s')&&s.find('i')&&s.find('l')&&s.find('v')&&s.find('e')&&s.find('r')) {
           c+=1;
           s[s.find('s')]='1';
           s[s.find('i')]='1';
           s[s.find('l')]='1';
           s[s.find('v')]='1';
           s[s.find('e')]='1';
           s[s.find('r')]='1';
           
           
       }
         if(s.find('w')&&s.find('i')&&s.find('h')&&s.find('t')&&s.find('e')) {
           c+=1;
           s[s.find('w')]='1';
           s[s.find('i')]='1';
           s[s.find('h')]='1';
           s[s.find('t')]='1';
           s[s.find('e')]='1';
           
           
       }
       
     if(s.find('b')&&s.find('l')&&s.find('a')&&s.find('c')&&s.find('k')) {
           c+=1;
           s[s.find('b')]='1';
           s[s.find('l')]='1';
           s[s.find('a')]='1';
           s[s.find('c')]='1';
           s[s.find('k')]='1';
           
           
       } 
        if(s.find('p')&&s.find('i')&&s.find('n')&&s.find('k')) {
           c+=1;
           s[s.find('p')]='1';
           s[s.find('i')]='1';
           s[s.find('n')]='1';
           s[s.find('k')]='1';
           
           
       } 
        if(s.find('g')&&s.find('r')&&s.find('e')&&s.find('y')) {
           c+=1;
           s[s.find('g')]='1';
           s[s.find('r')]='1';
           s[s.find('e')]='1';
           s[s.find('y')]='1';
           
           
       } 
       if(s.find('c')&&s.find('y')&&s.find('a')&&s.find('n')) {
           c+=1;
           s[s.find('c')]='1';
           s[s.find('y')]='1';
           s[s.find('a')]='1';
           s[s.find('n')]='1';
           
           
       } 
       if(s.find('g')&&s.find('o')&&s.find('l')&&s.find('d')) {
           c+=1;
           s[s.find('g')]='1';
           s[s.find('o')]='1';
           s[s.find('l')]='1';       
           s[s.find('d')]='1';
           
       } 
        if(s.find('a')&&s.find('s')&&s.find('h')) {
           c+=1;
           s[s.find('a')]='1';
           s[s.find('s')]='1';
           s[s.find('h')]='1';
           
       } 
        cout<<c<<endl;
       }
        
    return 0;
}
