//Por Rodrigo |Costa
#include <iostream>
#include <string>

using namespace std;

	
	string p1, p2, p3;
	
	string entrada();

	
int main(){

	
	entrada();
	
	if (p1=="vertebrado"){
		if (p2=="ave"){
			if (p3=="carnivoro"){
				cout << "aguia" << endl;
			}else if (p3=="onivoro"){
				cout << "pomba" << endl;
			}else{
				cout << "error" << endl;
			}
		}else if (p2=="mamifero"){
			if (p3=="onivoro"){
				cout << "homem" << endl;
			}else if (p3=="herbivoro"){
				cout << "vaca" << endl;
			}else{
				cout << "error" << endl;
			}
		}else{
			cout << "error" << endl;
		}
	}else if (p1=="invertebrado"){
		if (p2=="inseto"){
			if (p3=="hematofago"){
				cout << "pulga" << endl;
			}else if ("herbivoro"){
				cout << "lagarta" << endl;
			}else{
				cout << "error" << endl;
			}
		}else if (p2=="anelideo"){
			if (p3=="hematofago"){
				cout << "sanguessuga" << endl;
			}else if (p3=="onivoro"){
				cout << "minhoca" << endl;
			}
		}else{
			cout << "error" << endl;
		}
	}else{
		cout << "error" << endl;
	}	
	
	
	return 0;
}



string entrada(){
	
	cin >> p1;
	cin >> p2;
	cin >> p3;

 return p1, p2, p3;

}