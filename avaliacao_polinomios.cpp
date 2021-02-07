#include <iostream>//manipulação de fluxo de dados padr?o do sistema 
#include <cmath> //biblioteca para funçãoes matemáticas
#include <iomanip> //manipulação da apresentação e do processamento de dados (nessse codigo para limitar o num de caas decimais)
#include <locale> //biblioteca manipulação de diversas convenções culturais do utilizador (nessse codigo para acentuação)
using namespace std;

double avalia(double* polinomio, int grau, double x){
double resultado = 0.0;

    for (int i = 0; i<=grau; i++){
    resultado += polinomio[i] * pow(x,i); //pow == potencia <cmath>
    }
    return resultado;
}

int main() {
	
    int grau = 2;
    double polinomio[grau] = {12,2,3};
    double x = 3;
	
	setlocale(LC_ALL,""); //setlocale <locale>
	
    cout << "Avaliaçao de polinômios:" << endl;
    cout << "f(x) = f(" << fixed << setprecision(0) << x << ") = " << fixed; //setprecision <iomanip>
		for(int i =grau; i>=0; i--){
		cout << " ";
		if (polinomio[i]>0) 
            cout << "+ " << polinomio[i];
        else 
		if (polinomio[i]<0)
        cout << "- " << abs(polinomio[i]);
        if (i>1)
        cout << "x" << i;
        else if (i==1)
		cout << "x";
		}
		cout << " = " << avalia(polinomio,grau,x) << endl; 

    return 0;
	}



