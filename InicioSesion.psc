Algoritmo InicioSesion
	Definir user, pass Como Caracter
	Definir contador Como Entero
	
	contador = 0
	
	Mientras contador < 3 Hacer
		Escribir "Ingresa usuario "
		Leer user
		Escribir "Ingresa contraseña"
		Leer pass
		Si user == NULL Entonces
			Escribir "No ingresastes nada"
		SiNo
			Si user == "admin" Y pass=="123" Entonces
				Escribir "Bienvenido"
				//contador = 4
			SiNo
				Escribir "No eres bienvenido"
			Fin Si
		Fin Si
		
		contador = contador + 1
	Fin Mientras
	
	
	
	
	
FinAlgoritmo
