Algoritmo sin_titulo
	C = 0
	Leer VEC[C]
	Mientras VEC[C]!=0 Hacer
		C = C  1
		Leer VEC[C]
	FinMientras
	S = 0
	Para I<-0 Hasta C Con Paso 1 Hacer
		S = S + VEC[I]
	FinPara
	Escribir "EL PROMEDIO ES: ", (S/C)
FinAlgoritmo
