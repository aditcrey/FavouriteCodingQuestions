#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	int n;
	
	while(t--){
	    cin>>n;
	    
	    if(n&(n<<1)) printf("0\n");
	    else printf("1\n");
	    
	    
	    
	}
	return 0;
}
