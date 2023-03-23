Algoritmo ConversionDolarColon
	Definir colon, dolar Como Real
	//Entrada de datos 
	Escribir "Ingresa la cantidad de dolar"
	Leer dolar
	//Proceso 
	Si dolar > 0 Entonces
		Escribir "Valor valido"
		colon = dolar * 8.75
	SiNo
		Escribir "Valor no valido"
	Fin Si
	//Salida
	Escribir "La conversión a colones " colon
FinAlgoritmo
