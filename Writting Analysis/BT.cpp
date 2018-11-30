//
//  BT.cpp
//  Writting Analysis
//
//  Created by Clara Fairbanks on 11/30/18.
//  Copyright © 2018 Clara Fairbanks. All rights reserved.
//

#include "BT.hpp"
#include <iostream>
using namespace std;


//default constructor
template <class T>
BT<T>::BT() {
    root = nullptr;
}

//destructor calls recursive destroyTree function with the root node
template <class T>
BT<T>::~BT() {
    destroyT( root );
}

//copy constructor, calls recursive copyTree function
// if root is nonempty
template <class T>
BT<T>::BT( const BT &p ) {
    
    node<T>* copy = nullptr;
    copyTree( root, copy );
    
}

//destroyTree is a postorder recursive function deletes nodes
// in the tree untill empty
template <class T>
void BT<T>::destroyTree( node<T> *&p ) {
    
    if( p!= nullptr ){
        
        destroyT( p->left );
        destroyT( p->right );
        delete p;
        p = nullptr;
    }
}

//CopyTree is a preorder recursive function copies nodes and
// passes the value by reference to the new tree
template <class T>
void BT<T>::copyTree( node<T> *p, node<T> *&np ) {
    
    if( p != nullptr ){
        
        np->data = p->data;
        copyTree( p->left, np->left );
        copyTree( p->right, np->right );
    }
}

//printTree is an inorder recursive function to display the tree
// in ascending order
template <class T>
void printTree(node<T> *root) {
    
    if ( !root ) return;
    print( root->left );
    cout<< root->data <<' ';
    print( root->right );
}
