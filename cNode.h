#include<iostream>
template <typename T>
class cBinarySearchTree;
 
template <typename T>
class cNode{
friend class cBinarySearchTree<T>;
public:
    cNode(){ key=NULL; left = right =NULL;}
    cNode(T t){key = t; left = right = 0;}
private:
    cNode<T>* left;
    cNode<T>* right;
    T key;
};
