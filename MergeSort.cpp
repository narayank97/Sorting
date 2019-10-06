#include <iostream>

using namespace std;

void mergeSort(int *myList, int length);
void merge(int *myList, int *L, int *R, int length);


int main(){
    int myArray[7] = {99,36,55,2,1,27,92};

    mergeSort(myArray,7);

    for(int i = 0; i < 7; i++){
        cout << myArray[i]<<"\t";
    }
    cout << endl << endl;

    return 0;
}

void mergeSort(int *myList, int length){
    int mid = 0;
    int *L , *R;
    mid = length/2;

    if(length < 2){
        // single elements now
        return;
    }
    else{
        // create new arrays for LHS and RHS when splitting
        L = new int[mid];
        R = new int[length-mid];

        // Split first half of list to L
        for(int i = 0; i < mid; i++){
            L[i] = myList[i];
        }

        // Split second half of list to R
        for(int i = mid; i < length; i++){
            R[i-mid] = myList[i];
        }

        mergeSort(L,mid);
        mergeSort(R,length-mid);
        merge(myList,L,R,length);

    }
}

void merge(int *myList, int *L, int *R, int length){
    int i = 0; // goes through main array
    int j = 0; // increments throught LHS
    int k = 0; // increments through RHS
    int mid = length/2;

    for(int z = 0; z < mid; z++){
        cout << L[z] << endl;
    }

    for(int z = 0; z < length - mid; z++){
        cout << R[z] << endl;
    }
    
    // merges LHS and RHS to myList
    for(i = 0; i < length; i++){
        if(L[j] < R[k] && j < mid && k < length-mid){
            cout << "LHS: " << L[j] << endl;
            myList[i] = L[j];
            j++;
        }
        else{
            cout << "RHS: " << R[k] << endl;
            myList[i] = R[k];
            k++;
        }
    }
    while(j < mid){
        cout << "LHS: " << L[j] << endl;
        myList[i] = L[j];
        i++;
        j++;
    }
    while(k < length - mid){
        cout << "RHS: " << L[j] << endl;
        myList[i] = R[k];
        i++;
        k++;
    }

}