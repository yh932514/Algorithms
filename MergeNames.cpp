/*
https://www.testdome.com/questions/original/21511
Implement the unique_names method. When passed two vectors of names, it will return a vector containing the names that appear in either or both vectors. 
The returned vector should have no duplicates.
For example, calling MergeNames::unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"}) 
should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
*/

#include <iostream>
#include <vector>
using namespace std;
    
class MergeNames
{
public:
    static std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
    {
        std::vector<std::string> names3; 
        bool unique; 
        
        for(int z=0; z<names1.size(); z++){
            if(z==0)
                names3.push_back(names1[z]);
            else{
                for(int a=z-1; a>=0; a--){
                    unique = true; 
                    if(names3[a] == names1[z])
                        {unique = false; 
                        break;}}
                    if(unique)
                    names3.push_back(names1[z]);}
            } //check whether each vector has duplicate names
        
        for(int i=0; i<names2.size(); i++){
            unique =  true;
            for (int j=0; j<names3.size(); j++){
                if(names2[i] == names3[j]) 
                    {unique = false;
                    break;}
                    }  //check names2[i] is unique
            if(unique)
                names3.push_back(names2[i]);
            }
        return names3;
    }
};

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = MergeNames::unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
