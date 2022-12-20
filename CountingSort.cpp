//se ci sono dati satellite
CountingSort(){
    //tutti 0 in c
    for(int i = 0 ; i<k; i++){
        C[i] = 0;
    }
    //conto occorrenze di dell'indice 6, cioè che A[x] = 6 (occorrenze di un elemento)
    for(i = 0; i < A.lenght ; i++){
        C[A[i]]++;
    }
    //conto le occorrenze <= i
    for(i = 1 ; i<k; i++){
        C[i] = C[i-1] + C[i];
    }
    //inserisco in B, nella pos C[A[i]], il valore di A[i]
    for(i = A.lenght; i>1; i--){
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
    
}

//se NON ci sono dati satellite
CountingSort_NoDatiSatellite(){
    for(int i = 0 ; i<k; i++){
        C[i] = 0;
    }
    //conto occorrenze di dell'indice 6, cioè che A[x] = 6 (occorrenze di un elemento)
    for(i = 0; i < A.lenght ; i++){
        C[A[i]]++;
    }
    i = 1;
    for(j = 0 ; j < k; j++){
        while(C[j] > 0){
            B[i] = j;
            C[j]--;
            i++;
        }
    }
}