
int i;

int fib(int i){
  if (i == 1) return 1;
  else if (i == 2) return 1;
  else return fib(i-1) + fib(i-2);
}

int main() {
  int i; i = 0;

  read(i);
  if (i >0) write(fib(i));
}