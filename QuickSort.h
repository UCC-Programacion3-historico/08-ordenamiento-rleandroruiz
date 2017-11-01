#ifndef QUICKSORT_H
#define QUICKSORT_H

template <class T>
void quickSort(T *vect, unsigned long inicio, unsigned long fin){

    if(inicio == fin)
        return;


    T pivote = vect[inicio];
    unsigned long inf = inicio;
    unsigned long sup = fin;
    T tmp;

    while(inf < sup){
        while(vect[inf] < pivote && inf < fin)
            inf++;
        while(vect[sup] > pivote && sup > inicio)
            sup--;
        if(inf < sup){
            tmp = vect[inf];
            vect[inf] = vect[sup];
            vect[sup] = tmp;
        }

    }

    if(sup == 0)
        return;

    quickSort(vect, inicio, sup - 1);
    quickSort(vect, sup - 1, fin);



}


#endif //QUICKSORT_H

