//
//  BT.hpp
//  Writting Analysis
//
//  Created by Clara Fairbanks on 11/30/18.
//  Copyright © 2018 Clara Fairbanks. All rights reserved.
//

#ifndef BT_hpp
#define BT_hpp

#include <stdio.h>

template <typename T>
struct node{
    T data;
    node *left;
    node *right;
    int count;
};

template <typename T>
class BT {
    
protected:
    node<T> *root;
    BT();
    ~BT();
    BT( const BT & );
    void operator = ( const BT & );
public:
    void destroyT( node<T>*& );
    void copyTree( node<T>*, node<T>*& );
    void print( node<T>* );
    
};

#endif /* BT_hpp */
