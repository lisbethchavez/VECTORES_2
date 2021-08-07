
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <windows.h>


using namespace std;

//lectura del vector
void leervector(int num[],int tamanio)
{
    for(int i=0;i<tamanio;i++)
    {
        cout<<"Ingrese el elemento # "<<(i+1)<<" : ";
        cin>>num[i];
    }
}

// Impresion del vector
void imprime_vector(int vector[], int tamanio)
{
    cout<<endl<<endl<<"Elementos del vector";
    for(int i=0; i<tamanio;i++)
    {
        cout<<endl<<"Elemento # "<<(i+1)<<" : "<<vector[i];
    }
}
//Realizar la sumatoria de los elementos del vector
double sumatoriavector(int vector[],int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio;i++)
        suma+=vector[i];

    return suma;
}

//Realizar el promedio de los elementos del vector
double promediovector(int vector[], int tamanio)
{
    double prom=0;
    prom= sumatoriavector(vector,tamanio)/tamanio;

    return prom;
}
//Ejercicios
//1. Funcion que devuelve el elemento maximo del vector
int maximo (int vector[], int tamanio)
{
    int may=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]>may)
            may=vector[i];
    }
    return  may;
}

//2. Funcion que devuelve el elemento menor del vector.

int minimo(int vector[], int tamanio)
{
    int min=vector[0];
    for(int i=0;i<tamanio;i++)
    {
        if(vector[i]>min)
            min=vector[i];
    }
    return min;
}
//3. Funcion que devuelve por referencia el elemento minimo y maximo del vector

void mayor_menor(int vector[],int tamanio, int mayor, int menor)
{
    mayor= maximo(vector,tamanio);
    menor= minimo(vector,tamanio);

}
//4. Funcion que llene el vector con valores aletorios
void vectoraleatorio(int num[], int tamanio)
{
    srand(time(NULL));
    for(int i=0; i<tamanio; i++)
    {
        num[i]= 1 + rand() % 1000;

    }
}
//diseñe la funcion que realice el intercambio

void intercmabio(int &num1, int &num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}

//ordenar vector de menor a mayor (ascendente)
void ordenacion_secuencia(int vector[],int tamanio)
{
    for(int i=0; i<tamanio;i++)
    {
        for(int j=0; i<tamanio;j++)
        {
            if(vector[i]>vector[j])
            {//intercambiar los elementos
                intercambio(&vector,&vector[j]);
                /*
                int aux;
                aux=vector[i];
                vector[j]=vector[j];
                vector[j]=aux;
                 */
            }

        }
    }
}

//1. Diseñe la funcion que busque un numero entero en el vector.
// La funcion debe devolver verdadero si el elemento existe en el vector
//o falso en caso contrario

bool contienelemento(int vector[],int elemento)
{
    bool resultado= false;
    for(auto & x : vector[])
    {
        if(x==elemento)
        {
            resultado=true;
            break;
        }
    }
    return resultado;
}

//2. Diseñe la funcion que busque un numero entero en el vector.
//la funcion debe devolver la posicion donde el elemento fue encontrado
//Devuelve -1 si no existe


int posicionelemento(int vector[],int tamanio,int buscar);
{
for(int i=0;i<tamanio;i++)
{
int elemento=vector[i];
if(elemento==buscar)
return i;
}
return -1;
}

//TAREA RESUELTA
//1. Diseñe la funcion que busque un numero entero en el vector, la funcion debe devolver verdadero si el
// elemento existe en el vector, o falso caso contrario.

//busqueda secuencial

bool buscar(int array[], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return true;
    }
    return false;
}

//2. Diseñe la funcion que busque un numero entero en el vector, la funcion debe devolver la poscion donde
// el elemento fue encontrado. Devuelve -1 si no existe.

int buscar_posicion(int array[], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return i;
    }
    return -1;
}
//ACTIVIDADES EN CLASE
//3.Diseñe la funcion que devuelva la cantidad de veces que existe un entero en el vector
//vector[10,45,6,10,10]. El elemento 10 existe tres veces
//El elemento 1 existe 0 veces

