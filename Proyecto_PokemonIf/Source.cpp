/*ESTE ES UN PROGRAMA CREADO POR LEONARDO MEDELL�N*/

#include<iostream>
#include <windows.h>
#include<string>
#include<stdio.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");

	char nombre[15];
	int pokemon, decision, mov1, mov2, mov3, mov4, mov5, mov6, mov7, mov8, mov9, mov10;
	
	/*AQU� SE PRESENTA EL PROFESOR OAK*/

	cout << "�Hola! ��ste es el mundo de Pok�mon!"; Sleep(2000);
	cout << " �Me llamo Oak!"; Sleep(2000);
	cout << " Pero la gente me llama Profesor Pok�mon." << endl; Sleep(2000);
	cout << "Este mundo est� habitado por unas criaturas llamadas Pok�mon."; Sleep(2000);
	cout << " Hoy vas a iniciar tu propia aventura." << endl; Sleep(2000);
	cout << "Antes que nada dime:"; Sleep(1000);
	cout << " �Cu�l es tu nombre?: "; cin >> nombre; Sleep(500);
	cout << "\nAs� que te llamas " << nombre << ", encantado de conocerte." << endl; Sleep(2000);
	cout << "�Muy bien ahora vas a elegir a tu primer Pok�mon!" << endl; Sleep(2000);
	cout << "1. Bulbasaur el Pok�mon tipo Planta" << endl; Sleep(2000);
	cout << "2. Charmander el Pok�mon tipo Fuego" << endl; Sleep(2000);
	cout << "3. Squirtle el Pok�mon tipo Agua" << endl; Sleep(2000);
	cout << "Porfavor elige el n�mero correspondiente a tu Pok�mon: "; cin >> pokemon; Sleep(2000);


	/*AQU� ELIGES A TU POK�MON*/

	switch (pokemon)
	{
		case 1:
			cout << "\n�As� que Bulbasaur! resulta muy f�cil criarlo." << endl; Sleep(2000);
			cout << "Su HP es de 100, su ataque de 35 y sus movimientos son Placaje y Gru�ido." << endl; Sleep(2000);
			cout << "�Ahora tendr�s una batalla contra m� para pr�cticar!" << endl << endl; Sleep(2000);
			cout << "�El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
			cout << "�Profesor Oak envia a Charmander!" << endl; Sleep(2000);
			cout << "�Adelante Bulbasaur!" << endl << endl;; Sleep(2000);
			break;

		case 2:
			cout << "\n�As� que Charmander! pues ten paciencia con �l." << endl; Sleep(2000);
			cout << "Su HP es de 100, su ataque de 35 y sus movimientos son Placaje y Gru�ido." << endl; Sleep(2000);
			cout << "�Ahora tendr�s una batalla contra m� para pr�cticar!" << endl << endl; Sleep(2000);
			cout << "�El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
			cout << "�Profesor Oak envia a Squirtle!" << endl; Sleep(2000);
			cout << "�Adelante Charmander!" << endl << endl; Sleep(2000);
			break;

		case 3:
			cout << "\n�As� que Squirtle! vale la pena, s�, s�." << endl; Sleep(2000);
			cout << "Su HP es de 100, su ataque de 35 y sus movimientos son Placaje y Gru�ido." << endl; Sleep(2000);
			cout << "�Ahora tendr�s una batalla contra m� para pr�cticar!" << endl << endl; Sleep(2000);
			cout << "�El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
			cout << "�Profesor Oak envia a Bulbasaur!" << endl; Sleep(2000);
			cout << "�Adelante Squirtle!" << endl << endl;; Sleep(2000);
			break;

		default:
			cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
			return main();
			break;
	}

	cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov1;

	/*AQU� INICIA LA BATALLA*/
	
	switch (mov1)
	{
		case 1: //(1)
			cout << "Elegiste Placaje." << endl; Sleep(1000);
			cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
			cout << "El rival us� Gru�ido." << endl; Sleep(1000);
			cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
			cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov2;
			switch (mov2)
				{
					case 1: //(1 - 1)
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
						cout << "El rival us� Gru�ido." << endl; Sleep(1000);
						cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
						cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov3;
						switch (mov3)
							{
								case 1: //(1 - 1 - 1)
									cout << "Elegiste Placaje." << endl; Sleep(1000);
									cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 65." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(1 - 1 - 1 - 1 = Victoria)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
												cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
												cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
												cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
												break;
												
											case 2: //(1 - 1 - 1 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 35." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 1 - 1 - 2 - 1 = Victoria)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
															cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
															cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
															cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
															break;

														case 2: //(1 - 1 - 1 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 1 - 1 - 2 - 2 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 1 - 1 - 2 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								case 2: //(1 - 1 - 2)
									cout << "Elegiste Gru�ido." << endl; Sleep(1000);
									cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(1 - 1 - 2 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 1 - 2 - 1 - 1 = Victoria)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
															cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
															cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
															cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
															break;

														case 2: //(1 - 1 - 2 - 1 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{ 
																	case 1: //(1 - 1 - 2 - 1 - 2 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 1 - 2 - 1 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(1 - 1 - 2 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 1 - 2 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 1 - 2 - 2 - 1 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 1 - 2 - 2 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(1 - 1 - 2 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 1 - 2 - 2 - 2 - 1)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(1 - 1 - 2 - 2 - 2 - 1 - 1 = Victoria)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																					cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																					cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																					cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(1 - 1 - 2 - 2 - 2 - 1 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	case 2: //(1 - 1 - 2 - 2 - 2 - 2)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(1 - 1 - 2 - 2 - 2 - 2 - 1 = Derrota)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(1 - 1 - 2 - 2 - 2 - 2 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								default:
									cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
									return main();
									break;
							}
						break;

					case 2: //(1 - 2)
						cout << "Elegiste Gru�ido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
						cout << "El rival us� Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
						cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov3;
						switch (mov3)
							{
								case 1: //(1 - 2 - 1)
									cout << "Elegiste Placaje." << endl; Sleep(1000);
									cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
									cout << "El rival us� Gru�ido." << endl; Sleep(1000);
									cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(1 - 2 - 1 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 2 - 1 - 1 - 1 = Victoria)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
															cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
															cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
															cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
															break;

														case 2: //(1 - 2 - 1 - 1 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 1 - 1 - 2 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 2 - 1 - 1 - 2 - 1 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(1 - 2 - 1 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 2 - 1 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 1 - 2 - 1 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 2 - 1 - 2 - 1 - 1 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(1 - 2 - 1 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 1 - 2 - 2 - 1)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(1 - 2 - 1 - 2 - 2 - 1 - 1 = Victoria)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																					cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																					cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																					cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(1 - 2 - 1 - 2 - 2 - 1 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;

																			}
																		break;

																	case 2: //(1 - 2 - 1 - 2 - 2 - 2)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(1 - 2 - 1 - 2 - 2 - 2 - 1 = Derrota)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(1 - 2 - 1 - 2 - 2 - 2 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								case 2: //(1 - 2 - 2)
									cout << "Elegiste Gru�ido." << endl; Sleep(1000);
									cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(1 - 2 - 2 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
												cout << "El rival us� Gru�ido." << endl; Sleep(1000);
												cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 2 - 2 - 1 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 2 - 1 - 1 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 2 - 2 - 1 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;
																}
															break;

														case 2: //(1 - 2 - 2 - 1 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 2 - 1 - 2 - 1)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1:
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																					cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																					cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																					cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																					break;

																				case 2:
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	case 2: //(1 - 2 - 2 - 1 - 2 - 2)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(1 - 2 - 2 - 1 - 2 - 2 - 1 = Derrota)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(1 - 2 - 2 - 1 - 2 - 2 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(1 - 2 - 2 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(1 - 2 - 2 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 2 - 2 - 1 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 2 - 2 - 2 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;
																}
															break;

														case 2: //(1 - 2 - 2 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(1 - 2 - 2 - 2 - 2 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(1 - 2 - 2 - 2 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								default:
									cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
									return main();
									break;
							}
						break;

					default:
						cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
				}
			break;

		case 2: //(2)
			cout << "Elegiste Gru�ido." << endl; Sleep(1000);
			cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
			cout << "El rival us� Placaje." << endl; Sleep(1000);
			cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
			cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov2;
			switch (mov2)
				{
					case 1: //(2 - 1)
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
						cout << "El rival us� Gru�ido." << endl; Sleep(1000);
						cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
						cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov3;
						switch (mov3)
							{
								case 1: //(2 - 1 - 1)
									cout << "Elegiste Placaje." << endl; Sleep(1000);
									cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(2 - 1 - 1 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 1 - 1 - 1 - 1 = Victoria)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
															cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
															cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
															cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
															break;

														case 2: //(2 - 1 - 1 - 1 - 2 = Derrota)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
															cout << "�Que mal! Has perdido" << endl; Sleep(1000);
															cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
															cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(2 - 1 - 1 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 1 - 1 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 1 - 1 - 2 - 1 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 1 - 1 - 2 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(2 - 1 - 1 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 1 - 1 - 2 - 2 - 1)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(2 - 1 - 1 - 2 - 2 - 1 - 1 = Victoria)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																					cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																					cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																					cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(2 - 1 - 1 - 2 - 2 - 1 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	case 2: //(2 - 1 - 1 - 2 - 2 - 2)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(2 - 1 - 1 - 2 - 2 - 2 - 1 = Derrota)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(2 - 1 - 1 - 2 - 2 - 2 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								case 2: //(2 - 1 - 2)
									cout << "Elegiste Gru�ido." << endl; Sleep(1000);
									cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(2 - 1 - 2 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
												cout << "El rival us� Gru�ido." << endl; Sleep(1000);
												cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 1 - 2 - 1 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 1 - 2 - 1 - 1 - 1 = Victoria)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																		cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																		cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																		cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 1 - 2 - 1 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(2 - 1 - 2 - 1 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 1 - 2 - 1 - 2 - 1)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(2 - 1 - 2 - 1 - 2 - 1 - 1 = Victoria)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
																					cout << "�Felicidades! �Has ganado!" << endl; Sleep(1000);
																					cout << "�Has ganado 120 XP y has subido al nivel 6!" << endl; Sleep(1000);
																					cout << "El Profesor Oak ha pagado 500 Pok�dolares." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(2 - 1 - 2 - 1 - 2 - 1 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	case 2: //(2 - 1 - 2 - 1 - 2 - 2)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
																		cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov7;
																		switch (mov7)
																			{
																				case 1: //(2 - 1 - 2 - 1 - 2 - 2 - 1 = Derrota)
																					cout << "Elegiste Placaje." << endl; Sleep(1000);
																					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				case 2: //(2 - 1 - 2 - 1 - 2 - 2 - 2 = Derrota)
																					cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																					cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																					cout << "El rival us� Placaje." << endl; Sleep(1000);
																					cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																					cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																					cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																					cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																					break;

																				default:
																					cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																					return main();
																					break;
																			}
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(2 - 1 - 2 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 1 - 2 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{ 
																	case 1: //(2 - 1 - 2 - 2 - 1 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 1 - 2 - 2 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(2 - 1 - 2 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 1 - 2 - 2 - 2 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 1 - 2 - 2 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								default:
									cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
									return main();
									break;
							}
						break;

					case 2: //(2 - 2)
						cout << "Elegiste Gru�ido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
						cout << "El rival us� Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
						cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov3;
						switch (mov3)
							{
								case 1: //(2 - 2 - 1)
									cout << "Elegiste Placaje." << endl; Sleep(1000);
									cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
									cout << "El rival us� Gru�ido." << endl; Sleep(1000);
									cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(2 - 2 - 1 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 2 - 1 - 1 - 1 = Derrota)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
															cout << "�Que mal! Has perdido" << endl; Sleep(1000);
															cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
															cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
															break;

														case 2: //(2 - 2 - 1 - 1 - 2 = Derrota)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
															cout << "�Que mal! Has perdido" << endl; Sleep(1000);
															cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
															cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(2 - 2 - 1 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 2 - 1 - 2 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 2 - 1 - 2 - 1 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 2 - 1 - 2 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(2 - 2 - 1 - 2 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 2 - 1 - 2 - 2 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 2 - 1 - 2 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								case 2: //(2 - 2 - 2)
									cout << "Elegiste Gru�ido." << endl; Sleep(1000);
									cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
									cout << "El rival us� Placaje." << endl; Sleep(1000);
									cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
									cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov4;
									switch (mov4)
										{
											case 1: //(2 - 2 - 2 - 1)
												cout << "Elegiste Placaje." << endl; Sleep(1000);
												cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
												cout << "El rival us� Gru�ido." << endl; Sleep(1000);
												cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 2 - 2 - 1 - 1)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 2 - 2 - 1 - 1 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 2 - 2 - 1 - 1 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														case 2: //(2 - 2 - 2 - 1 - 2)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
															cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov6;
															switch (mov6)
																{
																	case 1: //(2 - 2 - 2 - 1 - 2 - 1 = Derrota)
																		cout << "Elegiste Placaje." << endl; Sleep(1000);
																		cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	case 2: //(2 - 2 - 2 - 1 - 2 - 2 = Derrota)
																		cout << "Elegiste Gru�ido." << endl; Sleep(1000);
																		cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
																		cout << "El rival us� Placaje." << endl; Sleep(1000);
																		cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
																		cout << "�Que mal! Has perdido" << endl; Sleep(1000);
																		cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
																		cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
																		break;

																	default:
																		cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
																		return main();
																		break;
																}
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											case 2: //(2 - 2 - 2 - 2)
												cout << "Elegiste Gru�ido." << endl; Sleep(1000);
												cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
												cout << "El rival us� Placaje." << endl; Sleep(1000);
												cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
												cout << "�Qu� deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gru�ido: "; cin >> mov5;
												switch (mov5)
													{
														case 1: //(2 - 2 - 2 - 2 - 1 = Derrota)
															cout << "Elegiste Placaje." << endl; Sleep(1000);
															cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
															cout << "�Que mal! Has perdido" << endl; Sleep(1000);
															cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
															cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
															break;

														case 2: //(2 - 2 - 2 - 2 - 2 = Derrota)
															cout << "Elegiste Gru�ido." << endl; Sleep(1000);
															cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
															cout << "El rival us� Placaje." << endl; Sleep(1000);
															cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
															cout << "�Que mal! Has perdido" << endl; Sleep(1000);
															cout << "�Has ganado 80 XP!" << endl; Sleep(1000);
															cout << "Has pagado 500 Pok�dolares al Profesor Oak." << endl << endl; Sleep(1000);
															break;

														default:
															cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
															return main();
															break;
													}
												break;

											default:
												cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
												return main();
												break;
										}
									break;

								default:
									cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
									return main();
									break;
							}
						break;

					default:
						cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
				}
			break;

		default:
			cout << "El n�mero ingresado es incorrecto, intenta de nuevo." << endl << endl;
			return main();
			break;
	}

	/*AQU� SE TERMINA LA BATALLA*/

	cout << "�Fue una muy buena batalla! Como pudiste observar al ganar o perder una batalla,"; Sleep(2000);
	cout << " �Tambi�n ganas o pierdes dinero! as� que se muy cuidadoso con tu dinero." << endl; Sleep(2000);
	cout << "�Ahora ve e inicia tu propia aventura!" << endl << endl; Sleep(2000);

	cout << "Si quieres repetir la simulaci�n ingresa 1, si deseas salir ingresa culaquier otra tecla: "; cin >> decision;

	switch (decision)
	{
		case 1:
		return main();

		default:
			cout << endl;
			exit;
	}

	return 0;

}