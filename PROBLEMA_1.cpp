/* 6. Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y 
tijeras contra la computadora. El usuario elegir� su jugada (piedra, papel o tijeras) y la computadora 
generar� su jugada de forma aleatoria. El programa determinar� el ganador de cada ronda seg�n las 
reglas del juego. El juego continuar� hasta que el usuario o la computadora gane 3 rondas. Muestra el 
resultado final indicando el ganador del juego. */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int JUGADA,CPU, VIDAS_DEL_USUARIO = 3;
	srand(time(0)); // inicializamos el generador de numeros aleatorios
	do{
		cout<<"Digite el numero de su jugada."<<endl;
		cout<<"1. PIEDRA."<<endl;
		cout<<"2. PAPEL."<<endl;
		cout<<"3. TIJERA."<<endl;
		cin>>JUGADA;
		
		
		CPU = rand() % 3 + 1;
		if(JUGADA == CPU){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"EMPATE"<<endl;
		}
		
		if(JUGADA == 1 && CPU == 3){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
		}
		
		if(JUGADA == 1 && CPU == 2){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"PERDISTE ESTA RONDA."<<endl;
			VIDAS_DEL_USUARIO -= 1;
		}
		
		if(JUGADA == 3 && CPU == 2){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
		}
		if(JUGADA == 3 && CPU == 1){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"PERDISTE ESTA RONDA."<<endl;
			VIDAS_DEL_USUARIO -= 1;
		}
		if(JUGADA == 2 && CPU == 1){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"FELICIDADES, GANASTE ESTA RONDA."<<endl;
		}
		if(JUGADA == 2 && CPU == 3){
			cout<<"EL CPU ELIGIO "<<CPU<<" TU ELEGISTE "<<JUGADA<<endl;
			cout<<"PERDISTE ESTA RONDA."<<endl;
			VIDAS_DEL_USUARIO -= 1;
		}
		
		
	}while(VIDAS_DEL_USUARIO != 0);
	
	
	
	return 0;
} 
	
	
	
	
	


