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
