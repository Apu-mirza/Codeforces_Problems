#include<iostream>
using namespace std;
 
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if(x <= y){
            cout<<x<<" "<<y<<endl;
        }else cout<<y<<" "<<x<<endl;
    }
}
