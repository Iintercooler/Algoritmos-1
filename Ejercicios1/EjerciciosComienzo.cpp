#include "EjerciciosComienzo.h"


int pruebas(){
    return 0;
}

//test comit2

int largoStr (char * str){
    int largo=0;
    while (str[largo] != '\0') {
        largo++;
    }
    return largo;
}

int suma(int a, int b) {
    return a+b;
}

void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
 	
    for (int i=desde;i<= hasta;i++) {
       cout << i << "*" << tablaDel << "=" << i*tablaDel;
        if (i != hasta) {
            cout << ";" ;
        }
    }
        
}


void simplificar(int n, int d) {
	// IMPLEMENTAR SOLUCION
}

int ocurrencias123Repetidos(int* vector, int largo) {
	// IMPLEMENTAR SOLUCION
	return 0;
}



int	 maximoNumero(unsigned int n) {
    int NumMaximo;
    int * maximo = new int[n];
    for (int i=0;i<n;i++){
        cin >> maximo[i] ;
    }
    NumMaximo = maximo[0];
    for (int i=1;i<n;i++){
        if (maximo[i]>NumMaximo){
            NumMaximo=maximo[i];
        }
    }
    return NumMaximo ;
}

void ordenarVecInt(int *vec, int largoVec) {
	// IMPLEMENTAR SOLUCION
}


char* invertirCase(char* str)
{
    // IMPLEMENTAR SOLUCION
	return NULL;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
	// IMPLEMENTAR SOLUCION
    return NULL;
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
	// IMPLEMENTAR SOLUCION
	return NULL;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
