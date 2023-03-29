Algoritmo ConversionMetrosCentimetros
	//Definir el tipo de datos
	Definir metros, cms Como Real
	cm = 100
	//Entrada 
	Escribir "Ingresar la cantidad de metros "
	Leer metros
	Si metros == NULL Entonces
		Escribir "No hay valor para procesar"
	SiNo
		Si metros > 0 Entonces
			//Proceso 
			cms = metros * cm
			//Salida
			Escribir "El resultado de la conversión es ", cms, "cms"
		SiNo
			Escribir "No es posible la conversión"
		Fin Si
	Fin Si
FinAlgoritmo
