bool IsABR(T){
    if(T.parent == nullptr){
        min(T.right); //minimo del sottoalbero radicato in rigth
        max(T.left); // max del sottoalbero radicato in left
        if(min > T || max > T ) return false;
    }
    if(T == nullptr) return true;
    if(T.left < T && t.right > T){
        IsABR(T.left); 
        IsABR(T.right);
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
    //sono figlio dx
    else{
        y = x.parent;
        while(y < x && y != nullptr) {
            y = y.parent;
        } return y;
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
