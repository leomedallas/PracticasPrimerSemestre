/*LEONARDO MEDELLÍN RAMÍREZ - zap292 - PROYECTO: HISTORIA NARRADA EN CONSOLA.*/

#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <locale>
#include<stdlib.h>
#include<time.h>
#include<MMSystem.h>

using namespace std;

/*Función para imprimir letra por letra en consola.*/

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

/*Función para terminar el programa.*/

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
	/*Código para imprimir signos en español en consola.*/
	
	setlocale(LC_ALL, "spanish");
	
	/*Declaración de variables.*/

	 int decision, salir = 0;

	/*Presentación del juego.*/

	text("¡Hola! este es un proyecto para mi Universidad, actualmente estudio Desarrollo de Software Interactivo.\n"); Sleep(500);
	text("Te voy a contar una historia dónde tu tomarás las decisiones del personaje principal.\n"); Sleep(500); 
	text("Te aparecerán diferentes decisiones en consola que podrás tomar escribiendo en tu teclado el número de dicha decisión.\n"); Sleep(500);
	text("Ahora va un ejemplo:\n\n"); Sleep(500);
	text("¿Qué artista era mejor?\n\n"); Sleep(500);
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
	text("Ya que lo entendiste, ¡Comencemos!");
	Sleep(1000);
	system("CLS");

	/*Historia*/

	decision = 0;
	text("“Quien con monstruos lucha cuide de convertirse a su vez en monstruo. Cuando miras largo tiempo a un abismo, el abismo también mira dentro de ti.” "); Sleep(500);
	text("–Friedrich Wilhelmt Nietzsche."); Sleep(500);
	system("CLS");
	PlaySound(TEXT("alarma.wav"), NULL, SND_SYNC);
	Sleep(1000);  text("- Roberto, "); Sleep(500); text("Roberto, "); Sleep(500); text("cariño, "); Sleep(500);
	text("despierta, es hora de ir a la escuela. "); Sleep(500);
	text("Tu papá no quiere que llegues tarde hoy, baja a desayunar.\n"); Sleep(500);
	text("- Buenos días papá.\n"); Sleep(500);
	text("- Buenos días, tu madre preparó huevos y tocino.\n"); Sleep(500);
	text("- (Agh, odio el tocino).\n\n"); Sleep(500);
	text("¿Qué te haces?\n\n"); Sleep(500);
	text("  1. Servirte los huevos.\n"); Sleep(500);
	text("  2. Preparar un cereal.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Si, gracias papá.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Creo que mejor me preparó un cereal.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- ¿Listo para tu primer día de clases? Hoy inicias la preparatoria, "); Sleep(500);
	text("espero que estés listo y no seas el peor de tu clase de nuevo.\n"); Sleep(500);
	text("- Si papá, haré mi mejor esfuerzo (que pesado eres).\n"); Sleep(500);
	text("- Bien, termina de comer y alístate, no quiero que llegues tarde. "); Sleep(500);
	text("Y vístete bien no quiero que parezcas uno de esos adolescentes drogadictos otra vez.\n"); Sleep(500);
	text("- (Papá quiere que me ponga esa estúpida camisa, pero es muy incómodo, "); Sleep(500);
	text("a lo mejor si me pongo una sudadera quizás no note que llevo puesto).\n\n"); Sleep(500);
	text("¿Qué te pones?\n\n"); Sleep(500);
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
		text("- ¿Y esa sudadera?\n"); Sleep(500);
		text("– Solo me la puse porque tengo frío.\n"); Sleep(500);
		text("– Espero que te la quites cuando llegues a la escuela, pareces vagabundo, ya vámonos.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Bueno gracias papá, te llamó cuando terminé la escuela.\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Está bien hijo, ten un buen día, y recuerda nada de decepcionarme otra vez.\n"); Sleep(500);
		text("- (Bueno me ha dicho cosas peores)\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Si si hijo, ya bájate del auto tengo cosas que hacer, "); Sleep(500);
		text("y recuerda nada de decepcionarme otra vez.\n"); Sleep(500);
		text("- (“Nada de decepcionarme otra vez”, "); Sleep(500);
		text("que ganas de que cierre esa gran bocota que tiene)\n"); Sleep(500);
	}
	text("- (En fin, el primer día de escuela, espero que Adrián llegue pronto, odio tener que conocer gente nueva)\n"); Sleep(500);
	if (decision == 1)
	{
		text("- ¡Hey bro! ¿Y esa linda camisa que llevas puesta? No me digas que papi te está vistiendo otra vez.\n"); Sleep(500);
		text("- Hola Adrián, se puso pesado de nuevo, ya sabes cómo es.\n"); Sleep(500);
		text("- Pues esperemos que las chicas no te ignoren con ese look.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- ¡Uff hermano! Que fresco te ves con ese atuendo.\n"); Sleep(500);
		text("- Hola Adrián, gracias mi papá quería que usará una camisa, pero no quiero dañar mi reputación el primer día de clases.\n"); Sleep(500);
	}
	system("CLS");
	text("- ¿Listo para tu primer día?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Solo espero que me vaya bien en mis notas, no quiero que papá se enoje otra vez.\n"); Sleep(500);
		text("- ¿Qué te vaya bien en tus notas? Que estás diciendo hermano, la preparatoria es para divertirse y pasarla bien.\n"); Sleep(500);
		text("- Es muy fácil para ti decirlo, ya tienes 3 años aquí.\n"); Sleep(500);
		text("- Mira vamos paso por paso, lo primero es que pierdas esa timidez para hablar con chicas.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Creo que sí, papá quiere que entregue “excelentes notas”, "); Sleep(500);
		text("pero yo solo quiero divertirme y pasarla bien.\n"); Sleep(500);
		text("- Venga hermano, creo que yo soy el indicado para eso.\n"); Sleep(500);
		text("- Con tus 3 años de experiencia yo creo que sí.\n"); Sleep(500);
		text("- Bueno, ¿Qué te parece si vamos comenzando? Y trabajamos en tu timidez para hablar con chicas.\n"); Sleep(500);
	}
	text("- ¿Ves a esa chica de ahí?, es Sofía de segundo año, durante el verano terminó con su novio Chad.\n"); Sleep(500);
	text("- ¿Chad? ¿Así se llama?\n"); Sleep(500);
	text("- No bro, es un, "); Sleep(500);
	text("sabes que olvídalo, su nombre es Cesar.\n"); Sleep(500);
	text("- ¿Pero que no ella es de las populares? Nunca le pondría atención a alguien como yo.\n"); Sleep(500);
	text("- Tengo un plan solo ve a presentarte.\n"); Sleep(500);
	system("CLS");
	text("- Emm, Hola Sofía.\n"); Sleep(500);
	text("- ¿Y tú quién eres?\n"); Sleep(500);
	text("- Soy Roberto, mucho gusto.\n"); Sleep(500);
	text("- ¿Con que Roberto eh? Y dime ¿Qué se te ofrece?\n\n"); Sleep(500);
	text("¿Que le contestas?\n\n"); Sleep(500);
	text("  1. - Solo quería... ya sabes presentarme, soy nuevo en la escuela...\n"); Sleep(500);
	text("  2. - Quería presentarme, soy nuevo en la escuela, y me pareciste muy atractiva.\n"); Sleep(500);
	text("  3. - Solo quería saludar a la chica más hermosa de aquí, y que tal vez me noté un poco.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- ¿Okey? Pues mucho gusto, espero verte por aquí (o mejor no)\n"); Sleep(500);
		text("- Emm, si, hasta luego, buenas tardes (¿¡Buenas tardes!?, soy un imbécil)\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Me agrada tu confianza, y eres algo lindo también, mucho gusto amigo, espero vernos más seguido por aquí.\n"); Sleep(500);
		text("- Así será, no te preocupes, hasta luego.\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Tranquilo tigre, pues con esa confianza tal vez no sea a la única que quieres que te note.\n"); Sleep(500);
		text("- Pero solo quiero que tú lo hagas.\n"); Sleep(500);
		text("- Pues tendrás que hacer algo mejor que esto para que suceda, necesito ir a clase, adiós.\n"); Sleep(500);
		text("- ¿Emm?, si hasta luego (maldita sea, apenas y le hablo y cree que soy un cretino).\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	system("CLS");
	text("- ¿Y qué tal?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Bastante mal para mi primer encuentro.\n"); Sleep(500);
		text("- Ánimo hermano, ya caerá ante tus encantos, "); Sleep(500);
		PlaySound(TEXT("escuela.wav"), NULL, SND_SYNC);
		text("bueno tengo clase, suerte en tu día.\n"); Sleep(500);
		text("- Si, gracias Adrián.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Pues dijo que esperaba verme más seguido por aquí (y que soy lindo), creo que le agradé.\n"); Sleep(500);
		text("- Pues buen comienzo hermano, pronto Sofía estará bajo tus pies. "); Sleep(500);
		PlaySound(TEXT("escuela.wav"), NULL, SND_SYNC);
		text("En fin, tengo clase de biología así que me tengo que ir.\n"); Sleep(500);
		text("- Si hermano, nos vemos después de clases.\n"); Sleep(500);
		text("- ¡Suerte en tu día!\n"); Sleep(500);
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
	text("¿Dónde te sientas?\n\n"); Sleep(500);
	text("  1. - En frente\n"); Sleep(500);
	text("  2. - En medio\n"); Sleep(500);
	text("  3. - Atrás\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("(Sí en frente, tengo que tener buenas notas)\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("(Sí en medio, escucho bien al profesor y no me veo como un nerd)\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("(Sí atrás, las personas divertidas se sientan hasta atrás, ¿no?)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Yo soy el profesor Fernández, bienvenidos a su clase de lógica matemática...\n"); Sleep(500);
	text("- Bastante aburrido ¿no?, soy Miguel, mucho gusto.\n"); Sleep(500);
	text("- Yo soy Roberto.\n"); Sleep(500);
	text("- Y la señorita que está a tu lado es un encanto.\n"); Sleep(500);
	text("- Que tal, yo soy Laura.\n\n"); Sleep(500);
	text("¿Qué contestas?\n\n"); Sleep(500);
	text("  1. - ¿Ustedes ya se conocían antes?\n"); Sleep(500);
	text("  2. - (Pues no se ve tan encantadora), ¿Y ustedes dos están saliendo?\n"); Sleep(500);
	text("  3. - Sí que eres un encanto.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Si, nuestros padres son mejores amigos y nos conocemos desde niños.\n"); Sleep(500);
		text("- Así es, 16 años soportando a este imbécil.\n"); Sleep(500);
		text("- Tranquila Laura, no espantes a nuestro nuevo amigo, se una ternurita como siempre (si es que alguna vez lo has sido).\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Ja, ¿Yo saliendo con el imbécil de Miguel? Sí que eres gracioso. \n"); Sleep(500);
		text("- Los padres de la señorita pretenciosa son mejores amigos de los míos, "); Sleep(500);
		text("así que se podría decir que llevamos una relación bastante inusual desde niños, ¿verdad que si corazón?\n"); Sleep(500);
		text("- Ya cállate de una vez Miguel, no quiero que piensen que estamos saliendo o algo así.\n"); Sleep(500);
		text("- Se ve que se llevan bastante bien.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Wow, alto ahí, no te recomendaría salir con Laura, puede ser un tanto… especial.\n"); Sleep(500);
		text("- Déjalo Miguel, vamos a ver hasta dónde puede llegar, ¿verdad primor?\n"); Sleep(500);
		text("- Podemos averiguarlo.\n"); Sleep(500);
		text("- Yo solo decía, conozco a Laura desde niños, pero sería interesante ver algo así.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- ¡Hey! ustedes 3, dejen de hablar y tomen nota por favor.\n"); Sleep(500);
	text("- Si profesor, lo sentimos.\n"); Sleep(500);
	text("- Oye Roberto, dime, ¿te gusta divertirte?\n\n"); Sleep(500);
	text("¿Qué contestas?\n\n"); Sleep(500);
	text("  1. - Emm, creo que sí.\n"); Sleep(500);
	text("  2. - Depende de tu definición de diversión.\n"); Sleep(500);
	text("  3. - ¡Por supuesto que sí!\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- No lo intimides Miguel, deja que respire, se ve un poco tenso.\n"); Sleep(500);
		text("- Yo solo preguntaba, me gustaría pasar un buen rato con mi nuevo amigo, ¿tú que dices?\n"); Sleep(500);
		text("- Emm, supongo que sí, tal vez podríamos conocernos mejor.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Ya sabes, pasar un buen rato con amigos platicar y simplemente perder el tiempo.\n"); Sleep(500);
		text("- En ese caso, sí, me gusta divertirme.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Shh, guarden silencio allá atrás.\n"); Sleep(500);
		text("- Lo siento, profesor.\n"); Sleep(500);
		text("- Entonces te gusta la diversión, te ves muy entusiasmado.\n"); Sleep(500);
		text("- Creo que si lo estoy ja.\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Eso quería escuchar, mi papá tiene un viejo departamento cerca de aquí, ¿Quieres ir un rato después de clases?\n\n"); Sleep(500);
	text("¿Que contestas?\n\n"); Sleep(500);
	text("  1. - Emm, no lo sé, mi papá me recogerá después de clases.\n"); Sleep(500);
	text("  2. - ¿Qué tan lejos esta esté lugar de aquí?\n"); Sleep(500);
	text("  3. - Mi papá iba a recogerme después de clases, pero al diablo, me apunto.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Vamos amigo, no está tan lejos, le puedes decir a tu papá que alargaron la inducción de la escuela y que mi papá te dará un aventón.\n"); Sleep(500);
		text("- No lo sé, mi papá es un poco temperamental.\n"); Sleep(500);
		text("- Anímate es el primer día, tú mismo dijiste que debemos de conocernos mejor, ¿no?\n"); Sleep(500);
		text("- Emm, creo que sí, está bien, hablaré con mi papá.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Solo un par de cuadras lejos de aquí, si es necesario puedo darte un aventón a tu casa.\n"); Sleep(500);
		text("- ¿Tienes dónde llevarme?\n"); Sleep(500);
		text("- Si, la vieja carcacha que me dio mi papá, pero sirve para llevarte.\n"); Sleep(500);
		text("- Pues si ese es el caso, creo que puedo hablar con mi papá.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- ¡Esa es la actitud que me gusta! Se nota que quieres pasar un buen rato ¿No hay problema con tu papá?\n"); Sleep(500);
		text("- Tal vez, pero no es la primera vez que piensa que soy una basura (Tal vez debería avisarle que llegaré tarde)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- Bien, pues en ese caso, nos vemos después de clase, ¿vale?\n"); Sleep(500);
	text("- Esta bien, los veo después chicos.\n"); Sleep(500);
	text("- Hasta luego Roberto.\n"); Sleep(500);
	text("- ¿Qué piensas del chico?\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Algo tímido, pero me agrada.\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		text("- Es bastante astuto, no es muy persuasible.\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		text("- Es alguien muy persuasible, creo que no será de mucha utilidad.\n"); Sleep(500);
	}
	system("CLS");
	text("- Qué onda hermano, ¿Qué tal va tu día?\n"); Sleep(500);
	text("- Hola Adrián, bastante bien, conocí a unos chicos, Miguel y Laura.\n"); Sleep(500);
	text("- Unos chicos rubios y “relajados”.\n"); Sleep(500);
	text("- Sí, creo que son ellos. Me invitaron a un departamento después de clases.\n"); Sleep(500);
	text("- No te recomiendo juntarte con ellos, sus padres están metidos en cosas raras.\n"); Sleep(500);
	text("- ¿Qué clase de cosas?\n"); Sleep(500);
	text("- No lo sé hermano, pero me han advertido de ellos.\n\n"); Sleep(500);
	text("¿Qué respondes?\n\n"); Sleep(500);
	text("  1. - Tal vez debería de cancelarles...\n"); Sleep(500);
	text("  2. - Tomaré mis precauciones.\n"); Sleep(500);
	text("  3. - Pues creo que deberías meterte en tus propios asuntos.\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Solo digo que lo tomes con calma. Apenas es tu primer día, no trates de comerte el mundo a mordidas\n"); Sleep(500);
		text("- Si hermano, gracias.\n"); Sleep(500);
		text("- No te preocupes, para eso cuido a mi hermanito. Nos vemos después.\n"); Sleep(500);
		text("- Adiós hermano.\n\n"); Sleep(500);
	}
	else if (decision == 2)
	{
		system("CLS");
		text("- Creo que lo mejor sería que no fueras con ellos.\n"); Sleep(500);
		text("- Tranquilo hermano, puedo lidiar con ellos, gracias.\n"); Sleep(500);
		text("- Solo cuídate hermano, nos vemos después.\n"); Sleep(500);
		text("- Hasta luego hermano.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		system("CLS");
		text("- Wow tranquilo hermano solo trato de protegerte.\n"); Sleep(500);
		text("- Pues no necesito protección solo quiero divertirme, tú lo dijiste antes, ¿no es así?\n"); Sleep(500);
		text("- Te estas comportando como un cretino. Suerte, idiota.\n"); Sleep(500);
		text("- Esta bien ¡Vete! (Quien te necesita)\n\n"); Sleep(500);
	}
	else
	{
		system("CLS");
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}
	text("- ¡Hey Roberto! Es hora de irnos\n"); Sleep(500);
	if (decision == 1)
	{
		text("- Hola Miguel, hablé con mi papá y no le pareció que los acompañé.\n"); Sleep(500);
		text("- ¿Ya viene hacía acá?\n"); Sleep(500);
		text("- No, se le hizo un poco tarde y se retrasó un poco.\n"); Sleep(500);
		text("- Entonces ven, no nos tomará más de quince minutos.\n"); Sleep(500);
		text("- No lo sé.\n"); Sleep(500);
		text("- Venga anímate.\n\n"); Sleep(500);
		text("¿Qué haces?\n\n"); Sleep(500);
		text("  1. Ir\n"); Sleep(500);
		text("  2. No ir\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
		case 1:
		{
			text("- Venga, que podría salir mal, vamónos\n\n"); Sleep(500);
			break;
		}
		case 2:
		{
			system("CLS");
			text("- Creo que por esta vez paso, lo siento.\n"); Sleep(500);
			text("- Esta bien Roberto, tú te lo pierdes.\n\n"); Sleep(500);
			text("Esa misma tarde, cuando Roberto iba camino a su casa en el auto de su papá.\n\n"); Sleep(500);
			text("- Oye papá...\n"); Sleep(500);
			text("- Calla hijo, entro una llamada importante "); Sleep(500);
			text("¿Bueno?, "); Sleep(500);
			text("claro a sus órdenes, "); Sleep(500);
			text("creo que ese tema se habla directamente con los proveedores debido a que...\n"); Sleep(500);
			text("- (¿Qué tengo que hacer para que me escuches un segundo?) "); Sleep(500);
			text("¡Papá cuidado!\n\n"); Sleep(500);
			PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
			text("Ese día Roberto y su padre sufrieron un accidente, lamentablemente Roberto perdió su vida, acabando así con la historia de nuestro protagonista.\n"); Sleep(500);
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
			text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
			text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
			cin >> salir;
			end(salir);
		}
		}
	}
	else if (decision == 2)
	{
		text("- Ya hablé con mi papá, estoy listo.\n"); Sleep(500);
		text("- Eso es lo que quería escuchar, pues venga, vámonos.\n\n"); Sleep(500);
	}
	else if (decision == 3)
	{
		text("- Estoy listo.\n"); Sleep(500);
		text("- ¿Hablaste con tu papá?\n"); Sleep(500);
		text("- No necesito el permiso de ese vejete.\n"); Sleep(500);
		text("- ¿Estás seguro?, bueno si tú lo dices es hora de irnos.\n\n"); Sleep(500);
	}
	text("- Hemos llegado.\n"); Sleep(500);
	text("- Adelante pasa.\n"); Sleep(500);
	text("- Es un lindo lugar, ¿no?\n\n"); Sleep(500);
	text("¿Qué respondes?\n\n"); Sleep(500);
	text("  1. - Emm sí, es lindo.\n"); Sleep(500);
	text("  2. - Un poco sucio pero agradable.\n"); Sleep(500);
	text("  3. - ¡Creo que este lugar es genial!\n\n"); Sleep(500);
	cin >> decision;
	if (decision == 1)
	{
		system("CLS");
		text("- Venga relájate nada malo pasará con tu papá.\n"); Sleep(500);
		text("- Emm, ¿qué es eso?\n"); Sleep(500);
		text("- ¿Esto? Es una cosita con la que nos vamos a divertir.\n"); Sleep(500);
		text("- Pero ¿qué es?\n"); Sleep(500);
		text("- Es un ácido hermano, lo pones justo así debajo de la lengua y te relajas. ¿Quieres un poco?\n"); Sleep(500);
		text("- Emm, sí.\n\n"); Sleep(500);
		text("30 minutos más tarde\n\n"); Sleep(1000);
		text("- ¿Cómo te sientes?\n"); Sleep(500);
		text("- Bastante bien, jajaja, pero todo se ve muy diferente.\n"); Sleep(500);
		text("- Te da una perspectiva diferente, ¿no?\n"); Sleep(500);
		text("- Sí, creo que veo cosas que antes no veía.\n"); Sleep(500);
		text("- A si, ¿cómo qué?\n"); Sleep(500);
		text("- Como mi papá sabes, él es un idiota, alguien que quiere controlar a todos y todo lo que pasa a su alrededor.\n"); Sleep(500);
		text("- Eso suena como el gobierno.\n"); Sleep(500);
		text("- Teorías conspirativas.\n"); Sleep(500);
		text("- No, hermano en serio, el gobierno controla nuestras decisiones, el cómo llegamos aquí, las decisiones que evadimos no fueron tomadas por nuestra cuenta, de alguna forma ellos piensan por ti, hay algo o alguien que hace nuestro siguiente movimiento.\n"); Sleep(500);
		text("- Creo que te está afectando mucho hermano.\n"); Sleep(500);
		text("- No, te mostraré mi punto Roberto, ven.\n"); Sleep(500);
		text("- Wow, ¿qué rayos haces con eso?\n"); Sleep(500);
		text("- Esto es una pistola, uno de los dos recibirá una bala en la cabeza, tu decidirás quien.\n"); Sleep(500);
		text("- No, ¡Espera! ¡¿Estás loco?! ¡No puedo decidir algo así!\n\n"); Sleep(500);
		text("- Tranquilo, tu no decidirás probaré mi punto y alguien más lo hará por ti. Entonces ¿Quién será?\n\n"); Sleep(500);
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
				text("no sé qué pasó.\n"); Sleep(500);
				text("- ¿Lo ves? Tomaron la decisión.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- En otras noticias, Roberto Rodríguez un joven de 16 años fue asesinado después del impacto de una bala en su cráneo, al parecer un compañero fue el que disparó el arma de fuego, para después dispararse a sí mismo en la cabeza, acabando con su vida al instante, según la autopsia ambos jóvenes estaban bajo el efecto de LSD, un ácido que afecta la realidad y el criterio de las personas. Otra compañera testigo del acontecimiento aseguró que antes de los hechos tuvieron una discusión de conspiración, aparentemente los jóvenes creían que alguien o algo tomaban las decisiones por ellos. Pero ¿será eso cierto? ¿Existirá alguien que tome las decisiones y rumbo de esta historia?\n\n"); Sleep(500);
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
				text("- Bien, así que eso es lo que decidieron.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- No puede ser no lo puedo creer.\n"); Sleep(500);
				text("- ¿Qué fue ese ruido? "); Sleep(500);
				text("¡¿Miguel, que le pasó?! ¡¿Lo asesinaste?!\n"); Sleep(500);
				text("- No, él decía cosas raras, que alguien toma nuestras decisiones y se disparó a sí mismo.\n"); Sleep(500);
				text("¿Qué respondes?\n\n"); Sleep(500);
				text("  1. - ¡Debes creerme Laura yo no lo hice!\n"); Sleep(500);
				text("  2. - ¿Me vas a delatar?\n\n"); Sleep(500);
				cin >> decision;
				switch (decision)
				{
					case 1:
					{
						system("CLS");
						text("- Si llamó a la policía creerán que yo te ayude en esto, debo irme.\n"); Sleep(500);
						text("- Pero y ¿yo qué hago?\n"); Sleep(500);
						text("- No lo sé Roberto todo esto es tu lío.\n\n"); Sleep(500);
						text("¿Qué haces?\n\n"); Sleep(500);
						text("  1. Buscar dónde enterrar el cuerpo.\n"); Sleep(500);
						text("  2. Irte del lugar.\n\n"); Sleep(500);
						cin >> decision;
						switch (decision)
						{
							case 1:
							{
								system("CLS");
								text("- (Mejor busco donde enterrarlo)\n"); Sleep(500);
								text("- (Tal vez debería enterrarlo en un parque, o arrojarlo por un puente, o tal vez hundir el carro, o simplemente ir con la policía maldita sea no sé qué hacer).\n"); Sleep(500);
								PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC); Sleep(1000);
								system("CLS");
								text("- En otras noticias, Roberto Rodríguez, un joven de 16 años aparentemente bajo el efecto del LSD sufrió un accidente de auto y murió al instante, el joven poseía un cuerpo irreconocible en la cajuela del mismo, se sospecha que era Miguel Mora, el cuál desapareció horas antes del accidente y fue visto última vez con Roberto.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							case 2:
							{
								system("CLS");
								text("- (Mejor me voy de aquí)\n"); Sleep(500);
								system("CLS");
								text("Días después.\n\n"); Sleep(500);
								PlaySound(TEXT("timbre.wav"), NULL, SND_SYNC);
								text("- Emm, hola ¿qué se le ofrece?\n"); Sleep(500);
								text("- Buenas tardes soy el detective González y él es mi compañero el detective Sánchez ¿Es usted Genaro Rodríguez?\n"); Sleep(500);
								text("- Si soy yo ¿algún problema?\n"); Sleep(500);
								text("- ¿Esta Roberto Rodríguez su hijo en casa?\n"); Sleep(500);
								text("- Si, está arriba en su cuarto.\n"); Sleep(500);
								text("- Necesitamos llevarlo con nosotros, es sospechoso del asesinato de Miguel Mora y queremos hacerle unas preguntas.\n"); Sleep(500);
								text("- ¿Qué? ¿mi hijo sospechoso de un homicidio? No lo puedo creer.\n"); Sleep(500);
								text("- Lo siento señor, pero es necesario llevárnoslo en la brevedad. Subiremos por él.\n"); Sleep(500);
								text("- No puede pasar, así como así ¡No se llevará a mi hijo!\n"); Sleep(500);
								text("- No puede ser, tu no Roberto, ¡¿Por qué hiciste esto?!\n"); Sleep(500);
								system("CLS");
								text("- En otras noticias, Roberto un joven de 16 años fue encontrado colgado muerto en su cuarto, aparentemente Roberto era sospechoso del homicidio de uno de sus compañeros Miguel Mora, Roberto y Miguel fueron vistos juntos el día de la muerte de Miguel, y días después Roberto se quitó la vida, dejando con duda que habrá pasado con Miguel y si Roberto se quitó la vida debido a esto.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(",\n"); Sleep(500);
								break;
							}
							default:
							{
								system("CLS");
								text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
						text("- No, Roberto, déjame pensar.\n"); Sleep(500);
						text("- Nada de eso, me quieres delatar.\n"); Sleep(500);
						text("- Roberto no estás pensando con claridad.\n"); Sleep(500);
						text("- ¡RETROCEDE!\n"); Sleep(500);
						text("- Roberto, baja esa pistola.\n"); Sleep(500);
						text("- No puedes delatarme, iré a prisión, mi vida se acabó.\n"); Sleep(500);
						text("- Roberto tranquilízate.\n"); Sleep(500);
						text("- No, no, tal vez tu deberías de tranquilizarte.\n"); Sleep(500);
						PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
						system("CLS");
						text("- En otras noticias Roberto Rodríguez fue acusado de homicidio múltiple , al parecer el joven de 16 años estaba bajo inducción de LSD y disparó sobre dos compañeros suyos, ambos de 16 años, el joven Miguel Mora recibió una bala en la cabeza matándolo al instante, y la joven Laura Heredia recibió múltiples disparos en el pecho muriendo desangrada. Actualmente el joven acusado está encerrado en un reformatorio, esperando cumplir la mayoría de edad para que su juicio continúe, algunas personas especulan que debería recibir pena de muerte, aunque algunos expertos afirman que solo recibirá cadena perpetua debido a su análisis psiquiátrico.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					default:
					{
						system("CLS");
						text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
				text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
		text("- Grandes estándares de limpieza ¿eh?\n"); Sleep(500);
		text("- Solo los necesarios para vivir bien, ¿qué es eso?\n"); Sleep(500);
		text("- ¿Esto? Es algo para divertirnos mejor.\n"); Sleep(500);
		text("- ¿Es marihuana?\n"); Sleep(500);
		text("- Ja, no se te puede engañar ¿verdad, quieres un poco?\n"); Sleep(500);
		text("- (Merezco relajarme un poco) Está bien, dame eso.\n"); Sleep(500);
		PlaySound(TEXT("fumar.wav"), NULL, SND_SYNC);
		text("- Wow hermano tranquilo, fue un toque muy largo.\n"); Sleep(500);
		system("CLS");
		text("Unos minutos más tarde.\n\n"); Sleep(500);
		text("- ¿Cómo te sientes?\n"); Sleep(500);
		text("- Bastante relajado, te da una perspectiva muy diferente de la vida ¿sabes?\n"); Sleep(500);
		text("- ¿A qué te refieres?\n"); Sleep(500);
		text("- Tu sabes te pone a pensar, por ejemplo, mi papá.\n"); Sleep(500);
		text("- ¿Qué hay con él?\n"); Sleep(500);
		text("- Siempre ha sido muy duro conmigo, y nunca logro impresionarlo.\n"); Sleep(500);
		text("- Suena a alguien desagradable.\n"); Sleep(500);
		text("- Si lo es.\n"); Sleep(500);
		text("- Tal vez deberíamos darle una lección.\n"); Sleep(500);
		text("- ¿Qué? ¿A qué te refieres?\n"); Sleep(500);
		text("- Ya sabes, una pequeña broma, si él dice que eres un delincuente, probémosle que es así, tengo una idea para una pequeña broma que le podemos hacer.\n"); Sleep(500);
		text("- Te escucho...\n"); Sleep(500);
		system("CLS");
		text("Más tarde en casa de Roberto.\n\n"); Sleep(500);
		text("- Bien Roberto, ya sabes el plan.\n"); Sleep(500);
		text("- Sí. Espera, mis papás están peleando, aguarda, ¡Papá!\n"); Sleep(500);
		text("- ¿Tu qué haces aquí?\n"); Sleep(500);
		text("- No vuelvas a poner una mano en mi mamá otra vez.\n"); Sleep(500);
		text("- ¿Y tú que harás al respecto? Pedazo de mierda.\n"); Sleep(500);
		text("- Tal vez podríamos darle una lección, Sr. Rodríguez.\n"); Sleep(500);
		PlaySound(TEXT("carga.wav"), NULL, SND_SYNC);
		text("- Miguel que haces con eso.\n"); Sleep(500);
		text("- Venga hermano, acaba de golpear a tu mamá, y no tarda en golpearte a ti.\n"); Sleep(500);
		text("- Si, pero esta no es manera de solucionar esto.\n"); Sleep(500);
		text("- ¿Creen tener los pantalones para venir a mi casa y amenazarme de esta manera?\n"); Sleep(500);
		text("- Vamos chico lindo dispara.\n"); Sleep(500);
		text("- ¡No! Aguarda Miguel no hagas esto. Quiero hacerlo yo.\n"); Sleep(500);
		text("- ¿Qué?\n"); Sleep(500);
		text("- Eso quería oír hermano, ten. Ahora dispárale a tu papá.\n\n"); Sleep(500);
		text("¿Qué haces?\n\n"); Sleep(500);
		text("  1. - Soltar el arma.\n"); Sleep(500);
		text("  2. - Disparar a tu papá.\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
			case 1:
			{
				system("CLS");
				text("- No, no puedo hacer algo así.\n"); Sleep(500);
				text("- Si tú no puedes yo lo haré.\n"); Sleep(500);
				text("- Suéltame Miguel no cometas una tontería.\n"); Sleep(500);
				text("- Tontería la tuya, haré lo que tú no puedes.\n"); Sleep(500);
				PlaySound(TEXT("disparo.wav"), NULL, SND_SYNC); Sleep(1000);
				system("CLS");
				text("- Roberto Rodríguez, un joven de 16 años es acusado de asesinato tras disparar al joven Miguel Mora el pasado martes 12 de marzo, aparentemente Roberto y sus padres estaban bajo amenaza de Miguel, y Roberto en defensa propia tomo el arma de Miguel y lo asesinó para salvar a su familia, actualmente Roberto está en el reformatorio esperando cumplir la mayoría de edad para dictar cuál será su delito tras los acontecimientos en defensa de sí mismo y sus padres.\n\n"); Sleep(500);
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
				text("- Roberto Rodríguez, un joven de 16 años es acusado de asesinato tras asesinar a su padre con un arma de fuego, Miguel Mora, cómplice de Roberto fue quien otorgo el arma y quien sedujo a Roberto a cometer dicha acción, Genaro Rodríguez el padre y víctima de Roberto presentaba indicios de violencia y adicción al alcohol. Actualmente Roberto está en el reformatorio esperando cumplir la mayoría de edad para dictar cuál será su delito tras los acontecimientos en defensa de sí mismo y sus padres.\n\n"); Sleep(500);
				text("F"); Sleep(500);
				text("i"); Sleep(500);
				text("n"); Sleep(500);
				text(".\n"); Sleep(500);
				break;
			}
			default:
			{
				system("CLS");
				text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
		text("- ¿Qué es eso?\n"); Sleep(500);
		text("- Son polvos mágicos amigo, te ayudan a divertirte más, y hacer cosas que no pensarías hacer. ¿Quieres un poco?\n\n"); Sleep(500);
		text("¿Qué haces?\n\n"); Sleep(500);
		text("  1. Aceptar\n"); Sleep(500);
		text("  2. Rechazar\n\n"); Sleep(500);
		cin >> decision;
		switch (decision)
		{
			case 1:
			{
				system("CLS");
				text("- Al diablo, venga.\n"); Sleep(500);
				text("- ¡Bien! Esa es la actitud ¿cómo te sientes?\n"); Sleep(500);
				text("- Me siento, raro, pero con mucha energía.\n"); Sleep(500);
				text("- Eso es lo que quería escuchar, oye viejo Laura y yo tenemos que recoger unas tontas cosas que nuestros padres pidieron, necesitamos ir de inmediato, ¿qué te parece si nos llevas hasta allá?\n"); Sleep(500);
				text("- Espera ¿me dejaras conducir tu auto?\n"); Sleep(500);
				text("- Claro, creo que lo hará bien.\n"); Sleep(500);
				text("- Nunca he conducido antes, bueno tome unas lecciones con mi papá pero nunca he manejado sin él.\n"); Sleep(500);
				text("- Anímate, todo saldrá bien.\n"); Sleep(500);
				text("- De acuerdo. Estaría bien un poco de acción.\n"); Sleep(500);
				system("CLS");
				text("- Bien, es aquí.\n"); Sleep(500);
				text("- ¿Afuera de esta tienda?\n"); Sleep(500);
				text("- Si estaciónate justo ahí y espera que Laura y yo salgamos, ¿de acuerdo?\n"); Sleep(500);
				text("- Emm, vale. (No me siento bien, mi cuerpo está hiperactivo y por alguna razón quiero más)\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("tienda.wav"), NULL, SND_SYNC);
				text("- Corre Roberto ¡arranca el auto!\n"); Sleep(500);
				text("- ¡¿Qué es ese sonido?! Creí que veníamos por cosas de tu papá.\n"); Sleep(500);
				text("- Si, si, te lo explico después ¡Ahora arranca!\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("sirena.wav"), NULL, SND_SYNC);
				text("- Mierda, la policía.\n"); Sleep(500);
				text("- ¡¿Qué?! ¡¿La policía?! ¿En qué mierda me metiste Miguel?\n"); Sleep(500);
				text("- Venga es bastante obvio ¿no se siente bien toda esta adrenalina?\n"); Sleep(500);
				text("- (De cierta forma si, se siente bien) Pero esto está mal ¡La policía nos persigue!\n"); Sleep(500);
				text("- Entonces piérdelos, mira, da vuelta en ese callejón.\n"); Sleep(500);
				PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
				system("CLS");
				text("- Mierda Roberto.\n"); Sleep(500);
				text("- La policía nos tiene acorralados.\n"); Sleep(500);
				text("- ¡Salgan del vehículo con las manos arriba!\n"); Sleep(500);
				text("- Esto les dará una lección.\n"); Sleep(500);
				text("- Mierda Miguel, guarda esa pistola.\n"); Sleep(500);
				text("- No seas marica Roberto.\n"); Sleep(500);
				PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
				text("- ¡Mierda! ¡Mataron a Miguel!\n"); Sleep(500);
				text("- ¡Toma esa pistola y dispárales!\n"); Sleep(500);
				text("- No puedo hacer eso Laura.\n"); Sleep(500);
				text("- ¡Hazlo o nos matarán!\n\n"); Sleep(500);
				text("¿Qué haces?\n\n"); Sleep(500);
				text("  1. Tomar la pistola y disparar.\n"); Sleep(500);
				text("  2. Entregarte a la policía.\n\n"); Sleep(500);
				cin >> decision;
				switch (decision)
				{
					case 1:
					{
						system("CLS");
						PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
						text("- Un grupo de jóvenes fueron acribillados por la policía, al parecer los chicos de 16 años. Roberto Rodríguez, Miguel Mora y Laura Heredia asaltaron una tienda de electrodomésticos iniciando una persecución con la policía, es un momento de la persecución el auto de los jóvenes se volteó, y Miguel que portaba abrió fuego hacia los policías, en respuesta la policía devolvió fuego contra Miguel, después Laura y Roberto abrieron fuego contra las autoridades, causando así la muerte de los 3 chicos, que según la autopsia estaban bajo el efecto de cocaína.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					case 2:
					{
						system("CLS");
						text("- Un grupo de jóvenes asaltaron una tienda de electrodomésticos, iniciando una persecución con la policía, en un momento de dicha persecución el auto de los delincuentes se volteó, Miguel Mora, un chico de 16 años y presunto líder de la banda abrió fuego contra las autoridades, estas en respuesta lo acribillaron, Roberto Rodríguez y Laura Heredia se entregaron a las autoridades, actualmente en un juicio en proceso los dos jóvenes se encuentran presuntos en el reformatorio, esperando cumplir la mayoría de edad para recibir su dictamen final.\n\n"); Sleep(500);
						text("F"); Sleep(500);
						text("i"); Sleep(500);
						text("n"); Sleep(500);
						text(".\n"); Sleep(500);
						break;
					}
					default:
					{
						system("CLS");
						text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
				text("- Bien tú te lo pierdes.\n"); Sleep(500);
				text("- Oye viejo Laura y yo tenemos que recoger unas tontas cosas que nuestros padres pidieron, necesitamos ir de inmediato, ¿qué te parece si nos llevas hasta allá?\n"); Sleep(500);
				text("- Espera ¿me dejaras conducir tu auto?\n"); Sleep(500);
				text("- Claro, ninguno de nosotros dos está en condiciones aptas para manejar.\n"); Sleep(500);
				text("- Nunca he conducido antes, bueno tome unas lecciones con mi papá, pero nunca he manejado sin él.\n"); Sleep(500);
				text("- Por favor hermano, acepta es importante que hagamos esto, todo saldrá bien.\n"); Sleep(500);
				text("- Mmm, de acuerdo, está bien los llevaré.\n"); Sleep(500);
				system("CLS");
				text("- Bien, es aquí.\n"); Sleep(500);
				text("- ¿Afuera de esta tienda?\n"); Sleep(500);
				text("- Si estaciónate justo ahí y espera que Laura y yo salgamos, ¿de acuerdo?\n"); Sleep(500);
				text("- Emm, vale. (algo me huele mal, debí de escuchar a Adrián)\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("tienda.wav"), NULL, SND_SYNC);
				text("- Corre Roberto ¡arranca el auto!\n"); Sleep(500);
				text("- ¡¿Qué es ese sonido?! Creí que veníamos por cosas de tu papá.\n"); Sleep(500);
				text("- Si, si, te lo explico después ¡Ahora arranca!\n"); Sleep(500);
				system("CLS");
				PlaySound(TEXT("sirena.wav"), NULL, SND_SYNC);
				text("- Mierda, la policía.\n"); Sleep(500);
				text("- ¡¿Qué?! ¡¿La policía?! ¿En qué mierda me metiste Miguel?\n"); Sleep(500);
				text("- Venga es bastante obvio cerebrito, ahora acelera si no quieres que nos atrapen.\n"); Sleep(500);
				text("- ¡No! esto está mal, me entregaré a la policía.\n"); Sleep(500);
				PlaySound(TEXT("carga.wav"), NULL, SND_SYNC);
				text("- Yo lo pensaría dos veces genio.\n"); Sleep(500);
				text("- Ahora acelera si no quieres que te vuele la cabeza. Entra por ese callejón.\n\n"); Sleep(500);
				text("¿Qué haces?\n\n"); Sleep(500);
				text("  1. Das vuelta en el callejón.\n"); Sleep(500);
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
						text("- La policía nos tiene acorralados.\n"); Sleep(500);
						text("- ¡Salgan del vehículo con las manos arriba!\n"); Sleep(500);
						text("- Esto les dará una lección.\n"); Sleep(500);
						text("- Mierda Miguel, guarda esa pistola.\n"); Sleep(500);
						text("- No seas marica Roberto.\n"); Sleep(500);
						PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
						text("- ¡Mierda! ¡Mataron a Miguel!\n"); Sleep(500);
						text("- ¡Toma esa pistola y dispárales!\n"); Sleep(500);
						text("- No puedo hacer eso Laura.\n"); Sleep(500);
						text("- ¡Hazlo o nos matarán!\n\n"); Sleep(500);
						text("¿Qué haces?\n\n"); Sleep(500);
						text("  1. Tomar la pistola y disparar.\n"); Sleep(500);
						text("  2. Entregarte a la policía.\n\n"); Sleep(500);
						cin >> decision;
						switch (decision)
						{
							case 1:
							{
								system("CLS");
								PlaySound(TEXT("tiroteo.wav"), NULL, SND_SYNC);
								text("- Un grupo de jóvenes fueron acribillados por la policía, al parecer los chicos de 16 años. Roberto Rodríguez, Miguel Mora y Laura Heredia asaltaron una tienda de electrodomésticos iniciando una persecución con la policía, es un momento de la persecución el auto de los jóvenes se volteó, y Miguel que portaba abrió fuego hacia los policías, en respuesta la policía devolvió fuego contra Miguel, después Laura y Roberto abrieron fuego contra las autoridades, causando así la muerte de los 3 chicos, que según la autopsia estaban bajo el efecto de cocaína.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							case 2:
							{
								system("CLS");
								text("- Un grupo de jóvenes asaltaron una tienda de electrodomésticos, iniciando una persecución con la policía, en un momento de dicha persecución el auto de los delincuentes se volteó, Miguel Mora, un chico de 16 años y presunto líder de la banda abrió fuego contra las autoridades, estas en respuesta lo acribillaron, Roberto Rodríguez y Laura Heredia se entregaron a las autoridades, actualmente en un juicio en proceso los dos jóvenes se encuentran presuntos en el reformatorio, esperando cumplir la mayoría de edad para recibir su dictamen final.\n\n"); Sleep(500);
								text("F"); Sleep(500);
								text("i"); Sleep(500);
								text("n"); Sleep(500);
								text(".\n"); Sleep(500);
								break;
							}
							default:
							{
								system("CLS");
								text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
						text("- ¡¿Qué haces, imbécil?!\n"); Sleep(500);
						PlaySound(TEXT("choqueb.wav"), NULL, SND_SYNC);
						text("- Un grupo de jóvenes fueron detenidos por la policía por un robo a una tienda de electrodomésticos, Miguel Mora y Laura Heredia fueron acusados de extorsionar a Roberto Rodríguez para ingerir drogas y ser su cómplice en el asalto. En un acto heroico Roberto quien manejaba el auto decidió volcar el auto por un puente, deteniendo a Miguel y su cómplice, los tres jóvenes están en juicio, pero expertos afirman que con un buen abogado podrían reducir los años de detención de Roberto.\n\n"); Sleep(500);
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
				text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
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
		text("El número ingresado no corresponde a ninguna decisión.\n"); Sleep(500);
		text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
		cin >> salir;
		end(salir);
	}

	/*Cierre*/
	
	system("CLS");
	text("Eso ha sido todo ¡espero que te haya gustado tu final! recuerda que hay aún más finales por descubrir ¡no te rindas!\n"); Sleep(500);
	text("1. para volver a intentarlo, cualquier otra tecla para salir\n"); Sleep(500);
	cin >> salir;
	end(salir);

	return 0;

}