#include <iostream>
#include <string>
using namespace std;
class Jugador
{
private:
	short jugada;
public:
	int puntaje;
	short getJugada(){
		return jugada;
	}
		void setJugada(short newJugada){
			jugada = newJugada;
		}
};
void mostrarFigura(short j){
	if (j == 1 ) cout << "()";
	else if (j == 2) cout << "[]";
	else if (j == 3) cout <<"8<";
}
	int main(int argc, char *argv[]) 
	{
		Jugador j1, j2;
		short aux;
		cout <<"····Piedra Papel o Tijeras····"<<endl;
		cout <<"  1 = Piedra ()"<<endl;
		cout <<"  2 = Papel[]"<<endl;
		cout <<"  3 = Tijera 8<"<<endl;
		cout <<"Jugador 1, elija su jugada"<<endl;
		cin >> aux;
		j1.setJugada(aux);
		cout <<"Jugador 2, elija su jugada"<<endl;
		cin >> aux;
		j2.setJugada(aux);
		mostrarFigura(j1.getJugada());
		cout << "  VS  ";
		mostrarFigura(j2.getJugada());
		cout << endl << endl;
		if(j1.getJugada() == j2.getJugada()){
			cout <<"Empate"<<endl;
		}else if(
				 (j1.getJugada()== 1 && j2.getJugada() == 3) ||
				 (j1.getJugada() == 2 && j2.getJugada() == 1) ||
				 (j1.getJugada() == 3 && j2.getJugada() == 2)){
			cout <<"Gano el Jugador 1";
			j1.puntaje++;
		}else (
			   (j1.getJugada()== 3 && j2.getJugada() == 1) ||
			   (j1.getJugada() == 1 && j2.getJugada() == 2) ||
			   (j1.getJugada() == 2 && j2.getJugada() == 3)) ;{
					 cout <<"Gano el Jugador 2";
						 j2.puntaje++;
				 }
			   return 0;
	}
