#include<iostream>
#include<algorithm>

using namespace std;

template <typename T>
void QSort(T* arr, int l,int r) {
    if (!arr) return;
    int i = l,j = r;
    T key = arr[(l+r)/2];
    while (i <= j) {
        while (arr[i] < key) i++;
        while (arr[j] > key) j--;
        if (i <= j) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if (j > l) QSort(arr,l,j);
    if (i < r) QSort(arr,i,r); 
}

int main()
{
    char arr[] = "geekforgeeks";
    int sz = sizeof(arr)/sizeof(arr[0]) - 1;
    QSort(arr,0,sz-1);
    cout << arr << "lol" << " Hello World";
    return 0;
}
