//Exercícios de C++:

#include<iostream> //Adicionando o #

int main() { // espaçamento entre "()" e {
   int n;
   std::cout << "Digite um numero: "; // Adicionei o "std"
   std::cin >> n; // Adicionei o "std"

   for(int i=1; i<=n; i++)
   {
   std::cout << i << std::endl; // Adicionei o "std"
   }

//...

   int n1, n2, soma;
   std::cout << "Digite dois numeros: "; // Adicionei o "std"
   std::cin >> n1 >> n2; // Adicionei o "std"
   soma = n1 + n2;
   std::cout << "A soma dos numeros e " << soma << std::endl; // Adicionei o "std"

//...

   int x = 5;
   std::cout << "O valor de x e: " << x << std::endl; // Adicionei o "std"
   x = 10;
   std::cout << "O novo valor de x e: " << x << std::endl; // Adicionei o "std"

//...

   int num;
   std::cout << "Digite um numero: ";
   std::cin >> num;

   if(num % 2 == 0)
        std::cout << num << " e um numero par" << std::endl;
   else
        std::cout << num << " e um numero impar" << std::endl;

   return 0; // Mudei o "retrun" para \"return"
}