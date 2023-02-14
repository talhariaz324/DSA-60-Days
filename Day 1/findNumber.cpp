// Online C compiler to run C program online
#include <iostream>
#include<string>

using namespace std;    

int findNumber(int arr[6], int numberToFind, int startRange, int endRange){
   for(int index = startRange; index <= endRange; index++){
       if(arr[index] == numberToFind){
            return 1;
       }
   }
   return -1;
}


int main(){
    int arr[6] = {0,1,2,3,4,5};
    int numberToFind = 5;
    int startRange = 2;
    int endRange = 5;
  cout<<findNumber(arr, numberToFind, startRange, endRange)<<endl;
    
    return 0;
}