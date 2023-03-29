Algoritmo SeleccionMenu
	Definir opcion Como Entero
	Definir numero1, numero2, suma, resta, multiplicacion, division Como Real
	Escribir "Selecciona una opción 1 - 3, opción1 Suma, opción2 Resta, opción3 División...."
	Leer opcion
	Escribir "Ingresar número1"
	Leer numero1
	Escribir  "Ingresar número 2"
	Leer numero2
	Segun opcion Hacer
		1:
			Escribir "Hola seleccionastes opción 1 Suma"
			suma = numero1 + numero2
			Escribir  "El valor de la suma ", suma
		2:
			Escribir "Hola seleccionaste opción 2 Resta"
		3:
			Escribir "Hola seleccionaste opción 3 División"
		De Otro Modo:
			Escribir "No existe la opción"
	Fin Segun
	
FinAlgoritmo
