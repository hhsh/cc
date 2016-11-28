
int main(){

    int each(int,int,int(*)(int,int));
    int mt(int,int);
    int rs = each(4,5,mt);
    printf("%d\n",rs);
    return 0;
}
int each(int a,int b,int (*fn)(int,int)){
    return (*fn)(a,b);
}

int mt(int a,int b){
    return a * b;
}
