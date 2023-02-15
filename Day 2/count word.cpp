


#include <iostream>
#include<string>
// #include <boost/algorithm/string.hpp>

// using namespace boost::algorithm;
using namespace std;    
// Count the number of words in the given sentence
// But here is edge case.
// Edge case is, we have to count the word only once, no matter spaces are twice.
// I am beginner

// Method no: 1

// void countWords(string sentence){
//     // int trimmedOne = trim(sentence); // for trim,, unable to find the method for it in cpp.
//     int count = 0;
//     for(int index = 0; index < sentence.length(); index++){
//         if((sentence[index-1] != ' ') &&( sentence[index] == ' ' || index == sentence.length() - 1)) {
//             count++;
//         }
//     }
//     cout<<"Words are "<<count<<endl;
// }


// Method no: 2
// Now do by wasPreviousAlphabet

bool wasPreviousAlphabet = true;
bool isChar(char character){
    if((character >= 'a' && character <= 'z') || character >= 'A' && character <= 'Z' ){
        return true;
    }else {
        return false;
    }
}
void countWords(string sentence){
    // int trimmedOne = trim(sentence); // for trim,, unable to find the method for it in cpp.
    int count = 0;
    for(int index = 0; index < sentence.length(); index++){
         wasPreviousAlphabet = isChar(sentence[index-1]);
        
        if((wasPreviousAlphabet) &&( sentence[index] == ' ' || index == sentence.length() - 1)) {
            count++;
        }
    }
    cout<<"Words are "<<count<<endl;
}



int main(){
    string word = "I   am  developer ";
    countWords(word);
    
    return 0;
}