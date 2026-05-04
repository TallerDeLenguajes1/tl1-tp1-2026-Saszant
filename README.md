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