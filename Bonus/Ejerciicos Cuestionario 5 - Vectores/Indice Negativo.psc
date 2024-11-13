Algoritmo sin_titulo
	Dimension I[5]
	I[0] = 7; I[1] = 5; I[2] = 5; I[3] = 3; I[4] = 15
	B = 5
	A = 30
	Para V<-5 Hasta 1 Con Paso -1 Hacer
		I[V-B]=A-I[B-1]
	FinPara
	Escribir I[0]
	Escribir I[1]
FinAlgoritmo