int contarelemento(int array[],int tamanio,int elemento)
{
    int cont=0;
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            cont ++;
    }
    return cont;
}
//4.Diseñe el vector que ordene el vector de manera descendente

void ordenacion_descendente(int vector[],int tamanio)
{
    for(int i=0; i<tamanio;i++)
    {
        for(int j=0; i<tamanio;j++)
        {
            if(vector[i]<vector[j])
            {
                int aux;
                aux=vector[i];
                vector[j]=vector[j];
                vector[j]=aux;
            }

        }
    }
}

double performancecounter_diff(LARGE_INTEGER *a,LARGE_INTEGER *b)
{
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    return(double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

//TAREA
//1. Diseñe la funcion que imprima el vector de nombres.

string nombre[9]={"Andrew","Doug","Dexter","Ethan","Harry","Eleanese","Kaethenis","Ashton","Grace"};
int i;
for(i=0;i<9;i++)
{
nombre[i]
}

//2. Diseñe la funcion que ordene descendentemente el vector de nombres

void ordenar_descendente(int a[],int n)
{
    int aux;
    for(int i=n;i>=0;i--)
        for(int j=0;j<=i;j++)
            if(a[j]<a[j+1])
            {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
}

int main() {
    LARGE_INTEGER t_ini, t_fin;
    double secs;


    const int MAX=20;
    int num[MAX];


    vectoraleatorio(num,MAX);
    //llenar el vector con numeros aleatorios
    num[8]=15;

    cout<<endl<<"VECTOR ORIGINAL";
    imprime_vector(num,MAX);

    cout<<endl<<endl<<"VECTOR ORDENADO";

    //captura tiempo inicial del proceso
    QueryPerformanceCounter(&t_ini);
    ordenacion_secuencia(num,MAX);

    //captura el tiempo despues de concluir el proceso
    QueryPerformanceCounter(&t_fin);
    secs= performancecounter_diff(&t_fin,&t_ini);
    cout<<"\nORDENACION SECUENCIAL:Tiempo EJECUCION en milisegundos:"<<(secs*1000.0);


    /*
    QueryPerformanceCounter(&t_ini);
    ordenacion_BURBUJA(num,MAX);
    QueryPerformanceCounter(&t_fin);
    secs=performancecounter_diff(&t_fin, &t_ini);
    cout<<"\nORDENACION BURBUJA.Tiempo EJECUCION en milisegundos:"<<(secs*1000.0);
     */

    //ordenacion_descendente(num,MAX);
    imprime_vector(num,MAX);

    int suma= sumatoriavector(num,MAX);

    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;
    cout<<"EL PROMEDIO ES: "<<promediovector(num,MAX);
    cout<<endl<<"EL ELEMENTO MAYOR ES: "<<maximo(num,MAX);
    cout<<endl<<"EL ELEMENTO MINIMO ES: "<<minimo(num,MAX);

    int may,men;
    mayor_menor(num,MAX,may,men);
    cout<<endl<<"MAYOR ENCONTRADO: "<<may;
    cout<<endl<<"MENOR ENCONTRADO: "<<men;

    int numeros{11,33,45,65,89,90,123};
    int elemento=46;

    if(contienelemento(numeros,elemento))
    {
        cout<<"ELEMENTO EXISTENTE EN EL VECTOR"<<endl;
    }
    else
    {
        cout<<"ELEMENTO NO EXISTENTE EN EL VECTOR"<<endl;
    }


    cout<<"POSICION: "<<posicionelemento<<endl;

//buscar elemento en el vector
    int x=65;
    if(buscar(num,MAX,x))
        cout<<endl<<"El elemento "<<x<<"Si existe";
    else
        cout<<endl<<"El elemento "<<x<<"No existe";


    int posicion= buscar_posicion(num,MAX,x);
    if(posicion==-1)
        cout<<endl<<"No existe el elemento "<<x<<"en el vector";
    else
        cout<<endl<<"No existe el elemento "<<x<<"en la posicion: "<<posicion;

    cout<<"\n";
    cout<<"Orden descendente"<<"\n";

    cout<<"LOS NOMBRES SON: ";


    return 0;
}


