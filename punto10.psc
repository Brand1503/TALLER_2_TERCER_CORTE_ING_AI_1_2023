Algoritmo punto10
    Definir ladoa como entero
    Definir ladob como entero
    Definir angulo como entero
    Definir resultado como real
    Definir PII como real
    Definir anguloradianes como real
    
    PII <- 3.141592
    Escribir "Hallar el �ngulo en radianes:"
    Escribir "Ingresa el valor del lado a:"
    Leer ladoa
    Escribir "Ingresa el valor del lado b:"
    Leer ladob
    Escribir "Ingresa el valor del �ngulo formado en grados:"
    Leer angulo
    anguloradianes <- (PII / 180) * angulo
    resultado <- (1.0 / 2.0) * ladoa * ladob * Sen(anguloradianes)
    
    
    Escribir "El area del tri�ngulo es: ", resultado
    
FinAlgoritmo