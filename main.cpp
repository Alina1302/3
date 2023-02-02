#include <iostream>
#include "../LIBRARY/array_functions.h"
using namespace std;
int Copy_elements_in_range (int start, int finish, const int arr[]){
    int mas[finish-start+1];
    for (int i= start-1, j=0; i<=finish-1;j++, i++){
        mas[j]=arr[i];
    }
    PrintArray(mas, finish-start+1);
}
int Del_element_in_range (int start, int finish, int arr[], int size){
    int mas [size];
    mas [size]=arr[size];
    for (int i = start-1, j=finish; i<=finish-1; i++, j++){
        mas[i]=arr[j];
    }
    PrintArray(mas, size-finish+start-1);
}
int main() {
    string copy;
    const int SIZE = 20;
    int mas [SIZE];
    int first, last;
    RandomArray(mas, SIZE, -20, 20);
    PrintArray(mas, SIZE);
    cout <<endl<< "Do you want to copy -> 'copy' or delete -> 'delete' from array any elements?"<<endl;
    cin >> copy;
    cout << "Enter the range of elements, which you want "<<copy<<endl;
    cin >> first>>last;
    if (copy == "copy") {
        Copy_elements_in_range(first, last, mas);
    }else{
        Del_element_in_range(first, last, mas, SIZE);
    }

    return 0;
}
