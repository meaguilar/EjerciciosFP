Algoritmo EjercicioIntegrador
	Definir user, pass Como Caracter
	Definir contador Como Entero
	Definir opcion Como Entero
	Definir cantidad, precio1, precio2, precio3, total Como real 
	
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
				Escribir "Bienvenido al sistema de ventas"
				
				Escribir "Ingresa una opción Combo 1 (papas + soda) , Combo2(Hamburguesa + papas), combo3 (Combo completo + yogurt)"
				Leer opcion
				Escribir "¿cuántas ordenes quiere?"
				leer cantidad
				
				Segun opcion Hacer
					1:
						Escribir "Seleccionastes Combo 1: Papas + soda"
						precio1 = 2.99
						total = cantidad*precio1
						Escribir "Ha ordenado ", cantidad, " ordenes del combo #1. Su total es: $", total
						Escribir "Cual es tu medio de pago 1 = Efectivo, 0 = tarjeta"
						Leer formaPago
						Si formaPago == 1 Entonces
							Escribir "Cambio para?"
							Leer billete
							Si billete > total Entonces
								cambio = billete - total
								Escribir "Cambio a recibir $", cambio
							SiNo
								Escribir "Lo siento el total es mayor a tu forma de pago"
							FinSi
							
						SiNo
							Escribir "Gracias ganaras puntos por tu compra con tarjeta"
							
						FinSi
						
					2:
						Escribir  "Seleccionastes Combo 2: Hamburguesa + papas"
						precio2 = 4.99
						total = cantidad*precio2
						Escribir "Ha ordenado ", cantidad, " ordenes del combo #2. Su total es: $", total
					3:
						Escribir  "Seleccionastes Combo 3: Combo completo + yougurt"
						precio3 = 6.99
						total = cantidad*precio3
						Escribir "Ha ordenado ", cantidad, " ordenes del combo #3. Su total es: $", total
					De Otro Modo:
						Escribir "La opcion seleccionada no existe"
				Fin Segun
				
				contador = 4
			SiNo
				Escribir "No eres bienvenido"
			Fin Si
		Fin Si
		
		contador = contador + 1
	Fin Mientras
	
	
	
	
	
FinAlgoritmo
