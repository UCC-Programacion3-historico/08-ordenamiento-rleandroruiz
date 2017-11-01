#ifndef INTERSORT_H
#define INTERSORT_H


template <class T>
void interSort(T *vect, unsigned long tamanio){

    int k = 2;
    int j, n1, n2, b1, b2;
    while(k < tamanio) {
        for (int i = 0; i < tamanio; i += k) {

            j = i;
            n1 = i;
            b1 = i;
            n2 = i + (k / 2);
            b2 = i + (k / 2);

            while(n1 < (b1 + k)  || n2 < (b2 + k)) {

                if (vect[n1] < vect[n2]) {
                    vect[j] = vect[n1];
                    n1++;
                    j++;
                }
                else {
                    vect[j] = vect[n2];
                    n2++;
                    j++;
                }
            }
        }
        k *= 2;
    }

}

#endif //IINTERSORT_H
