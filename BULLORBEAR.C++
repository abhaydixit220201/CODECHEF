#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"loss"<<endl;
        }else if(y>x){
            cout<<"profit"<<endl;
        }else{
            cout<<"nuetral"<<endl;
        }
    }
	// your code goes here
	return 0;
}
