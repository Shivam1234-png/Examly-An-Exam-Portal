#include<bits/stdc++.h>
using namespace std;
void removeAdjacent(string s,stack<char> st){
    for(int i=0;i<s.size();i++){
        if(st.empty()|| st.top()!=s[i]){
            st.push(s[i]);
        }
        else
            st.pop();
    }
    string ans="";
    if(st.empty())
        cout<<"Empty Stack"<<endl;
    else{
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        cout<<ans<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    stack<char> st;
    removeAdjacent(s,st);
    return 0;
}