#include <iostream>

using namespace std;

int main(){
    int myList[6] = {2,8,5,3,9,4};
    int currNum = 0;
    int currPlacement = 0;

    for(int i = 0; i < 6; i++){
        cout << myList[i] << "\t";
    }
    cout << endl;

    for(int i = 1; i < 6; i++){
        currNum = myList[i];
        int j = i-1;
        while(currNum < myList[j] && j >= 0){
            myList[j+1] = myList[j];
            j--;
        }
        myList[j+1] = currNum;
    }

    for(int i = 0; i < 6; i++){
        cout << myList[i] << "\t";
    }

    return 0;
}