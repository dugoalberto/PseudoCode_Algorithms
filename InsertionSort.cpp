InsertionSort(A){
    n = A.lenght;
    for(j = 2 to n){
        key = A[j];
        i = j-1;
        while(i>0) && (key < A[i]){
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
 
    }
} 