//complessità: O(nlogn)
//complessità in spazio: O(1)
//NON stabile
HeapSort(A){
    BuildMaxHeap(A);
    for (int i = A.size; i >= 1; i--;){
        A[1] <-> A[i];
        size = size-1;
        maxHeapify(A, i);
    }

}
//complessità: O(nlogn)
BuildMaxHeap(){
    for(int i = size/2; i >= 1; i--){
        maxHeapify(A, i);
    }
}
//complessità: O(logn)
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
//extract the max from the Heap complexity : O(logn)
Extractmax(){
    nodo max = A[1];
    A[1] = A[size];
    size = size--;
    maxHeapify(A, 1);
    return max; 
}
// O(logn)
Insert(A, k){
    size = size++;
    A[size] = k;
    maxHeapifyUp(A, i);
}
maxHeapifyUp(A, i){
    if(i>1)&&(A[i]> A[i/2]){ //cioè parent(i)
        A[i] <-> A[i/2];
        maxH eapify(A, parent(i));
    }
}
