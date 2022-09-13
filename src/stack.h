#include <iostream>

using namespace std;

int maks = 5;
string arrayBuku[5];
int top = 0;

bool isFull(){
    if (top == maks){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if (top == 0){
        return true;
    } else {
        return false;
    }
}

void pushArray(string data){
    if (isFull()){
        cout << "Data penuh\n";
    } else{
        arrayBuku[top] = data;
        top++;
    }
}

void popArray(){
    if (isEmpty()){
        cout << "Data kosong!!\n";
    } else {
        arrayBuku[top-1] = "";
        top--;
    }
}

void displayArray(){
    if (isEmpty()){
        cout << "Data kosong!!\n";
    } else {
        cout << "\n";
        cout << "Data stack array : \n";
        for (int i = maks - 1; i >= 0; i--){
            if (arrayBuku[i] != ""){
                cout << "Data : " << arrayBuku[i] << "\n";
            }
        }
        cout << "\n";
    }
}

void peekArray(int position){
    if (isEmpty()){
        cout << "Data kosong!!\n";
    } else {
        int index = top;
        for (int i = 0; i < position; i++){
            index--;
        }
        cout << "Data posisi ke-" << position << " : " << arrayBuku[index] << "\n";
    }
}

int countArray(){
    if (isEmpty()){
        return 0;
    } else {
        return top;
    }
}

void changeArray(string data, int position){
    if (isEmpty()){
        cout << "Data kosong!!\n";
    } else {
        int index = top;
        for (int i = 0; i < position; i++){
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArray(){
    for (int i = 0; i < top; i++){
        arrayBuku[i] = "";
    }
    top = 0;
}
