Algoritmo suma_n_numeros
	Escribir "Ingrese un n�mero ( 0 = Salir)";
	Leer numero;
	total<-0;
	Mientras numero<>0 Hacer
		total<-total+numero;
		Escribir "Ingrese otro n�mero (0 = Salir)";
		Leer numero;
	Fin Mientras
	Escribir "El total acumulado es: ", total;
	
FinAlgoritmo
