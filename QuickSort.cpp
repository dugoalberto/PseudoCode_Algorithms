// 7 6 3 4 8 5
// 3 6 7 4 8 5
// 3 4 7 6 8 5
// 3 4 <= 5 <= 6 8 7
Partition(A, p, r){
    x = A[r];
    i = p-1;
    for(int j = p; j< r-1; j++){
        if(A[j] < x){
            i++;
            A[j] <-> A[i];
        }
    }
    A[i+1] <-> A[r];
    return i + 1;
}
QuickSort(A, p, r){
    if (p<r) {
        q = Partition(A, p, r);
        QuickSort(A, p, q-1); //3 4
        QuickSort(A, q+1, r); // 6 8 7       
    }
}

