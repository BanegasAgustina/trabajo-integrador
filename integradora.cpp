#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> GetSeniales(vector<int> V);
void MostrarVector(vector<int> V);
string normalizarsenial(vector<int> V);
int CicloCompleto(vector<int> V);
float Porcentaje(vector<int> V);

int main(){
    vector<int> V;
    string senial;
    V = GetSeniales(V);
    MostrarVector(V);
    cout << normalizarsenial(V) << endl;
    cout << CicloCompleto(V)<<endl;
    cout<<Porcentaje(V);
    return 0;
}

vector<int> GetSeniales(vector<int> V){
    srand(time(NULL));
    int e;
    for(int i = 0; i < 14; i++){
        e = rand() % 360;
        V.push_back(e);
    }
    return V;
}

void MostrarVector(vector<int> V){
    for(int i = 0; i < V.size(); i++){
        cout << V[i] << "/";
    }
    cout << endl;
}

string normalizarsenial(vector<int> V){
    string senial;
    for(int i = 0; i < V.size(); i++){
        if(V[i] <= 45 || V[i] > 315){
            senial += "E";
        } else if(V[i] > 45 && V[i] <= 135){
            senial += "N";
        } else if(V[i] > 135 && V[i] <= 225){
            senial += "O";
        } else if(V[i] > 225 && V[i] <= 315){
            senial += "S";
        }
    }
    return senial;
}

int CicloCompleto(vector<int> V){
    int cont = 0;
    string s = normalizarsenial(V);
    for(int i = 0; i < s.size(); i ++){
        if(s.substr(i, 4).compare("NOSE") == 0 ||
           s.substr(i, 4).compare("ESON") == 0 ||
           s.substr(i, 4).compare("SENO") == 0 ||
           s.substr(i, 4).compare("NESO") == 0 ||
           s.substr(i, 4).compare("OSEN") == 0 ||
           s.substr(i, 4).compare("SONE") == 0 ||
           s.substr(i, 4).compare("ENOS") == 0 ||
           s.substr(i, 4).compare("ONES") == 0){
            cont++;
        }
    
    return cont;
}}

float Porcentaje(vector<int> V){
    float p;
    for(int i=0;i<V.size();i++){
         if(V[i] <= 45 || V[i] > 315){
             p=((V[i]*100)/45);
        } else if(V[i] > 45 && V[i] <= 135){
             p=((V[i]*100)/135);
        } else if(V[i] > 135 && V[i] <= 225){
            p=((V[i]*100)/225);
        } else if(V[i] > 225 && V[i] <= 315){
            p=((V[i]*100)/315);
        }
    }
    return p;
}


