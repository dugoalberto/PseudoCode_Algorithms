HeapSort(A){
    BuildMaxHeap(A);
    for (int i = A.size; i >= 1; i--;){
        A[1] <-> A[i];
        size = size-1;
        maxHeapify(A, i);
    }

}
BuildMaxHeap(){
    for(int i = size/2; i >= 1; i--){
        maxHeapify(A, i);
    }
}
maxHeapify(A, i){
    l = left(i);
    r = right(i);
    max = i;
    if( (l <= A.size) && (A[i] < A[l])) {
        max = l;
    }
    if( (r <= A.size) && (A[max] < A[r])) {
        max = r;
    }
    if(max != i) {
        A[i] <-> A[max];
        maxHeapify(A, max);
    }

}
//extract the max from the Heap
Extractmax(){
    T max = A[1];
    A[1] = A[size];
    size = size--;
    maxHeapify(A, 1);
    return max; 
}
Insert(A, k){
    size = size++;
    A[size] = k;
    A.BuildMaxHeap();
}