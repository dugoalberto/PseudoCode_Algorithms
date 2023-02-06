divideMergeSort(A, p ,r){
    if(p<r){
        q = (p + r) / 2;
        divideMergeSort(A, p, q);
        divideMergeSort(A, q+1, r);
    }
    merge(A, p, q, r);
}
// 1 4 5 3 2 1 
merge(A, p, q, r){
    nl = q - p + 1;
    nr = r - q;
    allocate L[nl + 1]; //l'ultimo è per infinito
    allocate R[nR + 1];
    for (i = 1 to nl){
        L[i] = A[p+i-1];
    }
    for (j = 1 to nr){
        R[i] = A[q+j];
    }
    L[nl + 1] =  R[nR + 1] = +∞;
    i = j = 1;
    for(k = p to r){
        if(L[i] < R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
        k++;
    }
}