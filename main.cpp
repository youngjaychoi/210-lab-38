#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream inFile("codes.txt");
    string code;
    int choice;

    if (!inFile.open()) {
        cout << "file not opened." << endl;
        return 1;
    }

    while (inFile >> code) {
        tree.insertNode(code);
    }
    






    inFile.close();

    return 0;
}