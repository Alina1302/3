#pragma once
#include <iostream>
#include <ctime>

using namespace std;

void RandomArray (int arr [], int size, int start, int end){
    srand (std::time(0));
    for (int i=0; i<size; ++i){
        arr[i]=start+rand()%(end-start+1);
    }
}

void InputArray (int arr [], int size){
    for (int i=0; i<size; ++i){
        cout << "Enter "<<i+1<< " element";
        cin >> arr [i];
    }
}

void PrintArray (int arr [], int size){
    for (int i=0; i<size; ++i){
        cout << arr [i]<< "; ";
    }
}

int BinarySearch(int arr[], int size, int key){
    if (key < arr[0] || key > arr[size - 1]) {
        return -1;
    } else {
        int left = 0;
        int right = size - 1;
        int middle;
        do {
            middle = (left + right) / 2;
            if (key == arr[middle]) {
                return middle;
            } else if (key > arr[middle]) {
                left = middle + 1;
            } else if (key < arr[middle]) {
                right = middle - 1;
            }
        } while (left <= right);

        if (left > right) {
            return -1;
        }
    }
}

int FindMax (int arr[], int size){
    int max=arr[0];
    for (int i=0; i<size; ++i){
        if (arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}

int FindMin (int arr[], int size){
    int min = arr[0];
    for (int i=0; i< size; ++i){
        if (arr [i]< min){
            min = arr[i];
        }
    }
    return min;
}

void Sort(int arr[], int size){
    for (int j = 0; j < size - 1; ++j) {
        for (int i = 0; i < size - 1 - j; ++i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}