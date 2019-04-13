Proceso Ejercicio3
	Definir peso,altura,imc Como Real
	Escribir "Ingrese Peso: "
	Leer peso
	Escribir "Ingrese altura: "
	Leer altura
	imc=peso/(altura*altura)
	Escribir "Su imc es: ",imc
	Si imc<15  entonces
		Escribir "Criterio de ingreso en Hospital"
	Sino
		si imc>=15 y imc<20 Entonces
			Escribir "Bajo peso"
		Sino
			si imc>=20 y imc<30 entonces
				Escribir "Peso normal(saludable"
			Sino
				si imc>=30 y imc<40 Entonces
					Escribir "Sobrepeso(Obesidad de grado 1)"
				Sino
					Escribir "Sobrepeso cronico(Obesidad de grado 2)"
				FinSi
			FinSi
		FinSi 
		
	FinSi
	
FinProceso
