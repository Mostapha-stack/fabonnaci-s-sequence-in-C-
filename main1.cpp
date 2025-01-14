#include <iostream>
using namespace std;

int main() {
    int n;

    // Demander � l'utilasateur d'entrer un entier n
    cout << "Entrer un entier n : " << endl;
    cin >> n;
 
    // V�rifier si l'entrer est valide
    if (n < 0) {
        cout << " veuillez entrer un entier positif. " <5< endl;
        return 1; // FIn du programme avec une erreur
    }

    // cas particulier pour n = 0 , n = 1
    if (n == 0 || n == 1) {
        cout << "F" << n << " = 1" << endl;
        return 0; // Fin du programme 
    }

    // Cr�e des variables pour stocker les termes pr�c�dents de la suite
    long long fib_n_minus_2 = 1; // F0
    long long fib_n_minus_1 = 1; // F1
    long long fib_n = 0;         // terme courant

    // Calculer F_n pour n > 1
    for (int i = 2; i <= n; i++ ) {
      fib_n = fib_n_minus_2 + fib_n_minus_1; // somme des deux termes pr�c�dents
      fib_n_minus_2 = fib_n_minus_1;         // mettre � jour le terme F(n-2)
      fib_n_minus_1 = fib_n;                 // mettre � jour le terme F(n-1)
    }


    // Afficher le r�sultat 
    cout << "F" << n << " = " << fib_n << endl;


    return 0;

  }

