
//per ogni cammino contiene lo stesso numero di nodi neri?? blackH : -1
blackHeight(Tree){
    if(x == nullptr) return 0;
    if( x.col == B ){
        nl = blackHeight(x->left) + 1;
        nr = blackHeight(x->right) + 1;
    }else{
        nl = blackHeight(x->left);
        nr = blackHeight(x->right);
    }
    return ( nl == nr && nr != -1) ? nl : -1;
}
//blackHeight complessa
blackHeight(T){
    if(x == null ) return 0;
    sx = blackH(x->left);
    dx = blackH(x->right);
    if( sx == dx && sx != -1 ) && !(sx != dx && sx != -1 dx != -1){
        if( x.col == B ) return  min(sx, dx) + 1;
        return min(sx, dx);
    }else return -1;
}
traslpant(T, u, v){
    if(u.p = null){
        root = y;
    }
    else if(u == u.p.left){
        u.p.left = y;
    }
    else if(u == u.p.left){
        u.p.right = y;
    }
    y.p = u.p;
}
left(T, x){
    y = x.right;
    x.right = y.left;
    x.right.p = x;
    traslpant(T, x, y);
    y.left = x;
    x.p = y;
}
//verifica se è un albero rbtree
RBtree(T){
    if(root != B) return false;
    h = isRBT(root);
    return h;
}
isRBT(x){
    if(x == nullptr) return 0;
    if(x.col == R && (x.left.col == R || x.left.col == R)) return -1;

    l = isRBT(x->left);
    r = isRBT(x->right);

    if(l == -1 || r == -1) return -1;
    if(l != r) return -1; //arrivato qua sono sicuramente diversi da -1;
    else if( x.col == B) return l+1;
    else return bl && br, l;
}