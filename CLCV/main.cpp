//
//  main.cpp
//  CLCV
//
//  Created by Bruno Köppel on 10/21/20.
//

#include <iostream>
#include <iterator>

using namespace std;

// Menu essential functions
int askUserIntegerInput(string prompt);
void pringCommandMenu();
void printArray(int array[]);
bool commandProcessor(int array[],int arraySize);
void modifyArrayMenu(int array[],int arraySize);


bool isMainArrayInitialized = false;

int main(int argc, const char * argv[]) {
    int arraySize;
    int *mainArray = new int[arraySize];
    
    
    pringCommandMenu();
    bool machineState = 0;
    while (machineState) {
        machineState = commandProcessor(mainArray, arraySize);
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

void printArray(int array[], int arraySize){
    cout << "[";
    for (int index = 0; index < arraySize; index++){
        if (index != 0){
            cout << "," << array[index];
        }
        else {
            cout << array[index];
        }
    }
    cout << "]" << endl;
}

void pringCommandMenu() {
    cout << "CLCV (C Language Code Vault)" << endl;
    cout << "Enter a number to select your command." << endl;
    cout << "0: print/modify array menu." << endl;
    cout << "1: Selection Sort" << endl;
}

bool commandProcessor(int array[],int arraySize) {
    int command = askUserIntegerInput("\nCLCV~$ ");
    
    switch (command) {
        case 0:
            modifyArrayMenu(array, arraySize);
            break;
    }
    return true;
}



void modifyArrayMenu(int array[],int arraySize) {
    if (isMainArrayInitialized) {
        cout << "Array not initialized, Input data necessary:" << endl;
        
    }
    else {
        
    }
    
    delete []array;
    cout << "New size for the array:";
    cin >> arraySize;
    cout << "Now, for the range of the numebers:" << endl;
}
