Algoritmo ConversionDecimalBinario
	Definir val, base, res, binario Como Real

	Escribir "Ingrese un valor entero"
	Leer val
	binario = 0
	base = 1
	
	Mientras val > 0 Hacer
		//Residuo de la division 
		res = val Mod 2
		binario = binario + res * base 
		//Almacenara el cociente 
		val = trunc(val/2)
		//base del sistema decimal
		 base = base * 10;
	 Fin Mientras
	 
	Escribir  binario
	
FinAlgoritmo
