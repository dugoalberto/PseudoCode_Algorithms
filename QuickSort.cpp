// 7 6 3 4 8 5
// 3 6 7 4 8 5
// 3 4 7 6 8 5
// 3 4 <= 5 <= 6 8 7
// QuickSort max = O(n^2)
// min = med = O(nlogn)
// complessità spazio = O(1)
// NON è stabile
//la partition consiste nel mettere i numeri più piccoli dell'ultimo prima di i fondamentalmente, così poi
//quando cambiamo i+1 con r, abbiamo {<<<<x>>>>}
Partition(A, p, r){
    x = A[r];
    i = p-1;
    for(j = p to r){
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
