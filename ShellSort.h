#ifndef SHELLSORT_H
#define SHELLSORT_H


#include <cmath>

template <class T>
void shellSort(T *vect, unsigned long tamanio){

    int k = sqrt(tamanio);
    int j, temp;
    T a_ubicar;
    while(k > 0){
        j = k;
        while(j < tamanio){
            a_ubicar = vect[j];
            temp = j - k;
            while(temp >= 0 && a_ubicar < vect[temp]){
                vect[temp + k] = vect[temp];
                temp -= k;
            }
            vect[temp + k] = a_ubicar;
            j++;
        }
        k--;
    }
}



#endif //SHELLSORT_H
