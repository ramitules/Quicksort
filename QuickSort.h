#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void quick_sort (int *vec, int tamano){
    int pared, actual, pivote, tmp;
    if (tamano < 2) return;
    pivote = vec[tamano - 1];
    pared  = actual = 0;
    while (actual<tamano){
        if (vec[actual] <= pivote){
            if (pared != actual){
                tmp=vec[actual];
                vec[actual]=vec[pared];
                vec[pared]=tmp;
            }
            pared ++;
        }
        actual ++;
    }
    quick_sort(vec, pared - 1);
    quick_sort(vec + pared - 1, tamano - pared + 1);
}

#endif // QUICKSORT_H_INCLUDED
