#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{                                     
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main () {
    const int MAX_TAMANHO = 100;
    int vetor[MAX_TAMANHO];
     int tamanho;
    

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor[i];
    }

    cout << endl;

    if (tamanho <= 20) {
        cout << "Insertion Sort" << endl;
        insertionSort(vetor, tamanho);
    } 
    else if (tamanho <= 30) {
        cout << "Bubble Sort" << endl;
        bubbleSort(vetor, tamanho);
    } 
    else {
        cout << "Selection Sort" << endl;
        selectionSort(vetor, tamanho);
    }

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}
