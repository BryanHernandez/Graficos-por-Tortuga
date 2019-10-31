#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <cstdlib>
using namespace std;

int main(){
	
	int tabla [20][20]={0};
	int activar = 0;
	int pluma = 0;
	int girar = 0; 
	int dato;
	int tortuga [2]={0};
	int posicion = 6;
	
	cout<<  "1.... Pluma hacia arriba"
	<<endl<<"2.... Pluma hacia abajo"
	<<endl<<"3.... Gira a la derecha"
	<<endl<<"4.... Gira a la izquierda"
	<<endl<<"5.... Pide un valor para avanzar"
	<<endl<<"6.... Imprime el tablero"
	<<endl<<"7.... Salir"<<endl;
	
	while(activar<=6){
		cout<< "Elige un comando para disenar::: ";
		cin>>activar;
		cout<<endl;
		
		if (activar == 1){ //Pluma Abajo
			pluma = 0;
		}
		 if (activar == 2){//Pluma Arriba
		pluma = 1;	
		}
		if (activar == 3){//Dirar Derecha
		girar == 0;
		if (girar == 0 && posicion == 8){
		
		posicion == 6;
		girar=1;
		}
		if (girar == 0 && posicion == 6){
			posicion=2;
			girar=1;
		}
		if (girar == 0 && posicion == 2 ){
			posicion =4;
			girar=1;
		}
		if (girar==0 && posicion == 4){
			posicion=8;
			girar=1;
		}
	}
	if (activar == 4){//Pluma Izquierda
		girar ==0;
		if (girar==0 && posicion ==8){
			posicion=4;
			girar=1;
		}
		if (girar==0 && posicion ==4){
			posicion=2;
			girar=1;
		}
		if (girar==0 && posicion==2){
			posicion=6;
			girar=1;
		}
		if (girar==0 && posicion==6 ){
			posicion==8;
			girar=1;
		}
	}
	if (activar==5){//Avanza la tortuga
	
	cout<<"Cuanto quieres avanzar";
	cin>>dato;
	cout<<endl;
	
	if(posicion==2){//mover abajo
	if (pluma==1){//Valida pluma
	for (int i = tortuga[0];i<= tortuga[0]+dato;i++)
	
	tabla[i][tortuga[0]]=1;
	}
	tortuga [0]= tortuga[0]+dato;// Cambio de posicon
	}
	
	if(posicion==8){//mover arriba
	if (pluma==1){//Valida pluma
	for (int i = tortuga[0];i>= tortuga[0]-dato;i--)
	tabla[i][tortuga[0]]=1;
	}	
	tortuga [0]= tortuga[0]-dato;
}
	if(posicion==6){//Mover>>
	if(pluma==1){
	for(int i = tortuga[1];i<= tortuga[1]+dato;i++)
	tabla[tortuga[0]][i]=1;
	}	
	tortuga[1]= tortuga[1]+dato;  //  Cambiamos lugar
}
	if(posicion==4){//Mover <=
	if(pluma==1){
	for(int i = tortuga[1];i>= tortuga[1]-dato;i--)
	tabla[tortuga[0]][i]=1;
	}
	tortuga[1]= tortuga[1]-dato;  //  Cambiamos la Tortuga de lugar
	}
	//caso 5
}
	if (activar==6){// Imprime el tablero
	cout << endl;
	for(int f=0;f<20;f++){
	for(int c=0;c<20;c++)
	cout<<tabla[f][c];
	cout <<endl;
	}
	cout <<endl;
	cout <<"Tortuga en "<<tortuga[0]<<" "<<tortuga[1]<<endl;
	}
}
  //While Fin del programa
cin.get();
return(0);
}

