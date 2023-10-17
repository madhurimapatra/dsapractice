#include<iostream>
using namespace std;
int countDigits(int n){
	 int temp=n, ans=0;
    while(n>0){
        int lastDigit= n%10;
        n/=10;
        if(lastDigit>0 && temp%lastDigit==0){
            ans++;
        }
    }
    return ans;	
}