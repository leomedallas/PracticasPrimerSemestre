/*LEONARDO MEDELL�N RAM�REZ - zap292 - PROYECTO: HISTORIA NARRADA EN CONSOLA.*/

#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <locale>
#include<stdlib.h>
#include<time.h>
#include<MMSystem.h>

using namespace std;

/*Funci�n para imprimir letra por letra en consola.*/

void text(string text)
{
	for (int i = 0; i < text.size(); i++)
	{
		if (GetKeyState(' ') & 0x8000)
			Sleep(0);
		else
			Sleep(50);
		cout << text[i];
	}
}

/*Funci�n para terminar el programa.*/

void end(int salir)
{
	switch (salir)
	{
	case 1:
		system("CLS");
		int main();
		break;
	default:
		exit;
		break;
	}
}

/*Main del juego.*/

int main()
{
	/*C�digo para imprimir signos en espa�ol en consola.*/
	
	setlocale(LC_ALL, "spanish");
	
	/*Declaraci�n de variables.*/

	 int decision, salir = 0;

	/*Presentaci�n del juego.*/

	text("�Hola! este es un proyecto para mi Universidad, actualmente estudio Desarrollo de Software Interactivo.\n"); Sleep(500);
	text("Te voy a contar una historia d�nde tu tomar�s las decisiones del personaje principal.\n"); Sleep(500); 
	text("Te aparecer�n diferentes decisiones en consola que podr�s tomar escribiendo en tu teclado el n�mero de dicha decisi�n.\n"); Sleep(500);
	text("Ahora va un ejemplo:\n\n"); Sleep(500);
	text("�Qu� artista era mejor?\n\n"); Sleep(500);
	text("  1. Freddie Mercury\n"); Sleep(500);
	text("  2. Michael Jackson\n\n");
	cin >> decision; Sleep(500);
	if (decision == 1)
	{
		PlaySound(TEXT("eo.wav"), NULL, SND_SYNC);
		text("\n\nEooo!\n\n");
	}
	else
	{
		PlaySound(TEXT("annie.wav"), NULL, SND_SYNC);
		text("\n\nAnnie, are you okay?\n\n");
	}
	Sleep(500);
	text("Ya que lo entendiste, �Comencemos!");
	Sleep(1000);
	system("CLS");

	/*Historia*/

	decision = 0;
	text("�Quien con monstruos lucha cuide de convertirse a su vez en monstruo. Cuando miras largo tiempo a un abismo, el abismo tambi�n mira dentro de ti.� "); Sleep(500);
	text("�Friedrich Wilhelmt Nietzsche."); Sleep(500);
	system("CLS");
	PlaySound(TEXT("alarma.wav"), NULL, SND_SYNC);
	Sleep(1000);  text("- Roberto, "); Sleep(500); text("Roberto, "); Sleep(500); text("cari�o, "); Sleep(500);
	text("despierta, es hora de ir a la escuela. "); Sleep(500);
	text("Tu pap� no quiere que llegues tarde hoy, baja a desayunar.\n"); Sleep(500);
	text("- Buenos d�as pap�.\n"); Sleep(500);
	text("- Buenos d�as, tu madre prepar� huevos y tocino.\n"); Sleep(500);
	text("- (Agh, odio el tocino).\n\n"); Sleep(500);
	text("�Qu� te haces?\n\n"); Sleep(500);
	text("  1. Servirte los huevos.\n"); Sleep(500);
	text("  2. Preparar un cereal.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Si, gracias pap�.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Creo que mejor me prepar� un cereal.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- �Listo para tu primer d�a de clases? Hoy inicias la preparatoria, "); Sleep(500);
	text("espero que est�s listo y no seas el peor de tu clase de nuevo.\n"); Sleep(500);
	text("- Si pap�, har� mi mejor esfuerzo (que pesado eres).\n"); Sleep(500);
	text("- Bien, termina de comer y al�state, no quiero que llegues tarde. "); Sleep(500);
	text("Y v�stete bien no quiero que parezcas uno de esos adolescentes drogadictos otra vez.\n"); Sleep(500);
	text("- (Pap� quiere que me ponga esa est�pida camisa, pero es muy inc�modo, "); Sleep(500);
	text("a lo mejor si me pongo una sudadera quiz�s no note que llevo puesto).\n\n"); Sleep(500);
	text("�Qu� te pones?\n\n"); Sleep(500);
	text("  1. Camisa.\n"); Sleep(500);
	text("  2. Sudadera para despistar.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Bien hijo, por una vez pareces una persona decente, es hora de irnos.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- �Y esa sudadera?\n"); Sleep(500);
		text("� Solo me la puse porque tengo fr�o.\n"); Sleep(500);
		text("� Espero que te la quites cuando llegues a la escuela, pareces vagabundo, ya v�monos.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Bueno gracias pap�, te llam� cuando termin� la escuela.\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Est� bien hijo, ten un buen d�a, y recuerda nada de decepcionarme otra vez.\n"); Sleep(500);
		text("- (Bueno me ha dicho cosas peores)\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Si si hijo, ya b�jate del auto tengo cosas que hacer, "); Sleep(500);
		text("y recuerda nada de decepcionarme otra vez.\n"); Sleep(500);
		text("- (�Nada de decepcionarme otra vez�, "); Sleep(500);
		text("que ganas de que cierre esa gran bocota que tiene)\n"); Sleep(500);
	}
	text("- (En fin, el primer d�a de escuela, espero que Adri�n llegue pronto, odio tener que conocer gente nueva)\n"); Sleep(500);
	if (decision == 1)
	{
		text("- �Hey bro! �Y esa linda camisa que llevas puesta? No me digas que papi te est� vistiendo otra vez.\n"); Sleep(500);
		text("- Hola Adri�n, se puso pesado de nuevo, ya sabes c�mo es.\n"); Sleep(500);
		text("- Pues esperemos que las chicas no te ignoren con ese look.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- �Uff hermano! Que fresco te ves con ese atuendo.\n"); Sleep(500);
		text("- Hola Adri�n, gracias mi pap� quer�a que usar� una camisa, pero no quiero da�ar mi reputaci�n el primer d�a de clases.\n"); Sleep(500);
	}
	system("CLS");
	text("- �Listo para tu primer d�a?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Solo espero que me vaya bien en mis notas, no quiero que pap� se enoje otra vez.\n"); Sleep(500);
		text("- �Qu� te vaya bien en tus notas? Que est�s diciendo hermano, la preparatoria es para divertirse y pasarla bien.\n"); Sleep(500);
		text("- Es muy f�cil para ti decirlo, ya tienes 3 a�os aqu�.\n"); Sleep(500);
		text("- Mira vamos paso por paso, lo primero es que pierdas esa timidez para hablar con chicas.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Creo que s�, pap� quiere que entregue �excelentes notas�, "); Sleep(500);
		text("pero yo solo quiero divertirme y pasarla bien.\n"); Sleep(500);
		text("- Venga hermano, creo que yo soy el indicado para eso.\n"); Sleep(500);
		text("- Con tus 3 a�os de experiencia yo creo que s�.\n"); Sleep(500);
		text("- Bueno, �Qu� te parece si vamos comenzando? Y trabajamos en tu timidez para hablar con chicas.\n"); Sleep(500);
	}
	text("- �Ves a esa chica de ah�?, es Sof�a de segundo a�o, durante el verano termin� con su novio Chad.\n"); Sleep(500);
	text("- �Chad? �As� se llama?\n"); Sleep(500);
	text("- No bro, es un, "); Sleep(500);
	text("sabes que olv�dalo, su nombre es Cesar.\n"); Sleep(500);
	text("- �Pero que no ella es de las populares? Nunca le pondr�a atenci�n a alguien como yo.\n"); Sleep(500);
	text("- Tengo un plan solo ve a presentarte.\n"); Sleep(500);
	system("CLS");
	text("- Emm, Hola Sof�a.\n"); Sleep(500);
	text("- �Y t� qui�n eres?\n"); Sleep(500);
	text("- Soy Roberto, mucho gusto.\n"); Sleep(500);
	text("- �Con que Roberto eh? Y dime �Qu� se te ofrece?\n\n"); Sleep(500);
	text("�Que le contestas?\n\n"); Sleep(500);
	text("  1. - Solo quer�a... ya sabes presentarme, soy nuevo en la escuela...\n"); Sleep(500);
	text("  2. - Quer�a presentarme, soy nuevo en la escuela, y me pareciste muy atractiva.\n"); Sleep(500);
	text("  3. - Solo quer�a saludar a la chica m�s hermosa de aqu�, y que tal vez me not� un poco.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- �Okey? Pues mucho gusto, espero verte por aqu� (o mejor no)\n"); Sleep(500);
		text("- Emm, si, hasta luego, buenas tardes (��Buenas tardes!?, soy un imb�cil)\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Me agrada tu confianza, y eres algo lindo tambi�n, mucho gusto amigo, espero vernos m�s seguido por aqu�.\n"); Sleep(500);
		text("- As� ser�, no te preocupes, hasta luego.\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Tranquilo tigre, pues con esa confianza tal vez no sea a la �nica que quieres que te note.\n"); Sleep(500);
		text("- Pero solo quiero que t� lo hagas.\n"); Sleep(500);
		text("- Pues tendr�s que hacer algo mejor que esto para que suceda, necesito ir a clase, adi�s.\n"); Sleep(500);
		text("- �Emm?, si hasta luego (maldita sea, apenas y le hablo y cree que soy un cretino).\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	system("CLS");
	text("- �Y qu� tal?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Bastante mal para mi primer encuentro.\n"); Sleep(500);
		text("- �nimo hermano, ya caer� ante tus encantos, "); Sleep(500);
		PlaySound(TEXT("escuela.wav"), NULL, SND_SYNC);
		text("bueno tengo clase, suerte en tu d�a.\n"); Sleep(500);
		text("- Si, gracias Adri�n.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Pues dijo que esperaba verme m�s seguido por aqu� (y que soy lindo), creo que le agrad�.\n"); Sleep(500);
		text("- Pues buen comienzo hermano, pronto Sof�a estar� bajo tus pies. "); Sleep(500);
		PlaySound(TEXT("escuela.wav"), NULL, SND_SYNC);
		text("En fin, tengo clase de biolog�a as� que me tengo que ir.\n"); Sleep(500);
		text("- Si hermano, nos vemos despu�s de clases.\n"); Sleep(500);
		text("- �Suerte en tu d�a!\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		text("- Parece que cree que soy un cretino.\n"); Sleep(500);
		text("- Tranquilo hermano, las chicas adoran a los cretinos, "); Sleep(500);
		PlaySound(TEXT("escuela.wav"), NULL, SND_SYNC);
		text("bueno tengo clase de historia, tengo que irme.\n"); Sleep(500);
		text("- Si claro, nos vemos en un rato.\n"); Sleep(500);
	}
	system("CLS");
	text("- Pasen muchachos, ya es hora de iniciar la clase.\n\n"); Sleep(500);
	text("�D�nde te sientas?\n\n"); Sleep(500);
	text("  1. - En frente\n"); Sleep(500);
	text("  2. - En medio\n"); Sleep(500);
	text("  3. - Atr�s\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("(S� en frente, tengo que tener buenas notas)\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("(S� en medio, escucho bien al profesor y no me veo como un nerd)\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("(S� atr�s, las personas divertidas se sientan hasta atr�s, �no?)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Yo soy el profesor Fern�ndez, bienvenidos a su clase de l�gica matem�tica...\n"); Sleep(500);
	text("- Bastante aburrido �no?, soy Miguel, mucho gusto.\n"); Sleep(500);
	text("- Yo soy Roberto.\n"); Sleep(500);
	text("- Y la se�orita que est� a tu lado es un encanto.\n"); Sleep(500);
	text("- Que tal, yo soy Laura.\n\n"); Sleep(500);
	text("�Qu� contestas?\n\n"); Sleep(500);
	text("  1. - �Ustedes ya se conoc�an antes?\n"); Sleep(500);
	text("  2. - (Pues no se ve tan encantadora), �Y ustedes dos est�n saliendo?\n"); Sleep(500);
	text("  3. - S� que eres un encanto.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Si, nuestros padres son mejores amigos y nos conocemos desde ni�os.\n"); Sleep(500);
		text("- As� es, 16 a�os soportando a este imb�cil.\n"); Sleep(500);
		text("- Tranquila Laura, no espantes a nuestro nuevo amigo, se una ternurita como siempre (si es que alguna vez lo has sido).\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Ja, �Yo saliendo con el imb�cil de Miguel? S� que eres gracioso. \n"); Sleep(500);
		text("- Los padres de la se�orita pretenciosa son mejores amigos de los m�os, "); Sleep(500);
		text("as� que se podr�a decir que llevamos una relaci�n bastante inusual desde ni�os, �verdad que si coraz�n?\n"); Sleep(500);
		text("- Ya c�llate de una vez Miguel, no quiero que piensen que estamos saliendo o algo as�.\n"); Sleep(500);
		text("- Se ve que se llevan bastante bien.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Wow, alto ah�, no te recomendar�a salir con Laura, puede ser un tanto� especial.\n"); Sleep(500);
		text("- D�jalo Miguel, vamos a ver hasta d�nde puede llegar, �verdad primor?\n"); Sleep(500);
		text("- Podemos averiguarlo.\n"); Sleep(500);
		text("- Yo solo dec�a, conozco a Laura desde ni�os, pero ser�a interesante ver algo as�.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- �Hey! ustedes 3, dejen de hablar y tomen nota por favor.\n"); Sleep(500);
	text("- Si profesor, lo sentimos.\n"); Sleep(500);
	text("- Oye Roberto, dime, �te gusta divertirte?\n\n"); Sleep(500);
	text("�Qu� contestas?\n\n"); Sleep(500);
	text("  1. - Emm, creo que s�.\n"); Sleep(500);
	text("  2. - Depende de tu definici�n de diversi�n.\n"); Sleep(500);
	text("  3. - �Por supuesto que s�!\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- No lo intimides Miguel, deja que respire, se ve un poco tenso.\n"); Sleep(500);
		text("- Yo solo preguntaba, me gustar�a pasar un buen rato con mi nuevo amigo, �t� que dices?\n"); Sleep(500);
		text("- Emm, supongo que s�, tal vez podr�amos conocernos mejor.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Ya sabes, pasar un buen rato con amigos platicar y simplemente perder el tiempo.\n"); Sleep(500);
		text("- En ese caso, s�, me gusta divertirme.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Shh, guarden silencio all� atr�s.\n"); Sleep(500);
		text("- Lo siento, profesor.\n"); Sleep(500);
		text("- Entonces te gusta la diversi�n, te ves muy entusiasmado.\n"); Sleep(500);
		text("- Creo que si lo estoy ja.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Eso quer�a escuchar, mi pap� tiene un viejo departamento cerca de aqu�, �Quieres ir un rato despu�s de clases?\n\n"); Sleep(500);
	text("�Que contestas?\n\n"); Sleep(500);
	text("  1. - Emm, no lo s�, mi pap� me recoger� despu�s de clases.\n"); Sleep(500);
	text("  2. - �Qu� tan lejos esta est� lugar de aqu�?\n"); Sleep(500);
	text("  3. - Mi pap� iba a recogerme despu�s de clases, pero al diablo, me apunto.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Vamos amigo, no est� tan lejos, le puedes decir a tu pap� que alargaron la inducci�n de la escuela y que mi pap� te dar� un avent�n.\n"); Sleep(500);
		text("- No lo s�, mi pap� es un poco temperamental.\n"); Sleep(500);
		text("- An�mate es el primer d�a, t� mismo dijiste que debemos de conocernos mejor, �no?\n"); Sleep(500);
		text("- Emm, creo que s�, est� bien, hablar� con mi pap�.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Solo un par de cuadras lejos de aqu�, si es necesario puedo darte un avent�n a tu casa.\n"); Sleep(500);
		text("- �Tienes d�nde llevarme?\n"); Sleep(500);
		text("- Si, la vieja carcacha que me dio mi pap�, pero sirve para llevarte.\n"); Sleep(500);
		text("- Pues si ese es el caso, creo que puedo hablar con mi pap�.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- �Esa es la actitud que me gusta! Se nota que quieres pasar un buen rato �No hay problema con tu pap�?\n"); Sleep(500);
		text("- Tal vez, pero no es la primera vez que piensa que soy una basura (Tal vez deber�a avisarle que llegar� tarde)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Bien, pues en ese caso, nos vemos despu�s de clase, �vale?\n"); Sleep(500);
	text("- Esta bien, los veo despu�s chicos.\n"); Sleep(500);
	text("- Hasta luego Roberto.\n"); Sleep(500);
	text("- �Qu� piensas del chico?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Algo t�mido, pero me agrada.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Es bastante astuto, no es muy persuasible.\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		text("- Es alguien muy persuasible, creo que no ser� de mucha utilidad.\n"); Sleep(500);
	}
	system("CLS");
	text("- Qu� onda hermano, �Qu� tal va tu d�a?\n"); Sleep(500);
	text("- Hola Adri�n, bastante bien, conoc� a unos chicos, Miguel y Laura.\n"); Sleep(500);
	text("- Unos chicos rubios y �relajados�.\n"); Sleep(500);
	text("- S�, creo que son ellos. Me invitaron a un departamento despu�s de clases.\n"); Sleep(500);
	text("- No te recomiendo juntarte con ellos, sus padres est�n metidos en cosas raras.\n"); Sleep(500);
	text("- �Qu� clase de cosas?\n"); Sleep(500);
	text("- No lo s� hermano, pero me han advertido de ellos.\n\n"); Sleep(500);
	text("�Qu� respondes?\n\n"); Sleep(500);
	text("  1. - Tal vez deber�a de cancelarles...\n"); Sleep(500);
	text("  2. - Tomar� mis precauciones.\n"); Sleep(500);
	text("  3. - Pues creo que deber�as meterte en tus propios asuntos.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Solo digo que lo tomes con calma. Apenas es tu primer d�a, no trates de comerte el mundo a mordidas\n"); Sleep(500);
		text("- Si hermano, gracias.\n"); Sleep(500);
		text("- No te preocupes, para eso cuido a mi hermanito. Nos vemos despu�s.\n"); Sleep(500);
		text("- Adi�s hermano.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Creo que lo mejor ser�a que no fueras con ellos.\n"); Sleep(500);
		text("- Tranquilo hermano, puedo lidiar con ellos, gracias.\n"); Sleep(500);
		text("- Solo cu�date hermano, nos vemos despu�s.\n"); Sleep(500);
		text("- Hasta luego hermano.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Wow tranquilo hermano solo trato de protegerte.\n"); Sleep(500);
		text("- Pues no necesito protecci�n solo quiero divertirme, t� lo dijiste antes, �no es as�?\n"); Sleep(500);
		text("- Te estas comportando como un cretino. Suerte, idiota.\n"); Sleep(500);
		text("- Esta bien �Vete! (Quien te necesita)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- �Hey Roberto! Es hora de irnos\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Hola Miguel, habl� con mi pap� y no le pareci� que los acompa��.\n"); Sleep(500);
		text("- �Ya viene hac�a ac�?\n"); Sleep(500);
		text("- No, se le hizo un poco tarde y se retras� un poco.\n"); Sleep(500);
		text("- Entonces ven, no nos tomar� m�s de quince minutos.\n"); Sleep(500);
		text("- No lo s�.\n"); Sleep(500);
		text("- Venga an�mate.\n\n"); Sleep(500);
		text("�Qu� haces?\n\n"); Sleep(500);
		text("  1. Ir\n"); Sleep(500);
		text("  2. No ir\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
		case 1:
		{
			text("- Venga, que podr�a salir mal, vam�nos\n\n"); Sleep(500);
			break;
		}
		case 2:
		{
			system("CLS");
			text("- Creo que por esta vez paso, lo siento.\n"); Sleep(500);
			text("- Esta bien Roberto, t� te lo pierdes.\n\n"); Sleep(500);
			text("Esa misma tarde, cuando Roberto iba camino a su casa en el auto de su pap�.\n\n"); Sleep(500);
			text("- Oye pap�...\n"); Sleep(500);
			text("- Calla hijo, entro una llamada importante "); Sleep(500);
			text("�Bueno?, "); Sleep(500);
			text("claro a sus �rdenes, "); Sleep(500);
			text("creo que ese tema se habla directamente con los proveedores debido a que...\n"); Sleep(500);
			text("- (�Qu� tengo que hacer para que me escuches un segundo?) "); Sleep(500);
			text("�Pap� cuidado!\n\n"); Sleep(500);
			PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
			text("Ese d�a Roberto y su padre sufrieron un accidente, lamentablemente Roberto perdi� su vida, acabando as� con la historia de nuestro protagonista.\n"); Sleep(500);
			system("CLS");
			text("F"); Sleep(500);
			text("i"); Sleep(500);
			text("n"); Sleep(500);
			text("."); Sleep(500);
			break;
		}
		default:
		{
			system("CLS");
			text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
			text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
			cin >> salir;
			end(salir);
		}
		}
	}
	else if (decision == 2)
	{
		text("- Ya habl� con mi pap�, estoy listo.\n"); Sleep(500);
		text("- Eso es lo que quer�a escuchar, pues venga, v�monos.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		text("- Estoy listo.\n"); Sleep(500);
		text("- �Hablaste con tu pap�?\n"); Sleep(500);
		text("- No necesito el permiso de ese vejete.\n"); Sleep(500);
		text("- �Est�s seguro?, bueno si t� lo dices es hora de irnos.\n\n"); Sleep(500);
	}
	text("- Hemos llegado.\n"); Sleep(500);
	text("- Adelante pasa.\n"); Sleep(500);
	text("- Es un lindo lugar, �no?\n\n"); Sleep(500);
	text("�Qu� respondes?\n\n"); Sleep(500);
	text("  1. - Emm s�, es lindo.\n"); Sleep(500);
	text("  2. - Un poco sucio pero agradable.\n"); Sleep(500);
	text("  3. - �Creo que este lugar es genial!\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Venga rel�jate nada malo pasar� con tu pap�.\n"); Sleep(500);
		text("- Emm, �qu� es eso?\n"); Sleep(500);
		text("- �Esto? Es una cosita con la que nos vamos a divertir.\n"); Sleep(500);
		text("- Pero �qu� es?\n"); Sleep(500);
		text("- Es un �cido hermano, lo pones justo as� debajo de la lengua y te relajas. �Quieres un poco?\n"); Sleep(500);
		text("- Emm, s�.\n\n"); Sleep(500);
		text("30 minutos m�s tarde\n\n"); Sleep(1000);
		text("- �C�mo te sientes?\n"); Sleep(500);
		text("- Bastante bien, jajaja, pero todo se ve muy diferente.\n"); Sleep(500);
		text("- Te da una perspectiva diferente, �no?\n"); Sleep(500);
		text("- S�, creo que veo cosas que antes no ve�a.\n"); Sleep(500);
		text("- A si, �c�mo qu�?\n"); Sleep(500);
		text("- Como mi pap� sabes, �l es un idiota, alguien que quiere controlar a todos y todo lo que pasa a su alrededor.\n"); Sleep(500);
		text("- Eso suena como el gobierno.\n"); Sleep(500);
		text("- Teor�as conspirativas.\n"); Sleep(500);
		text("- No, hermano en serio, el gobierno controla nuestras decisiones, el c�mo llegamos aqu�, las decisiones que evadimos no fueron tomadas por nuestra cuenta, de alguna forma ellos piensan por ti, hay algo o alguien que hace nuestro siguiente movimiento.\n"); Sleep(500);
		text("- Creo que te est� afectando mucho hermano.\n"); Sleep(500);
		text("- No, te mostrar� mi punto Roberto, ven.\n"); Sleep(500);
		text("- Wow, �qu� rayos haces con eso?\n"); Sleep(500);
		text("- Esto es una pistola, uno de los dos recibir� una bala en la cabeza, tu decidir�s quien.\n"); Sleep(500);
		text("- No, �Espera! ��Est�s loco?! �No puedo decidir algo as�!\n\n"); Sleep(500);
		text("- Tranquilo, tu no decidir�s probar� mi punto y alguien m�s lo har� por ti. Entonces �Qui�n ser�?\n\n"); Sleep(500);
		text("  1. Roberto\n"); Sleep(500);
		text("  2. Miguel\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
			case 1:
			{
				system("CLS");
				text("- Emm, "); Sleep(500);
				text("yo, "); Sleep(500);
				text("no espera quise decir tu, "); Sleep(500);
				text("no s� qu� pas�.\n"); Sleep(500);
				text("- �Lo ves? Tomaron la decisi�n.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- En otras noticias, Roberto Rodr�guez un joven de 16 a�os fue asesinado despu�s del impacto de una bala en su cr�neo, al parecer un compa�ero fue el que dispar� el arma de fuego, para despu�s dispararse a s� mismo en la cabeza, acabando con su vida al instante, seg�n la autopsia ambos j�venes estaban bajo el efecto de LSD, un �cido que afecta la realidad y el criterio de las personas. Otra compa�era testigo del acontecimiento asegur� que antes de los hechos tuvieron una discusi�n de conspiraci�n, aparentemente los j�venes cre�an que alguien o algo tomaban las decisiones por ellos. Pero �ser� eso cierto? �Existir� alguien que tome las decisiones y rumbo de esta historia?\n\n"); Sleep(500);
				text("F"); Sleep(500);
				text("i"); Sleep(500);
				text("n"); Sleep(500);
				text(".\n"); Sleep(500);
				break;
			}
			case 2:
			{
				system("CLS");
				text("- Emm, "); Sleep(500);
				text("tu, "); Sleep(500);
				text("disparate si quieres.\n"); Sleep(500);
				text("- Bien, as� que eso es lo que decidieron.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- No puede ser no lo puedo creer.\n"); Sleep(500);
				text("- �Qu� fue ese ruido? "); Sleep(500);
				text("��Miguel, que le pas�?! ��Lo asesinaste?!\n"); Sleep(500);
				text("- No, �l dec�a cosas raras, que alguien toma nuestras decisiones y se dispar� a s� mismo.\n"); Sleep(500);
				text("�Qu� respondes?\n\n"); Sleep(500);
				text("  1. - �Debes creerme Laura yo no lo hice!\n"); Sleep(500);
				text("  2. - �Me vas a delatar?\n\n"); Sleep(500);
				cin >> decision;
				switch (decision)
				{
					case 1:
					{
						system("CLS");
						text("- Si llam� a la polic�a creer�n que yo te ayude en esto, debo irme.\n"); Sleep(500);
						text("- Pero y �yo qu� hago?\n"); Sleep(500);
						text("- No lo s� Roberto todo esto es tu l�o.\n\n"); Sleep(500);
						text("�Qu� haces?\n\n"); Sleep(500);
						text("  1. Buscar d�nde enterrar el cuerpo.\n"); Sleep(500);
						text("  2. Irte del lugar.\n\n"); Sleep(500);
						cin >> decision;
						switch (decision)
						{
							case 1:
							{
								system("CLS");
								text("- (Mejor busco donde enterrarlo)\n"); Sleep(500);
								text("- (Tal vez deber�a enterrarlo en un parque, o arrojarlo por un puente, o tal vez hundir el carro, o simplemente ir con la polic�a maldita sea no s� qu� hacer).\n"); Sleep(500);
								PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC); Sleep(1000);
								system("CLS");
								text("- En otras noticias, Roberto Rodr�guez, un joven de 16 a�os aparentemente bajo el efecto del LSD sufri� un accidente de auto y muri� al instante, el joven pose�a un cuerpo irreconocible en la cajuela del mismo, se sospecha que era Miguel Mora, el cu�l desapareci� horas antes del accidente y fue visto �ltima vez con Roberto.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							case 2:
							{
								system("CLS");
								text("- (Mejor me voy de aqu�)\n"); Sleep(500);
								system("CLS");
								text("D�as despu�s.\n\n"); Sleep(500);
								PlaySound(TEXT("timbre.wav"), NULL, SND_SYNC);
								text("- Emm, hola �qu� se le ofrece?\n"); Sleep(500);
								text("- Buenas tardes soy el detective Gonz�lez y �l es mi compa�ero el detective S�nchez �Es usted Genaro Rodr�guez?\n"); Sleep(500);
								text("- Si soy yo �alg�n problema?\n"); Sleep(500);
								text("- �Esta Roberto Rodr�guez su hijo en casa?\n"); Sleep(500);
								text("- Si, est� arriba en su cuarto.\n"); Sleep(500);
								text("- Necesitamos llevarlo con nosotros, es sospechoso del asesinato de Miguel Mora y queremos hacerle unas preguntas.\n"); Sleep(500);
								text("- �Qu�? �mi hijo sospechoso de un homicidio? No lo puedo creer.\n"); Sleep(500);
								text("- Lo siento se�or, pero es necesario llev�rnoslo en la brevedad. Subiremos por �l.\n"); Sleep(500);
								text("- No puede pasar, as� como as� �No se llevar� a mi hijo!\n"); Sleep(500);
								text("- No puede ser, tu no Roberto, ��Por qu� hiciste esto?!\n"); Sleep(500);
								system("CLS");
								text("- En otras noticias, Roberto un joven de 16 a�os fue encontrado colgado muerto en su cuarto, aparentemente Roberto era sospechoso del homicidio de uno de sus compa�eros Miguel Mora, Roberto y Miguel fueron vistos juntos el d�a de la muerte de Miguel, y d�as despu�s Roberto se quit� la vida, dejando con duda que habr� pasado con Miguel y si Roberto se quit� la vida debido a esto.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(",\n"); Sleep(500);
								break;
							}
							default:
							{
								system("CLS");
								text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
								text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
								cin >> salir;
								end(salir);
								break;
							}
						}
						break;
					}
					case 2:
					{
						system("CLS");
						text("- No, Roberto, d�jame pensar.\n"); Sleep(500);
						text("- Nada de eso, me quieres delatar.\n"); Sleep(500);
						text("- Roberto no est�s pensando con claridad.\n"); Sleep(500);
						text("- �RETROCEDE!\n"); Sleep(500);
						text("- Roberto, baja esa pistola.\n"); Sleep(500);
						text("- No puedes delatarme, ir� a prisi�n, mi vida se acab�.\n"); Sleep(500);
						text("- Roberto tranquil�zate.\n"); Sleep(500);
						text("- No, no, tal vez tu deber�as de tranquilizarte.\n"); Sleep(500);
						PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
						system("CLS");
						text("- En otras noticias Roberto Rodr�guez fue acusado de homicidio m�ltiple , al parecer el joven de 16 a�os estaba bajo inducci�n de LSD y dispar� sobre dos compa�eros suyos, ambos de 16 a�os, el joven Miguel Mora recibi� una bala en la cabeza mat�ndolo al instante, y la joven Laura Heredia recibi� m�ltiples disparos en el pecho muriendo desangrada. Actualmente el joven acusado est� encerrado en un reformatorio, esperando cumplir la mayor�a de edad para que su juicio contin�e, algunas personas especulan que deber�a recibir pena de muerte, aunque algunos expertos afirman que solo recibir� cadena perpetua debido a su an�lisis psiqui�trico.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					default:
					{
						system("CLS");
						text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
						text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
						cin >> salir;
						end(salir);
						break;
					}
				}
				break;
			}
			default:
			{
				system("CLS");
				text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
				text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
				cin >> salir;
				end(salir);
				break;
			}
		}
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Grandes est�ndares de limpieza �eh?\n"); Sleep(500);
		text("- Solo los necesarios para vivir bien, �qu� es eso?\n"); Sleep(500);
		text("- �Esto? Es algo para divertirnos mejor.\n"); Sleep(500);
		text("- �Es marihuana?\n"); Sleep(500);
		text("- Ja, no se te puede enga�ar �verdad, quieres un poco?\n"); Sleep(500);
		text("- (Merezco relajarme un poco) Est� bien, dame eso.\n"); Sleep(500);
		PlaySound(TEXT("fumar.wav"), NULL, SND_SYNC);
		text("- Wow hermano tranquilo, fue un toque muy largo.\n"); Sleep(500);
		system("CLS");
		text("Unos minutos m�s tarde.\n\n"); Sleep(500);
		text("- �C�mo te sientes?\n"); Sleep(500);
		text("- Bastante relajado, te da una perspectiva muy diferente de la vida �sabes?\n"); Sleep(500);
		text("- �A qu� te refieres?\n"); Sleep(500);
		text("- Tu sabes te pone a pensar, por ejemplo, mi pap�.\n"); Sleep(500);
		text("- �Qu� hay con �l?\n"); Sleep(500);
		text("- Siempre ha sido muy duro conmigo, y nunca logro impresionarlo.\n"); Sleep(500);
		text("- Suena a alguien desagradable.\n"); Sleep(500);
		text("- Si lo es.\n"); Sleep(500);
		text("- Tal vez deber�amos darle una lecci�n.\n"); Sleep(500);
		text("- �Qu�? �A qu� te refieres?\n"); Sleep(500);
		text("- Ya sabes, una peque�a broma, si �l dice que eres un delincuente, prob�mosle que es as�, tengo una idea para una peque�a broma que le podemos hacer.\n"); Sleep(500);
		text("- Te escucho...\n"); Sleep(500);
		system("CLS");
		text("M�s tarde en casa de Roberto.\n\n"); Sleep(500);
		text("- Bien Roberto, ya sabes el plan.\n"); Sleep(500);
		text("- S�. Espera, mis pap�s est�n peleando, aguarda, �Pap�!\n"); Sleep(500);
		text("- �Tu qu� haces aqu�?\n"); Sleep(500);
		text("- No vuelvas a poner una mano en mi mam� otra vez.\n"); Sleep(500);
		text("- �Y t� que har�s al respecto? Pedazo de mierda.\n"); Sleep(500);
		text("- Tal vez podr�amos darle una lecci�n, Sr. Rodr�guez.\n"); Sleep(500);
		PlaySound(TEXT("carga.wav"), NULL, SND_SYNC);
		text("- Miguel que haces con eso.\n"); Sleep(500);
		text("- Venga hermano, acaba de golpear a tu mam�, y no tarda en golpearte a ti.\n"); Sleep(500);
		text("- Si, pero esta no es manera de solucionar esto.\n"); Sleep(500);
		text("- �Creen tener los pantalones para venir a mi casa y amenazarme de esta manera?\n"); Sleep(500);
		text("- Vamos chico lindo dispara.\n"); Sleep(500);
		text("- �No! Aguarda Miguel no hagas esto. Quiero hacerlo yo.\n"); Sleep(500);
		text("- �Qu�?\n"); Sleep(500);
		text("- Eso quer�a o�r hermano, ten. Ahora disp�rale a tu pap�.\n\n"); Sleep(500);
		text("�Qu� haces?\n\n"); Sleep(500);
		text("  1. - Soltar el arma.\n"); Sleep(500);
		text("  2. - Disparar a tu pap�.\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
			case 1:
			{
				system("CLS");
				text("- No, no puedo hacer algo as�.\n"); Sleep(500);
				text("- Si t� no puedes yo lo har�.\n"); Sleep(500);
				text("- Su�ltame Miguel no cometas una tonter�a.\n"); Sleep(500);
				text("- Tonter�a la tuya, har� lo que t� no puedes.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- Roberto Rodr�guez, un joven de 16 a�os es acusado de asesinato tras disparar al joven Miguel Mora el pasado martes 12 de marzo, aparentemente Roberto y sus padres estaban bajo amenaza de Miguel, y Roberto en defensa propia tomo el arma de Miguel y lo asesin� para salvar a su familia, actualmente Roberto est� en el reformatorio esperando cumplir la mayor�a de edad para dictar cu�l ser� su delito tras los acontecimientos en defensa de s� mismo y sus padres.\n\n"); Sleep(500);
				text("F"); Sleep(500);
				text("i"); Sleep(500);
				text("n"); Sleep(500);
				text(".\n"); Sleep(500);
				break;
			}
			case 2:
			{
				system("CLS");
				text("- No hagas esto Roberto.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- Roberto Rodr�guez, un joven de 16 a�os es acusado de asesinato tras asesinar a su padre con un arma de fuego, Miguel Mora, c�mplice de Roberto fue quien otorgo el arma y quien sedujo a Roberto a cometer dicha acci�n, Genaro Rodr�guez el padre y v�ctima de Roberto presentaba indicios de violencia y adicci�n al alcohol. Actualmente Roberto est� en el reformatorio esperando cumplir la mayor�a de edad para dictar cu�l ser� su delito tras los acontecimientos en defensa de s� mismo y sus padres.\n\n"); Sleep(500);
				text("F"); Sleep(500);
				text("i"); Sleep(500);
				text("n"); Sleep(500);
				text(".\n"); Sleep(500);
				break;
			}
			default:
			{
				system("CLS");
				text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
				text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
				cin >> salir;
				end(salir);
				break;
			}
		}
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Tienes una actitud muy explosiva. Y tengo al para ti igual de explosivo.\n"); Sleep(500);
		text("- �Qu� es eso?\n"); Sleep(500);
		text("- Son polvos m�gicos amigo, te ayudan a divertirte m�s, y hacer cosas que no pensar�as hacer. �Quieres un poco?\n\n"); Sleep(500);
		text("�Qu� haces?\n\n"); Sleep(500);
		text("  1. Aceptar\n"); Sleep(500);
		text("  2. Rechazar\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
			case 1:
			{
				system("CLS");
				text("- Al diablo, venga.\n"); Sleep(500);
				text("- �Bien! Esa es la actitud �c�mo te sientes?\n"); Sleep(500);
				text("- Me siento, raro, pero con mucha energ�a.\n"); Sleep(500);
				text("- Eso es lo que quer�a escuchar, oye viejo Laura y yo tenemos que recoger unas tontas cosas que nuestros padres pidieron, necesitamos ir de inmediato, �qu� te parece si nos llevas hasta all�?\n"); Sleep(500);
				text("- Espera �me dejaras conducir tu auto?\n"); Sleep(500);
				text("- Claro, creo que lo har� bien.\n"); Sleep(500);
				text("- Nunca he conducido antes, bueno tome unas lecciones con mi pap� pero nunca he manejado sin �l.\n"); Sleep(500);
				text("- An�mate, todo saldr� bien.\n"); Sleep(500);
				text("- De acuerdo. Estar�a bien un poco de acci�n.\n"); Sleep(500);
				system("CLS");
				text("- Bien, es aqu�.\n"); Sleep(500);
				text("- �Afuera de esta tienda?\n"); Sleep(500);
				text("- Si estaci�nate justo ah� y espera que Laura y yo salgamos, �de acuerdo?\n"); Sleep(500);
				text("- Emm, vale. (No me siento bien, mi cuerpo est� hiperactivo y por alguna raz�n quiero m�s)\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("tienda.wav"), NULL, SND_SYNC);
				text("- Corre Roberto �arranca el auto!\n"); Sleep(500);
				text("- ��Qu� es ese sonido?! Cre� que ven�amos por cosas de tu pap�.\n"); Sleep(500);
				text("- Si, si, te lo explico despu�s �Ahora arranca!\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("sirena.wav"), NULL, SND_SYNC);
				text("- Mierda, la polic�a.\n"); Sleep(500);
				text("- ��Qu�?! ��La polic�a?! �En qu� mierda me metiste Miguel?\n"); Sleep(500);
				text("- Venga es bastante obvio �no se siente bien toda esta adrenalina?\n"); Sleep(500);
				text("- (De cierta forma si, se siente bien) Pero esto est� mal �La polic�a nos persigue!\n"); Sleep(500);
				text("- Entonces pi�rdelos, mira, da vuelta en ese callej�n.\n"); Sleep(500);
				PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
				system("CLS");
				text("- Mierda Roberto.\n"); Sleep(500);
				text("- La polic�a nos tiene acorralados.\n"); Sleep(500);
				text("- �Salgan del veh�culo con las manos arriba!\n"); Sleep(500);
				text("- Esto les dar� una lecci�n.\n"); Sleep(500);
				text("- Mierda Miguel, guarda esa pistola.\n"); Sleep(500);
				text("- No seas marica Roberto.\n"); Sleep(500);
				PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
				text("- �Mierda! �Mataron a Miguel!\n"); Sleep(500);
				text("- �Toma esa pistola y disp�rales!\n"); Sleep(500);
				text("- No puedo hacer eso Laura.\n"); Sleep(500);
				text("- �Hazlo o nos matar�n!\n\n"); Sleep(500);
				text("�Qu� haces?\n\n"); Sleep(500);
				text("  1. Tomar la pistola y disparar.\n"); Sleep(500);
				text("  2. Entregarte a la polic�a.\n\n"); Sleep(500);
				cin >> decision;
				switch (decision)
				{
					case 1:
					{
						system("CLS");
						PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
						text("- Un grupo de j�venes fueron acribillados por la polic�a, al parecer los chicos de 16 a�os. Roberto Rodr�guez, Miguel Mora y Laura Heredia asaltaron una tienda de electrodom�sticos iniciando una persecuci�n con la polic�a, es un momento de la persecuci�n el auto de los j�venes se volte�, y Miguel que portaba abri� fuego hacia los polic�as, en respuesta la polic�a devolvi� fuego contra Miguel, despu�s Laura y Roberto abrieron fuego contra las autoridades, causando as� la muerte de los 3 chicos, que seg�n la autopsia estaban bajo el efecto de coca�na.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					case 2:
					{
						system("CLS");
						text("- Un grupo de j�venes asaltaron una tienda de electrodom�sticos, iniciando una persecuci�n con la polic�a, en un momento de dicha persecuci�n el auto de los delincuentes se volte�, Miguel Mora, un chico de 16 a�os y presunto l�der de la banda abri� fuego contra las autoridades, estas en respuesta lo acribillaron, Roberto Rodr�guez y Laura Heredia se entregaron a las autoridades, actualmente en un juicio en proceso los dos j�venes se encuentran presuntos en el reformatorio, esperando cumplir la mayor�a de edad para recibir su dictamen final.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					default:
					{
						system("CLS");
						text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
						text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
						cin >> salir;
						end(salir);
						break;
					}
				}
				break;
			}
			case 2:
			{
				system("CLS");
				text("- Creo que con esto si paso.\n"); Sleep(500);
				text("- Bien t� te lo pierdes.\n"); Sleep(500);
				text("- Oye viejo Laura y yo tenemos que recoger unas tontas cosas que nuestros padres pidieron, necesitamos ir de inmediato, �qu� te parece si nos llevas hasta all�?\n"); Sleep(500);
				text("- Espera �me dejaras conducir tu auto?\n"); Sleep(500);
				text("- Claro, ninguno de nosotros dos est� en condiciones aptas para manejar.\n"); Sleep(500);
				text("- Nunca he conducido antes, bueno tome unas lecciones con mi pap�, pero nunca he manejado sin �l.\n"); Sleep(500);
				text("- Por favor hermano, acepta es importante que hagamos esto, todo saldr� bien.\n"); Sleep(500);
				text("- Mmm, de acuerdo, est� bien los llevar�.\n"); Sleep(500);
				system("CLS");
				text("- Bien, es aqu�.\n"); Sleep(500);
				text("- �Afuera de esta tienda?\n"); Sleep(500);
				text("- Si estaci�nate justo ah� y espera que Laura y yo salgamos, �de acuerdo?\n"); Sleep(500);
				text("- Emm, vale. (algo me huele mal, deb� de escuchar a Adri�n)\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("tienda.wav"), NULL, SND_SYNC);
				text("- Corre Roberto �arranca el auto!\n"); Sleep(500);
				text("- ��Qu� es ese sonido?! Cre� que ven�amos por cosas de tu pap�.\n"); Sleep(500);
				text("- Si, si, te lo explico despu�s �Ahora arranca!\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("sirena.wav"), NULL, SND_SYNC);
				text("- Mierda, la polic�a.\n"); Sleep(500);
				text("- ��Qu�?! ��La polic�a?! �En qu� mierda me metiste Miguel?\n"); Sleep(500);
				text("- Venga es bastante obvio cerebrito, ahora acelera si no quieres que nos atrapen.\n"); Sleep(500);
				text("- �No! esto est� mal, me entregar� a la polic�a.\n"); Sleep(500);
				PlaySound(TEXT("carga.wav"), NULL, SND_SYNC);
				text("- Yo lo pensar�a dos veces genio.\n"); Sleep(500);
				text("- Ahora acelera si no quieres que te vuele la cabeza. Entra por ese callej�n.\n\n"); Sleep(500);
				text("�Qu� haces?\n\n"); Sleep(500);
				text("  1. Das vuelta en el callej�n.\n"); Sleep(500);
				text("  2. Saltas con el auto por el puente.\n\n"); Sleep(500);
				cin >> decision;
				switch (decision)
				{
					case 1:
					{
						system("CLS");
						PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
						system("CLS");
						text("- Mierda Roberto.\n"); Sleep(500);
						text("- La polic�a nos tiene acorralados.\n"); Sleep(500);
						text("- �Salgan del veh�culo con las manos arriba!\n"); Sleep(500);
						text("- Esto les dar� una lecci�n.\n"); Sleep(500);
						text("- Mierda Miguel, guarda esa pistola.\n"); Sleep(500);
						text("- No seas marica Roberto.\n"); Sleep(500);
						PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
						text("- �Mierda! �Mataron a Miguel!\n"); Sleep(500);
						text("- �Toma esa pistola y disp�rales!\n"); Sleep(500);
						text("- No puedo hacer eso Laura.\n"); Sleep(500);
						text("- �Hazlo o nos matar�n!\n\n"); Sleep(500);
						text("�Qu� haces?\n\n"); Sleep(500);
						text("  1. Tomar la pistola y disparar.\n"); Sleep(500);
						text("  2. Entregarte a la polic�a.\n\n"); Sleep(500);
						cin >> decision;
						switch (decision)
						{
							case 1:
							{
								system("CLS");
								PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
								text("- Un grupo de j�venes fueron acribillados por la polic�a, al parecer los chicos de 16 a�os. Roberto Rodr�guez, Miguel Mora y Laura Heredia asaltaron una tienda de electrodom�sticos iniciando una persecuci�n con la polic�a, es un momento de la persecuci�n el auto de los j�venes se volte�, y Miguel que portaba abri� fuego hacia los polic�as, en respuesta la polic�a devolvi� fuego contra Miguel, despu�s Laura y Roberto abrieron fuego contra las autoridades, causando as� la muerte de los 3 chicos, que seg�n la autopsia estaban bajo el efecto de coca�na.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							case 2:
							{
								system("CLS");
								text("- Un grupo de j�venes asaltaron una tienda de electrodom�sticos, iniciando una persecuci�n con la polic�a, en un momento de dicha persecuci�n el auto de los delincuentes se volte�, Miguel Mora, un chico de 16 a�os y presunto l�der de la banda abri� fuego contra las autoridades, estas en respuesta lo acribillaron, Roberto Rodr�guez y Laura Heredia se entregaron a las autoridades, actualmente en un juicio en proceso los dos j�venes se encuentran presuntos en el reformatorio, esperando cumplir la mayor�a de edad para recibir su dictamen final.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							default:
							{
								system("CLS");
								text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
								text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
								cin >> salir;
								end(salir);
								break;
							}
						}
						break;
					}
					case 2:
					{
						system("CLS");
						text("- ��Qu� haces, imb�cil?!\n"); Sleep(500);
						PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
						text("- Un grupo de j�venes fueron detenidos por la polic�a por un robo a una tienda de electrodom�sticos, Miguel Mora y Laura Heredia fueron acusados de extorsionar a Roberto Rodr�guez para ingerir drogas y ser su c�mplice en el asalto. En un acto heroico Roberto quien manejaba el auto decidi� volcar el auto por un puente, deteniendo a Miguel y su c�mplice, los tres j�venes est�n en juicio, pero expertos afirman que con un buen abogado podr�an reducir los a�os de detenci�n de Roberto.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
				}
				break;
			}
			default:
			{
				system("CLS");
				text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
				text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
				cin >> salir;
				end(salir);
				break;
			}
		}
	}
	else
	{
		system("CLS");
		text("El n�mero ingresado no corresponde a ninguna decisi�n.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}

	/*Cierre*/
	
	system("CLS");
	text("Eso ha sido todo �espero que te haya gustado tu final! recuerda que hay a�n m�s finales por descubrir �no te rindas!\n"); Sleep(500);
	text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
	cin >> salir;
	end(salir);

	return 0;

}