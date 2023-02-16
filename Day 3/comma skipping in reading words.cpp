
// Word reading with the help of space. Condition: if , have alphabet before itself then count word and if , have space before itself then do not count word.
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

bool isChar(char character){
    if((character >= 'a' && character <= 'z') || character >= 'A' && character <= 'Z' ){
        return true;
    }else {
        return false;
    }
}

std::string trim_sentence(std::string sentence) {
    auto start = sentence.begin();
    auto end = sentence.end() - 1;

    // Trim whitespace from the start of the sentence
    while (start < end && std::isspace(*start) || isChar(*start) == false ) {
        start++;
    }

    // Trim whitespace from the end of the sentence
    while (end > start && std::isspace(*end) ||  isChar(*end) == false) {
        end--;
    }
    // Return the trimmed sentence
    return std::string(start, end + 1);
}

void countWords(string sentence){
    string trimmedOne = trim_sentence(sentence); // for trim,, unable to find the method for it in cpp.
    int count = 0;
    for(int index = 0; index < trimmedOne.length(); index++){
        if(trimmedOne[index] == ',' && trimmedOne[index - 1] == ' '){ // Decrease the count if it finds such condition and increase the count for all characters.
            count--;
        }
        else if( (trimmedOne[index-1] != ' ')  &&( trimmedOne[index] == ' ' || index == trimmedOne.length() - 1)) {
            count++;
        }
    }
    cout<<"Words are "<<count<<endl;
}


int main(){
    string word = "HI, I , am  developer";
    countWords(word);
    
    return 0;
}