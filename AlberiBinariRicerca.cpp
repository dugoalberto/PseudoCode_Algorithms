
//IsABR in tempo n
//n lunghezza array, i = indice dove sono arrivato
isABR_REC(A, n, i){
    if( i > n ) return true;
    l = isABR_REC(A, n, 2i);
    r = isABR_REC(A, n, 2i+1);
    M = max(A, n, 2i); // prendo il max nel sottoalbero sinistro
    m = min(A, n, 2i + 1); // prendo il min nel sottoalbero destro
    return ( l && r && A[i] <= m && A[i] >= M);
}
min(A, n, i){
    if (i > n) return +infinite;
    while(2i < n){
        i = 2i;
    }
    return A[i];
}
max(A, n , i){
    if(i > n) return -infinite;
    while( 2i+1 < n){ 
        i = 2i+1; //sottoalbero destro
    }
    return A[i];
}
//il più semplice di tutti in tempo n e ricorsivo
IsABR_rec2_Array(A,n,i){
    if (i > n) return true, +infinite, -infinite;
    isL, minL, maxL = IsABR_rec2_Array(A,n,2i)
    isR, minR, maxR = IsABR_rec2_Array(A,n,2i+1);
    return isL && isR && A[i] <= minR && A[i] >= maxL,
            min(minL, minR, A[i]);
            max(maxL, maxR, A[i]);
}

//Mio che non funziona
bool IsABR(x){
    if(x == nullptr) return true;
    if(x.left.key < x.key && x.right.key > x.key){
        min = min(x.right); //minimo del sottoalbero radicato in right
        max = max(x.left); // max del sottoalbero radicato in left
        if(min < x.key || max > x.key ) return false;
        return IsABR(x.left) && IsABR(x.right);
    }else return false;
}

void inOrder(nodo x){
    if(x != nullptr){
        inOrder(x.left);
        print(x);
        inOrder(x.right);
    }
}
nodo Search(x, key){
    if(x.key == key) return x;
    else if( x == nullptr) return nullptr;
    else if(key < x.key) return Search(x.left);
    else return Search(x.right)
}
nodo minimo(x){
    while(x.left != nullptr){
        x = x.left;
    }return x;
}
nodo sucessore(x){
    //ho figlio destro
    if(x.right != nullptr) return min(x.right);
    //sono figlio dx, allora cerco il primo antenato che è figlio sinistro
    else{
        y = x.parent;
        while(x == y->right && y != nullptr) {
            x = y;
            y = y.parent;
        } return y;
    }
}
nodo prec(x){
    if(x->left != null) return max(x->left);
    else{
        y = x.parent;
        while( x == y.left && y != nullptr){
            x = y;
            y = y.parent;
        }
        return y;

    }
}
//insert nodo z nell'albero T
Insert(T , z){
    x = T.root;
    if(x == nullptr) T.root = z;

    if(z.key >= x.key){
        if(x.right != nullptr) insert(x.right, z);
        else {
            x.right = z;
            z.parent = x.right;
        }
    }else{
        if(x.left != nullptr) insert(x.left, z);
        else {
            x.left = z;
            z.parent = x.left;
        }
    }
}
InsertProf(T, z){
    x = T.root;
    y = nullptr;
    while(x != nullptr){
        y = x;
        if(z.key < x.key){
            x = x.left;
        }else{
            x = x.right;
        }
    }
    z.p = y;
    if(y == nullptr) T.root = z;
    else{
        if(z.key < y.key){
            y.left = z;
        }else y.right = z;
    }
}
//seleziona l'i-esimo elemento dell'abr nella vista !! InOrder !!
Select(T, i){
    r = x->left->size + 1;
    if(r == i) return x;
    if(r > i){
        return Select(x->left, i);
    }else{
        return Select(x->right, i-r);
    }
}
//return la posizione di x nella lista InOrder
Rank(T, x){
    r = x.left.size+1;
    y = x;
    while( y != root ){
        if(y = y.p.right){
            r = r + y.p.right.size + 1;
        }
        y = y.p;
    }
    return r;
}

