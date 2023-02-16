#include <iostream>
#include<string>
#include<algorithm>


using namespace std;
 bool isAnagram(string s, string t) {

    int w1length = s.length();
    int w2length = t.length();
    bool result;

    if(w1length != w2length){
        return false;
    }

   sort(s.begin(), s.end());
  sort(t.begin(), t.end());
   for (int i = 0; i < s.length(); i++)
        if (s[i] != t[i])
            return false;

    return true;
    }

    int main() {
        
    }