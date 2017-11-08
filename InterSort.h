#ifndef INTERSORT_H
#define INTERSORT_H

template<class T>
void interSort(T *vect, unsigned long tamanio) {

    unsigned paso = 1;T *tmp;
    unsigned j, n1, n2, b1, b2;
    while (paso <= tamanio / 2) {
        for (unsigned i = 0; i <= tamanio / paso; i += paso * 2) {
            tmp = new T[paso*2];
            for (unsigned k = 0; k < paso; k++) {
                n1 = i * paso + k;
                n2 = (i + 1) * paso + k;
                if (vect[n1] < vect[n2]) {
                    tmp[k*2]=vect[n1];
                    tmp[k*2+1]=vect[n2];
                }else{
                    tmp[k*2]=vect[n2];
                    tmp[k*2+1]=vect[n1];
                }
            }
            for (unsigned k = 0; k < paso*2; k++)
                vect[i * paso + k]= tmp[k];

            for (unsigned k = 0; k < paso; k++) {
                std::cout << vect[i * paso + k]<< " ";
            }
            std::cout << " - ";
            for (unsigned k = 0; k < paso; k++) {
                std::cout << vect[(i + 1) * paso + k]<< " ";
            }
            std::cout << std::endl;


//
//            j = i;
//            n1 = i;
//            b1 = i;
//            n2 = i + (paso / 2);
//            b2 = i + (paso / 2);
//
//            while (n1 < (b1 + paso) || n2 < (b2 + paso)) {
//
//                if (vect[n1] < vect[n2]) {
//                    vect[j] = vect[n1];
//                    n1++;
//                    j++;
//                } else {
//                    vect[j] = vect[n2];
//                    n2++;
//                    j++;
//                }
//            }
        }
        paso *= 2;
    }

}



#endif //IINTERSORT_H
