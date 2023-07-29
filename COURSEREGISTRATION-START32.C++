#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int s= (z+x);
        if(s<=y){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
	// your code goes here
	return 0;
}
