/*
 A palindrome is a word that reads the same backward or forward.
 
 Write a function that checks if a given word is a palindrome. Character case should be ignored.
 
 For example, isPalindrome("Deleveled") should return true as character case should be ignored, resulting in "deleveled", which is a palindrome since it reads the same backward and forward.
 */
#include <string>
#include <stdexcept>
#include <iostream>
#include <cctype>

using namespace std;

class Palindrome
{
public:
    static bool isPalindrome(const std::string& word)
    {
        std::string t=word;
        bool alllower = true;
        
        for(int j=0; j<word.length(); j++){
            if(isupper(word[j]))
                t[j]=tolower(word[j]);
            else
                t[j]=word[j];}   //to all lower case
        
        for(int i=0; i<t.length(); i++){
            if(t[i] != t[t.length()-1-i])
                return false; }
        return true;
    }
};

#ifndef RunTests
int main()
{
    std::cout << Palindrome::isPalindrome("Deleveled");
}
#endif
