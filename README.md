# tp1

## .gitignore

### ¿Por que es conveniente incluirlo?

- Evita subir archivos basura, temporales o autogenerados por el sistema operativo.
- Excluye archivos compilados como .exe, .out, .o, etc.
- Evita subir carpetas como .vscode/, que contienen configuraciones personales.
- Evita que se suban contraseñas de bases de datos o claves de acceso por accidente y queden expuestas públicamente en internet.

### ¿Cuándo se debe hacer?

El momento ideal para crear y configurar el archivo .gitignore es al inicio del proyecto, justo después de inicializar el repositorio o al clonarlo, y antes de realizar el primer git add y git commit.

### ¿Cómo configuraría el .gitignore?

Para configurarlo, simplemente se debe crear un archivo en la raíz de la carpeta de trabajo y llamarlo exactamente .gitignore, dentro del archivo se escriben los patrones de los archivos o carpetas que se desean ignorar, usando una línea para cada regla.

## Punto 3.f.a

El codigo realiza 3 operaciones sobre el numero "dato_secreto" el cual tiene por valor 42. La funcion procesar enigma, invocada en el main, recibe la direccion de memoria de dato_secreto e invoca 3 funciones pasandoles decha direccion de memoria a cada una.

- La primera funcion (f_alpha) recibe la direccion de memoria de dato_secreto e los digitos del valor guardado. Renombre esta funcion como "invertir_numero".
- La segunda funcion (f_beta) recibe la direccion de memoria de dato_secreto (con sus digitos ya invertidos) y divide el valor de dicho dato en 2. Renombre esta funcion como "dividir_por_dos"-
- La tercera funcion (f_gamma) recibe la direccion de memoria de dato_secreto (con sus digitos ya invertidos y habiendo dividido el resultado por dos) y suma al valor guardado el total de la suma de sus digitos. Renombre esta funcion como "sumar digitos"


## Punto 3.f.b

- No se agrego la biblioteca stdio.h. Para resolverlo solo agregue la linea #include <stdio.h> al principio.
- En el scanf de la linea 13 falta agregar el "&" para especificar la direccion donde guardar el dato. Para resolverlo solo agrego el "&".
- Falta un ";" al final de la linea 18. Para resolverlo agrego dicho ";".
- La funcion "duplicar_numeros" recibe una copia del valor y no modifica la variable original del main. Para resolverlo cambio los parametros de la funcion y especifico que recibe un dato tipo puntero. Tambien modifico la invocacion haciendo que envie una direccion de memoria.
- Falta un ";" al final de la linea 24. Para resolverlo agrego dicho ";".