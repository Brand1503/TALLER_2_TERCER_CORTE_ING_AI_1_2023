Proceso hallarnotadefinitiva
	definir parcialpr1 Como Real
	definir tallerpr1 como real
	definir quiz1 Como real
	definir ejercicioenclase Como Real
	definir quiz2 como real 
	definir exposicion como real
	definir nota70 como real 
	definir nota30 como real 
	definir nota100 Como Real
	
	Escribir "HALLAR LA NOTA DEFINITIVA"
	Escribir "Ingresa las notas definitivas:"
	Escribir "Nota del parcial"
	leer parcialpr1
	Escribir "Nota del taller 1"
	Leer tallerpr1
	Escribir "Nota del Quiz 1"
	leer quiz1
	Escribir "Nota del ejercicio en clase"
	Leer ejercicioenclase
	Escribir "Nota del quiz 2"
	leer quiz2
	Escribir "Nota de la exposicion"
	Leer exposicion
	
	nota70<-((parcialpr1*80)/100)+((tallerpr1*20)/100)
	nota30<-((quiz1*25)/100)+((ejercicioenclase*25)/100)+((quiz2*25)/100)+((exposicion*25)/100)
	nota100<-((nota70*70)/100)+((nota30*30)/100)
	
	escribir "la nota definitiva es",nota100 
	
FinProceso
