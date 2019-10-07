#include <iostream>

using namespace std;

void swap(int *Arr, int first, int second);
void quicksort(int *Arr, int left, int right);
int partition(int *Arr, int left, int right);

int main(){
    int myArray[7] = {4,2,5,10,1,3,6};
    quicksort(myArray,0,6);

    for(int i = 0; i < 7; i++){
        cout << myArray[i] << "\t";
    }

    return 0;
}

void quicksort(int *Arr, int left, int right){
    if(left < right){

        int pivotFinalPos = partition(Arr,left,right);

        quicksort(Arr, left, pivotFinalPos-1);

        quicksort(Arr, pivotFinalPos+1 ,right);

    }
}

void swap(int *Arr, int first, int second){
    int temp = Arr[first];
    Arr[first] = Arr[second];
    Arr[second] = temp;
}

int partition(int *Arr, int left, int right){
    
    int pivot = Arr[right];
    int i = 0;
    int j = right-1;
    int itemFromRight = Arr[j];
    int itemFromLeft = Arr[i];
    for(i = 0; i < right; i+=0){
        itemFromLeft = Arr[i];
        itemFromRight = Arr[j];

        if(itemFromLeft < pivot){
            i++;
        }
        if(itemFromRight > pivot){
            j--;
        }
        if(itemFromLeft > pivot && itemFromRight < pivot){
            swap(Arr,i,j);
        }
        if(i > j){
            swap(Arr,right,i);
            break;
        }
    }
    return i;
}