#include <iostream>
using namespace std;
bool isprime(int n){
    if (n == 1 || n == 0)
        return false;
    for(int j=2;j<n;j++){
            if(n%j==0){
                return false;
            }
            }
            return true;
}
int main(){
    int num1=10;
    for(int i=5;i<=10;i++){
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    
        }