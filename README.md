
<h1 align="center">
    <img src="https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/solonggif.gif"/>
</h1>

[Click aquí](https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/solong.pdf) para ver el `PDF` del proyecto.

## Introducción

¡Bienvenido al proyecto `so_long`! En este proyecto, te enfrentarás al desafío de desarrollar un juego 2D utilizando la librería gráfica MiniLibX. El objetivo es mejorar tus habilidades en diseño gráfico, manejo de ventanas, eventos, texturas y más. El proyecto tiene como premisa que un personaje que elijas debe escapar del mapa después de recolectar ciertos objetos. ¡Prepárate para un viaje creativo!

## Objetivos

El objetivo principal de este proyecto es crear un juego 2D siguiendo las directrices y requisitos especificados. Deberás demostrar rigor en el uso del lenguaje C, aplicar algoritmos básicos, buscar información relevante y cumplir con las normas establecidas.

## Instrucciones Generales

- **Lenguaje**: Tu proyecto debe estar escrito en C.
- **Normas**: Asegúrate de seguir la Norma de Codificación. Cualquier error en los archivos o funciones adicionales resultará en una calificación de 0.
- **Errores**: Tu código no debe terminar de forma inesperada (segfault, bus error, double free, etc.). Los errores en el funcionamiento del programa llevarán a una calificación de 0.
- **Memoria**: Toda la memoria asignada en el heap debe ser liberada adecuadamente. No se permitirán leaks de memoria.
- **Makefile**: Debes entregar un Makefile que compile los archivos fuente con las flags `-Wall`, `-Werror`, y `-Wextra`, utilizando `cc`. El Makefile no debe hacer relink y debe incluir las reglas `all`, `clean`, `fclean`, `re`, y `bonus`.
- **Librerías Adicionales**: Si utilizas la `libft`, cópiala junto con su Makefile en un directorio `libft` con su correspondiente Makefile. Tu Makefile debe compilar primero la librería y luego el proyecto.
- **Pruebas**: Aunque no es obligatorio entregar programas de prueba, se recomienda desarrollarlos para verificar el correcto funcionamiento de tu proyecto.

## Parte Obligatoria

### Nombre del Programa

- **so_long**

### Archivos a Entregar

- **Makefile**
- **Archivos `.h` y `.c`**
- **Directorios `maps` y `textures`**

### Makefile

- Debe incluir las reglas: `all`, `clean`, `fclean`, `re`, y `bonus`.

### Argumentos

- Debe aceptar un mapa en formato `.ber` como primer argumento.

### Funciones Autorizadas

- **Funciones del sistema**: `open`, `close`, `read`, `write`, `malloc`, `free`, `perror`, `strerror`, `exit`
- **Funciones matemáticas**: Todas las funciones de la librería `math` (compilador flag `-lm`)
- **MiniLibX**: Todas las funciones de la librería MiniLibX
- **Funciones personalizadas**: `ft_printf` y cualquier función equivalente que hayas escrito

### Requisitos del Juego

- **Objetivo**: Recolectar todos los objetos en el mapa y salir por la ruta más corta.
- **Controles**: Usar las teclas W, A, S y D (o ZQSD/teclas de dirección) para mover al personaje.
- **Perspectiva**: 2D (vista de pájaro o lateral).
- **Interacción**: El personaje no puede atravesar las paredes.
- **Visualización**: Mostrar el número de movimientos en el terminal.

### Gestión de Gráficos

- **Ventana**: Mostrar la imagen en una ventana y gestionar la ventana correctamente (minimizar, cambiar de ventana, etc.).
- **Cierre**: Pulsar ESC o hacer clic en la cruz roja debe cerrar el programa limpiamente.

### Mapa

- **Formato**: El mapa debe ser rectangular y cerrado, construido con los siguientes caracteres:
  - `0`: Espacio vacío
  - `1`: Muro
  - `C`: Coleccionable
  - `E`: Salida
  - `P`: Posición inicial del jugador
- **Validación**: El mapa debe contener una salida, al menos un objeto y una posición inicial. Debe ser comprobada su validez.

## Parte Extra (Bonus)

En la parte extra, puedes añadir funcionalidades originales para ganar puntos adicionales. Las funcionalidades extra se evaluarán solo si la parte obligatoria está perfecta. Algunas ideas para la parte extra incluyen:

- **Enemigos**: Añadir patrullas que hagan que el jugador pierda si las toca.
- **Animaciones**: Incluir animaciones de sprites.
- **Contador de Movimientos**: Mostrar el contador de movimientos directamente en la pantalla en lugar del terminal.

Puedes añadir archivos o carpetas adicionales para implementar las funcionalidades extra. La parte extra será evaluada únicamente si la parte obligatoria está libre de errores y funciona correctamente.


---

