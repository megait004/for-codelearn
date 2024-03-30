#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i<=n&&n%i==0){
			cout << i << endl;
		}
	}
	return 0;
}