#include <iostream>
using namespace std;
#define QUE 10  //constante
#define SO 6
#define SI 8
#define TO 10

int main() {
    int array [QUE],suma=0, array2[SO],suma2=0 ;


    for (int a = 0 ; a < QUE ; a++ ){
        array [a] = a+1;
        suma = suma + array [a];
    }
    cout<< "=========================================================" << endl;
    cout<< "Suma de todos los numeros enteros" << endl;
    cout<< "=========================================================" << endl;

    cout << "La suma de todos los elementos es: " << suma << endl;

    cout<< "=========================================================" << endl;

    cout<< "Numero mayor de un array de 6 posiciones" << endl;

    cout<< "=========================================================" << endl;

    for (int i = 0; i < SO; i++) {

        array2 [i] = i + 1;
        cout << "-----------------" << endl;
        cout << array2[i] << endl;

    }
    int r=0;

    for (int i = 0; i < SO; i++){
       if (r < array2[i]){

           r = array2[i];
       }
    }
    cout<< "=========================================================" << endl;
    cout<<"El valor maximo del array es : "<< r <<endl;
    cout<< "=========================================================" << endl;
    int array3[SI];
    array3 [1] = 1;
    array3 [2] = 2;
    array3 [3] = 3;
    array3 [4] = 4;
    array3 [5] = 5;
    array3 [6] = 6;
    array3 [7] = 7;
    array3 [8] = 8;

    cout << "los numeros inversos son: " <<  endl;
    cout << array3 [8] << endl;
    cout << array3 [7] << endl;
    cout << array3 [6] << endl;
    cout << array3 [5] << endl;
    cout << array3 [4] << endl;
    cout << array3 [3] << endl;
    cout << array3 [2] << endl;
    cout << array3 [2] << endl;
    cout << array3 [2] << endl;
    cout << array3 [1] << endl;
    cout<< "=========================================================" << endl;
    cout<< "Suma de todos los numeros enteros" << endl;
    cout<< "=========================================================" << endl;
    int array4[TO];
    for (int H = 0 ; H < TO ; H++ ){
        array4 [H] = H+1;
        suma2 = suma2 + array4 [H];
        cout << "---------" << endl;
        cout << suma2 << endl;
    }
    cout<< "=========================================================" << endl;
    cout << "La suma de todos los elemetos es: " << suma2 << endl;
    cout<< "=========================================================" << endl;



    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

    int fresa = 0, sandia = 0, melon = 0, naranja=0, mango=0;
    cout<< "Cuantas veces se repite cada fruta?" << endl;
    for (int O = 0; O < 9; ++O){
        if (frutas [O] == "fresa"){
            fresa += 1;
        }
        if (frutas [O] == "sandia"){
            sandia += 1;
        }
        if (frutas [O] == "melon"){
            melon += 1;
        }
        if (frutas [O] == "naranja"){
            naranja += 1;
        }
        if (frutas [O] == "mango"){
            mango += 1;
        }
    }
    cout<< "=========================================================" << endl;
    cout<< "hay " << fresa << " fresas" << endl;
    cout<< "hay " << sandia << " sandia" << endl;
    cout<< "hay " << melon << " melon" << endl;
    cout<< "hay " << naranja << " naranja" << endl;
    cout<< "hay " << mango << " mango1" << endl;
    cout<< "=========================================================" << endl;
    return 0;
}