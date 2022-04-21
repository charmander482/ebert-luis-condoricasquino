#include <iostream>
using namespace std;
/*
1.
int main(int argc, char *argv[]) {
	int a=0;
	for(int i=0;i<=100;i++){
		if(i%2==0)
			a=a+i;
	}
		
	
	cout<<a<<" ";
	
	return 0;
}
*/

/*
2.
int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"ingrese 2 numeros enteros"<<endl;
	cin>>a>>b;
	
	c=a*b;
	cout<<"resultado de la multiplicaion? "<<c;
	
	
	
	return 0;
}
*/
/*
3.
int main(int argc, char *argv[]) {
	
	
	char a[20];
	char b[20];
	char c[20];
	
	cout<<"ingrese nombre "<<endl;
	cin>>a;
	cout<<"ingrese apellido paterno "<<endl;
	cin>>b;
	cout<<"ingrese apellido materno "<<endl;
	cin>>c;
	
	cout<<"correo unsa generado? "<<a[0]<<b<<c[0]<<"@unsa.edu.pe"<<endl;
*/




/*
4.
int divi(int a){
	
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
	
}

int main(int argc, char *argv[]) {
	
	for(int i=0;i<50;i++){
		if(divi(i)==1)
			cout<<i<<" ";
	}
	
	return 0;
}

*/

/*
5.
int main(int argc, char *argv[]) {
	
	for(int i=0;i<100;i++){
		if(i%5==0)
			cout<<i<<" ";
		
	}
	
	return 0;
}
*/


/*
6
int divi(int a){
	
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
	
}
	
	int main(int argc, char *argv[]) {
	int a,b;
	cout<<"INGRESE 2 NUMEROS "<<endl;
	cin>>a>>b;

	for(int i=a;i<b;i++){
		if(divi(i)==1)
	     	cout<<i<<" ";
	}
		
	return 0;
}

*/
/*
7.
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"INGRESE FECHA DESEADA"<<endl;
	cout<<"INGRESE HORA "<<endl;
	cin>>a;
	cout<<"INGRESE MINUTOS"<<endl;
	cin>>b;
	
	if(a>=13||a<=24 )
		cout<<a<<":"<<b<<" PM";
	if(a>=1|| a<=12);
		cout<<a<<":"<<b<<" AM";
	
	
	return 0;
}
*/
/*
9.
int main(int argc, char *argv[]) {
	int a;
	float b;
	cout<<"ingrese nuemro flotante"<<endl;
	cin>>b;
	a=b;
	cout<<"resultado "<<a;
	
	
	
	return 0;
}
*/
*/
10.
#include <bitset>

int main(int argc, char *argv[]) {
	int a;
	cout<<"INGRESE UN NUMERO entre 100 AL 999"<<endl;
	cin>>a;
	while(a<100 || a>999){
		cout<<"ingrese un numero entre 100 al 999"<<endl;
		cin>>a;
	}
	bitset<32> bina(a);
	cout<<bina;
	
	
	return 0;
}
/*
/*
11.
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"ingrese 2 numeros "<<endl;
	cin>>a>>b;
	if(a>b)
		cout<<"el mayor es "<<a;
	if(b>a)
		cout<<"el mayor es "<<b;
	cout<<endl;
	cout<<"media de los nueros es "<<(a+b)/2;
	
	
	return 0;
}
*/

/*
12.
int fibo(int a){
	if(a < 2)
		return a;
	return fibo(a-1) + fibo(a-2);
}
	int main() {
		int a;
		cout<<"ingrese numero"<<endl;
		cin >> a;
		fibo(a);
		for(int i=0;i<=a;i++)
			cout <<fibo(i)<<"-";
		return 0;
	}
*/


/*
13.
int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"ingrese 2 numeros "<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<"b es divisor de a"<<endl;
	if(b%a==0)
		cout<<"a es divisor de b"<<endl;
	if(a%b!=0 && b%a!=0)
		cout<<"no son divisores"<<endl;
	
	
	
	
	return 0;
}
*/
/*
14.
int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	int d;
	cout<<"ingrese 3 notas "<<endl;
	cin>>a>>b>>c;
	d=(a+b+c)/3;
	cout<<"promedio de los 3 alumnos? "<<d;
	
	return 0;
}

*/
/*
15.
int main(int argc, char *argv[]) {
	int a;
	cout<<"ingrese la tabla del numero deseado"<<endl;
	cin>>a;
	for(int i=1;i<13;i++)
		cout<<i<<" * "<<a<<" = "<<i*a<<endl;
	
	return 0;
}
*/
/*
16.
int main(int argc, char *argv[]) {
	int a[100];
	int x;
    cout<<"ingrese x veces ";
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	
	return 0;
}
*/
