Algoritmo Práctica2
	Escribir "Hola, vamos a comparar dos números, ingresa el primer número: "
	Leer num_uno
	Escribir "Ingresa el segundo número: "
	Leer num_dos
	Si num_uno > num_dos Entonces
		Escribir "El número ", num_uno, " es el mayor"
		Escribir "Y el número ", num_dos, " es el menor"
	SiNo
		Si num_dos > num_uno Entonces
			Escribir "El número ", num_dos, " es el mayor"
		SiNo
			Escribir "Los dos números son iguales"
		FinSi
	FinSi
	Escribir "Que tengas buen día :)"
FinAlgoritmo
