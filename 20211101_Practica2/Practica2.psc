Algoritmo Pr�ctica2
	Escribir "Hola, vamos a comparar dos n�meros, ingresa el primer n�mero: "
	Leer num_uno
	Escribir "Ingresa el segundo n�mero: "
	Leer num_dos
	Si num_uno > num_dos Entonces
		Escribir "El n�mero ", num_uno, " es el mayor"
		Escribir "Y el n�mero ", num_dos, " es el menor"
	SiNo
		Si num_dos > num_uno Entonces
			Escribir "El n�mero ", num_dos, " es el mayor"
		SiNo
			Escribir "Los dos n�meros son iguales"
		FinSi
	FinSi
	Escribir "Que tengas buen d�a :)"
FinAlgoritmo
