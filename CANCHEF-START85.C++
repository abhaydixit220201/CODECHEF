#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int s=(y*2);
        int p=(x*15);
        if(p>=s){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
	// your code goes here
	return 0;
}
