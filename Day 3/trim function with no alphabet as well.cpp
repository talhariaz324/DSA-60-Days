#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

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


int main(){
    string sentence = "  ,12I  am 12 Engineer ,12  ";
  cout<<  trim_sentence(sentence)<<endl;
}