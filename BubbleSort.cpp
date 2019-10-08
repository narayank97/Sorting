#include <iostream>

using namespace std;

int main(){
    int myArr[7] = {2,5,3,8,4,1,9};
    int firstPairLimit = 6;
    int secondPairLimit = 7; 
    
    while(firstPairLimit != 0){
        int j = 1;
        for(int i = 0; i < firstPairLimit; i++){
            if(myArr[i] > myArr[j]){
                int temp = myArr[j];
                myArr[j] = myArr[i];
                myArr[i] = temp;
            }
            j++;
        }
        firstPairLimit--;
    }
    for(int i = 0; i < 7; i++){
        cout << myArr[i] << "\t";
    }

    return 0;
}