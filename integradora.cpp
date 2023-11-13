#include <bits/stdc++.h>
using namespace std;

vector<int> GetSeniales(vector <int> A, int a);
void MostrarA (vector<int> A);
string Normalizar(vector<int>A);
int Norte(string c);
int Sur(string c);
int Este(string c);
int Oeste(string c);
int CiclosCompletos(int N,int S,int E,int O);
float Porcentaje(int c , int a);

int main(){
	vector<int> A;
	string c;
	int N=0,S=0,E=0,O=0 , a=14;
	A=GetSeniales(A,a);
	MostrarA(A);
	cout<<endl;
	cout<<Normalizar(A)<<endl;
c=Normalizar(A);
 N=Norte(c);
 S=Sur(c);
 E=Este(c);
 O=Oeste(c);
 int cant=CiclosCompletos(N,S,E,O);
 cout<<cant<<endl;
 cout<<"porcentaje Norte  %"<<Porcentaje(N ,a)<<endl;
 cout<<"porcentaje Sur  %"<<Porcentaje(S ,a)<<endl;
 cout<<"porcentaje Este  %"<<Porcentaje(E , a)<<endl;
 cout<<"porcentaje Oeste  %"<<Porcentaje(O ,a)<<endl;
 return 0;
}
vector<int> GetSeniales(vector <int> A , int a){
	int e;
	a=14;
	srand(time(NULL));
	for(int i=0;i<a;i++){
		e=rand()%361;
		A.push_back(e);
	}
	return A;
}
void MostrarA (vector<int> A){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"_";
	}
}
string Normalizar(vector<int>A){
	string c;
	for(int i=0; i<A.size();i++){
		if(A[i]>=45 && A[i]<135){
			c+="_N";
		}
		if(A[i]>=135 && A[i]<225){
			c+="_O";
		}
		if(A[i]>=225 && A[i]<315){
			c+="_S";
		}
		if(A[i]>=315 && A[i]<360 ||A[i]>=0 && A[i]<45){
			c+="_E";
		}
	}
	return c;
}
int Norte(string c){
	int N=0;
	for(int i=0;i<c.size();i++){
		if(c[i]=='N'){
			N++;
		}
	}
	return N;
}
int Sur(string c){
	int S=0;
	for(int i=0;i<c.size();i++){
		if(c[i]=='S'){
			S++;
		}
	}
	return S;
}
int Este(string c){
	int E=0;
	for(int i=0;i<c.size();i++){
		if(c[i]=='N'){
			E++;
		}
	}
	return E;
}
int Oeste(string c){
	int O=0;
	for(int i=0;i<c.size();i++){
		if(c[i]=='N'){
			O++;
		}
	}
	return O;
}
int CiclosCompletos(int N,int S,int E,int O){
	 int cant = 0;
    while (N> cant && O> cant && S> cant && E > cant)
    {
        cant++;
    }
    return cant;
}
float Porcentaje(int c, int a){
    a=14;
    float porcentaje=0;
    porcentaje = 100.0 * (c / (1.0 * a));
    return porcentaje;
}

