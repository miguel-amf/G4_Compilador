int main() {

  float list notas;
  notas = NIL;
  int n;

 writeln("Qual o número de provas?"); read(n);

 int i;

 for (i = 0; i < n; i = i + 1) {
   float nota;

   write("Digite a nota da prova "); write(n); writeln(":");
   read(nota);
   notas = nota : notas;
 }

 float soma; soma = 0;
 float list AUX;

 for (AUX=notas; AUX = NIL; AUX = !AUX)
    soma = soma + ?AUX;

 float media1; float media2;

 media1 = soma/n - 10 * (1/10);
 media2 = soma/n;

 if (media1 != media2) writeln("Há um problema no cálculo da média");
 else if (media1 == media2
    && media1 >= 5) writeln("Parabéns!");
}