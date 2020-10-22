//
//  main.cpp
//  CLCV
//
//  Created by Bruno Köppel on 10/21/20.
//

#include <iostream>

using namespace std;

// Menu essential functions
int askUserIntegerInput(string prompt);
bool commandProcessor();
void pringCommandMenu();
void modifyArrayMenu();

int arraySize;
int *mainArray = new int[arraySize];
bool isMainArrayInitialized = false;

int main(int argc, const char * argv[]) {
    
    pringCommandMenu();
    bool machineState = 0;
    while (machineState) {
        machineState = commandProcessor();
    }
    
    return 0;
}


// Menu essential functions
int askUserIntegerInput(string prompt) {
    int command = 0;
    cout << prompt;
    cin >> command;
    return command;
}

bool commandProcessor() {
    int command = askUserIntegerInput("\nCLCV~$ ");
    
    switch (command) {
        case 0:
            modifyArrayMenu();
            break;
    }
    return true;
}

void pringCommandMenu() {
    cout << "CLCV (C Language Code Vault)" << endl;
    cout << "Enter a number to select your command." << endl;
    cout << "0: print/modify array menu." << endl;
    cout << "1: Selection Sort" << endl;
}

void modifyArrayMenu() {
    if (isMainArrayInitialized) {
        cout << "Array not initialized, Input data necessary:" << endl;
        
    }
    else {
        for (int index = 0; index < mainArray.size(); index++)
    }
    
    delete []mainArray;
    cout << "New size for the array:";
    cin >> arraySize;
    cout << "Now, for the range of the numebers:" << endl;
}
