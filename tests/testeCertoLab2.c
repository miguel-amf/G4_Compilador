int fu(int x){
    int i;
    float y;
    y = 1.14;
    return (x + y) * 3;
}

int main() {
    int i;
    {
        int i;
        {
            int i;
            {
                int i;
            }
        }
    }
    read(i);
    float r;
    r = fu(i);
    float soma;
    soma = 0;
    int j;

    for (j = 0; r > soma; j = j + 1){
      r = fu(j);
      writeln(r);
    } 
    
    return 0;
}