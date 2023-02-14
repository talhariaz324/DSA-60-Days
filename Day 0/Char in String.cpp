// Online C compiler to run C program online
#include <iostream>
#include<string>
#include <cmath>
using namespace std;
// Find the particular char in the string
void getCharFromString(string word, char toFind){
    for(int index = 0; index < word.size(); index++)
    {
        if(word[index] == toFind){
            cout<<"Your word found at "<<index<<endl;
            // return; stop after showing the first discovery else show all findings. we can store them in array and also show them,
        }
    }
}


int main(){
    string word = "wordoao";
    char toFind = 'o';
    getCharFromString(word, toFind);
    
    return 0;
}