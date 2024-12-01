#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream inFile("codes.txt");
    string code;

    if (!inFile.open()) {
        cout << "file not opened." << endl;
        return 1;
    }







    return 0;
}