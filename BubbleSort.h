#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <class T>
void bubbleSort(T *vect, unsigned long tamanio){

    T aux;

    for(unsigned long i = 0; i < tamanio; i++){
        for(unsigned long j = 0; j < tamanio; j++){
            if(vect[j] > vect[j + 1]){
                aux = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = aux;
            }
        }

    }

}


#endif //BUBBLESORT_H
