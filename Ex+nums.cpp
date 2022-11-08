#include <iostream>

using namespace std;

int main ( ){
	
	float  M[3][4], num;
	int i, j, achou = 0;
	
	for(i = 0; i < 3; i++){
		
		for(j=0; j<4; j++){
			cout << "Informe um numero positivo:\n";
			cin >> M[i][j];
		
			while( M[i][j] < 0){
				cout << "Informe numero valido!\n";
				cin >> M[i][j];
			}
		}
		
	}
	
	cout << "Informe um numero para procurar: \n";
	cin >> num;
		for(i=0; i<3; i++){
			for(j=0; j<4; j++){
				if (num == M[i][j]){
					achou = 1;
				}
			}
		} if ( achou == 1){
			cout << "numero encontrado! \n";
		} else {
			cout << "Numero nao encontrado! \n";
		}
	
	return 0;
}

