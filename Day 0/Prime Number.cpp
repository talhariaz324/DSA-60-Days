/* 
1- Count Prime
*/

// Check either the number is prime or not


#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int targetNumber){
    int count = 0;
    for(int index = 2; index <= sqrt(targetNumber); index++){
        if(targetNumber % index == 0){
            count++;
        }
    }
    if(count > 0){
        return -1;
    }else{
        return 1;
    }
}
int main() {
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    cout<<isPrime(number)<<endl;
    
    return 0;
}


