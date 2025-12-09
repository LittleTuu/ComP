#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    
    int even = 0, odd = 0;
    while(N!=0){
        if(N%2==0){
	    even++;
	    }else{
	        odd++;}
    
    cout << "Enter an integer: ";
    cin >> N;
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
	
	return 0;
}
