#include "stack.h"

int main(){

    pushArray("Matriks dan Vektor");
    displayArray();
    pushArray("Struktur Data");
    displayArray();
    pushArray("Pemrograman Mobile");
    displayArray();
    pushArray("Sistem Basis Data");
    displayArray();
    pushArray("Web Programming");
    displayArray();

    cout << "Apakah data full ? " << isFull() << "\n";
    cout << "Apakah data kosong ? " << isEmpty() << "\n";
    
    popArray();
    displayArray();


    cout << "Apakah data full ? " << isFull() << "\n";
    cout << "Apakah data kosong ? " << isEmpty() << "\n";

    peekArray(3);

    cout << "Banyak data : " << countArray() << "\n";

    changeArray("Etika Profesi", 2);
    displayArray();

    destroyArray();
    displayArray();
    cout << "Apakah data full ? " << isFull() << "\n";
    cout << "Apakah data kosong ? " << isEmpty() << "\n";

    // int choose;
    // int pos;
    // string element;

    // while (1){
    //     cout << "SIMPLE STACK PROGRAM\n";
    //     cout << "1. Push\n";
    //     cout << "2. Pop\n";
    //     cout << "3. Display\n";
    //     cout << "4. isFull\n";
    //     cout << "5. isEmpty\n";
    //     cout << "6. Change\n";
    //     cout << "7. Peek\n";
    //     cout << "8. Wipe Data\n";
    //     cout << "Select the menu\n";
    //     cin >> choose;

    //     if (choose == 1){
    //         cout << "Masukkan data :";
    //         cin >> element;
    //         pushArray(element);
    //     } else if (choose == 2){
    //         popArray();
    //     } else if (choose == 3){
    //         displayArray();
    //     } else if (choose == 4){
    //         isFull();
    //     } else if (choose == 5){
    //         isEmpty();
    //     } else if (choose == 6){
    //         cout << "Pilih data keberapa yang diganti : ";
    //         cin >> pos;
    //         cout << "Masukkan data pengganti : ";
    //         cin >> element;
    //         changeArray(element, pos);
    //     } else if (choose == 7){
    //         cout << "Masukkan posisi data yang ingin dilihat : ";
    //         cin >> pos;
    //         peekArray(pos);
    //     } else if (choose == 8){
    //         destroyArray();
    //     } else {
    //         return 0;
    //     }
    // }
    
    return 0;
}