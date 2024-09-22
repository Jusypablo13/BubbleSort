#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &vec){
    int n = vec.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
            }
        }
    }
}

void imprimir(vector<int> vec){
    for(int num: vec){
        cout << num << " ";
    }
}

int main(){
    vector<int> vec = {85, 70, 95, 60, 90};
    bubbleSort(vec);
    imprimir(vec);
}

// Time Complexity: O(n^2)