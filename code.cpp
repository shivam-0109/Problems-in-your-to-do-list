#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int counter=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=1000){
	            counter++;
	        }
	    }
	    cout<<counter<<endl;
	}
	return 0;
}
