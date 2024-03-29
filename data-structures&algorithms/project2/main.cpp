#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
#include <string>
#include <cstdlib>
#include "bst.h"
#include "rbt.h"
using namespace std;

int main(int argc, char* argv[]){

        if(argc != 3){
                cout << "Usage: " << argv[0] << " <file_name1> "<< "<file_name2> "<<endl;
                return 1;
        }

        // ask user which file is the trees and which is the delete node file
        int tree_file_num;
        int delete_node_file_num;

        do{
                cout << "Which file is the tree data file?" << endl;
                cout << "If its the 1st file, enter 1. If its the 2nd file, enter 2." << endl;
                cin >> tree_file_num;
        }while((tree_file_num != 1) && (tree_file_num != 2));

        if(tree_file_num == 1){
                delete_node_file_num = 2;
        }
        else{
                delete_node_file_num = 1;
        }

        /**************************************************************************/
        // file pointer
        ifstream tree_file;

        // opens the csv file
        tree_file.open(argv[tree_file_num]);

        // check whether the input file can be open successfully or not
        if(!tree_file.good()){
                cout << "Warning: cannot open file named " << argv[tree_file_num] << "!" << endl;
                return 2;
        }

        // declare a variable to store the data from csv #1
        queue<int> data;

        string line= "";

        //import data from csv into 'data'
        // while its not the end of file
        while(getline(tree_file, line)){
                int number;
                string tempString = "";
                stringstream inputString(line);

                // read each number
                getline(inputString, tempString);
                number = atoi(tempString.c_str());

                // insert number into data
                data.push(number);

        }
        tree_file.close();
        /**************************************************************************/
        // file pointer
        ifstream delete_node_file;

        // opens the csv file
        delete_node_file.open(argv[delete_node_file_num]);

        // check whether the input file can be open successfully or not
        if(!delete_node_file.good()){
                cout << "Warning: cannot open file named " << argv[delete_node_file_num] << "!" << endl;
                return 2;
        }

        // declare a variable to store the data from csv #2
        queue<int> delete_nodes;

        line= "";

        //import data from csv into 'data'
        // while its not the end of file
        while(getline(delete_node_file, line)){
                int number;
                string tempString = "";
                stringstream inputString(line);

                // read each number
                getline(inputString, tempString);
                number = atoi(tempString.c_str());

                // insert row into data
                delete_nodes.push(number);

        }
        delete_node_file.close();

        // create a tree (binary or red-black?)
        string input;
        while((input != "BST") && (input != "RBT")){
                cout << "Would you like to implement a Binary Search Tree (BST) or a Red-Black Tree (RBT)?" << endl;
                cin >> input;
        }

        if(input == "BST"){
                // create a BST with the queue "data"
                //BST tree.BST();
                BST tree;

                node *Root = NULL;
                while(!data.empty()){
                        tree.tree_insert(Root, data.front());
                        data.pop();
                }

                // print tree before deletion in "in-order traversal"
                cout << "Binary Search Tree before Deletions of Nodes (In-order Traversal)" << endl;
                tree.tree_walk(Root);
                cout << endl;

                // delete node (values are in the queue "delete_nodes"
                while(!delete_nodes.empty()){
                        tree.tree_delete(Root, delete_nodes.front());
                        delete_nodes.pop();
                }

                // print tree after deletion in "in-order traversal"
                cout << "Binary Search Tree after Deletions of Nodes (In-order Traversal)" << endl;
                tree.tree_walk(Root);
                cout << endl;

        }
        else{
                // create a RBT with the queue "data"
                RBT tree;
                node *Root = NULL;
                while(!data.empty()){
                        tree.RB_insert(Root, data.front());
                        data.pop();
                }

                // print tree before deletion in "in-order traversal"
                cout << "Red-Black Tree before Deletions of Nodes (In-order Traversal)" << endl;
                tree.RB_inOrder(Root);
                cout << endl;

                // delete node (values are in the queue "delete_nodes"
                while(!delete_nodes.empty()){
                        tree.RB_delete(Root, delete_nodes.front());
                        delete_nodes.pop();
                }

                // print tree after deletion in "in-order traversal"
                cout << "Red-Black Tree after Deletions of Nodes (In-order Traversal)" << endl;
                tree.RB_inOrder(Root);
                cout << endl;
        }


        return 0;
}
