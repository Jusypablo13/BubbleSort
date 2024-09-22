#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void bubbleSort(vector<int> &calificaciones){
    int n = calificaciones.size(); 
    for(int i=0; i<n-1; i++){ // n-1 porque ya no es necesario comparar el último elemento
        for(int j=0; j<n-i-1; j++){ // n-i-1 porque ya no es necesario comparar los elementos que ya están ordenados
            if(calificaciones[j] > calificaciones[j+1]){ // Si el elemento actual es mayor al siguiente
                swap(calificaciones[j], calificaciones[j+1]); // Intercambiar los elementos
            }
        }
    }
}

int main(){
    int n = 7;
    vector <int> calificaciones(n);

    for(int i=0; i<n; i++){ 
        cout << "Ingrese la calificación " << i+1 << ": ";
        cin >> calificaciones[i];
    }
    auto start = chrono::steady_clock::now();
    bubbleSort(calificaciones);
    auto end = chrono::steady_clock::now();
    auto diff = end - start;

    cout << "Calificaciones ordenadas: ";
    for(int calificacion: calificaciones){
        cout << calificacion << " ";
    }
    cout << endl;
    cout << "Calificación minima: " << calificaciones[0] << endl;
    cout << "Calificación máxima: " << calificaciones[n-1] << endl;
    cout << "Tiempo de ejecución: " << chrono::duration <double, milli> (diff).count() << " ms" << endl;
    
    return 0;
}

// Time Complexity: O(n^2)