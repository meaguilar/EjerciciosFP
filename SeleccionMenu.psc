Algoritmo SeleccionMenu
	
	Definir opcion Como Entero
	Definir numero1, numero2, suma, resta, multiplicacion, division Como Real
	
	Escribir "Selecciona una opcion 1 - 3"
	Leer opcion
	
	Segun opcion Hacer
		1:
			Escribir "Suma"
			Escribir "Ingresar numero1"
			Leer numero1
			Escribir  "Ingresar numero 2"
			Leer numero2
			suma = numero1 + numero2
			Escribir  "El valor de la suma ", suma
		2:
			Escribir "Hola seleccionaste opcion 2"
		3:
			Escribir "Hola seleccionaste opcion 3"
		De Otro Modo:
			Escribir "No exista la opción"
	Fin Segun
	
FinAlgoritmo
