#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    ifstream inFile("codes.txt");
    string record;
    int choice;

    if (!inFile) {
        cout << "file not opened." << endl;
        return 1;
    }

    while (inFile >> record) {
        tree.insertNode(record);
    }
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Add a record\n";
        cout << "2. Delete a record\n";
        cout << "3. Search a record\n";
        cout << "4. Display records in-order\n";
        cout << "5. Display records pre-order\n";
        cout << "6. Display records post-order\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter a record to add: ";
                cin >> record;
                tree.insertNode(record);
                break;
            }
            case 2: {
                cout << "Enter a record to delete: ";
                cin >> record;
                tree.remove(record);
                break;
            }
            case 3: {
                cout << "Enter a record to search: ";
                cin >> record;
                if (tree.searchNode(record)) {
                    cout << "Record found" << endl;
                } else {
                    cout << "Record not found" << endl;
                }
                break;
            }
            case 4: {
                cout << "Records in-order:" << endl;
                tree.displayInOrder();
                break;
            }
            case 5: {
                cout << "Records pre-order:" << endl;
                tree.displayPreOrder();
                break;
            }
            case 6: {
                cout << "Records post-order:" << endl;
                tree.displayPostOrder();
                break;
            }
            case 7: {
                cout << "Exiting.." << endl;
                break;
            }
            default: {
                cout << "Invalid choice, enter again" << endl;
            }
        }
    } while (choice != 7);

    inFile.close();

    return 0;
}