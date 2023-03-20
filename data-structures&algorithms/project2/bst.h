/*
 * File: bst.h
 * Course: CS 315 - 001
 * Project: Problem Set 2
 * Purpose: Declaration of BST class
 *      - Includes functions of a Binary Search Tree
 */

#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

struct node{
        int key;
        node *left;
        node *right;
        node *parent;
};
typedef struct node node;

struct node newNode(int value){
        node *temp = new node;
        temp->key = value;
        temp->left = temp->right = NULL;
        temp->parent = NULL;
        return temp;
}

class BST
{
        public:
                // default constructor
                BST();

                // insert value into tree
                void tree_insert(node* &Root, int value);

                // delete a value from trree
                void tree_delete(node* &Root, int value);

                void transplant(node* &Root, node *num1, node *num2);

                // find min of node pos
                node* tree_min(node *pos);

                // find max of node pos
                node* tree_man(node *pos);

                void tree_walk() const;
        private:
                // declare private variables for binary search tree
                node *root;

};
#endif /* BST_H */
