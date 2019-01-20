/*
 https://www.testdome.com/questions/original/21521
 Write a function that, efficiently with respect to time used, checks if a given binary search tree contains a given value.
 
 For example, for the following tree:
 
 n1 (Value: 1, Left: null, Right: null)
 n2 (Value: 2, Left: n1, Right: n3)
 n3 (Value: 3, Left: null, Right: null)
 Call to contains(n2, 3) should return true since a tree with root at n2 contains number 3.
 */
#include <stdexcept>
#include <string>
#include <iostream>
#include <typeinfo>
using namespace std;
class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }
    
    int getValue() const
    {
        return value;
    }
    
    Node* getLeft() const
    {
        return left;
    }
    
    Node* getRight() const
    {
        return right;
    }
    
private:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value)
    {
        if(root.getValue()==value)
            return true;
        else if (root.getValue()>value){
            if(root.getLeft()!= NULL)
                return(contains(*root.getLeft(), value));}
        else{
            if(root.getRight()!= NULL)
            return(contains(*root.getRight(), value));}
        return false;
    }
};

#ifndef RunTests
int main()
{
    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);
    
    std::cout << BinarySearchTree::contains(n2, 3);
}
#endif
