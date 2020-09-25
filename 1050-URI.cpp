//Por Rodrigo Costa
#include <iostream>



using namespace std;

    int r;
    
    
int ent();

int main(){

	
	ent();

    if (r==61){
        cout << "Brasilia" << endl;
    }
    else if (r==71){
        cout << "Salvador" << endl;
    }
    else if (r==11){
        cout << "Sao Paulo" << endl;
    }
    else if (r==21){
        cout << "Rio de Janeiro" << endl;
    }
    else if (r==32){
        cout << "Juiz de Fora" << endl;
    }
    else if (r==19){
        cout << "Campinas" << endl;
    }
    else if (r==27){
          cout << "Vitoria" << endl;
    }
    else if (r==31){
        cout << "Belo Horizonte" << endl;
    }
    else{
        cout << "DDD nao cadastrado" << endl;
    }
    
    
    return 0;
    
}


int ent(){
	
	cin >> r;
return r;
}