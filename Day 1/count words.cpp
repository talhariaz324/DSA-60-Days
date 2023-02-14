


#include <iostream>
#include<string>
// #include <boost/algorithm/string.hpp>

// using namespace boost::algorithm;
using namespace std;    
// Count the number of words in the given sentence
// I am beginner
void countWords(string sentence){
    // int trimmedOne = trim(sentence); // for trim,, unable to find the method for it in cpp.
    int count = 0;
    for(int index = 0; index < sentence.length(); index++){
        if(sentence[index] == ' ' || index == sentence.length() - 1) {
            count++;
        }
    }
    cout<<"Words are "<<count<<endl;
}


int main(){
    string word = "I am developer";
    countWords(word);
    
    return 0;
}