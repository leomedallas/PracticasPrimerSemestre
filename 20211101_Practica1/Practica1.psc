Algoritmo Valor_absoluto
	Escribir "Hola bienvenido, ingresa un número"
	Leer numero_no_abs 
	Si numero_no_abs > 0 Entonces
		Escribir numero_no_abs
	SiNo
		numero_no_abs <- numero_no_abs * (-1)
		Escribir numero_no_abs
	FinSi
	Escribir "El valor absoluto es: ", numero_no_abs
FinAlgoritmo
