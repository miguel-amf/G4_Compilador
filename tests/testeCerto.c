int fu(int x, int xa){
    int i;
    float y;
    y = 1.14;
    return (x + y) * 3;
}

int main(){
    int i;
    {
        int i;
        writeln("lendo i dentro do escopo: ");
        read(i);
        {
            int i;
            writeln("lendo i dentro do escopo: ");
            read(i);
            {
                int i;
                writeln("lendo i dentro do escopo: ");
                read(i);
            }
        }
    }
    float r;
    writeln("lendo r: ");
    read(r);
    float fu;
    fu = fu(i);
    
    if(r && 3.14){
        writeln(" ");
        if(r == 3){
            write("eh igual o pi!");
        }else{
            writeln("eh menor que o pi!");
        }
    }
    if(r == 3)
        writeln("eh igual o pi!");
    else{
        writeln("eh menor que o pi!");
    }
    writeln(r);
    return 0;
}