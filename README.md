# SSO-Actividad-12
**Requerimientos:**<br>
1. Existen un solo productor y un solo consumidor.
2. Se cuenta con un “contenedor” con capacidad para 22 elementos, en el cual el productor colocará y el consumidor retirará elementos.
3. El “contenedor”, lógicamente es un buffer circular y acotado, es decir al llegar a la última casilla (22) comenzará nuevamente en la casilla 1.
4. El producto puede ser: números, caracteres especiales, letras, etc.
5. Solo puede ingresar uno a la vez al contenedor.
6. Para que el Productor pueda entrar, debe haber espacio en el contenedor.
7. Para que el Consumidor pueda entrar, debe existir producto.
8. En la pantalla debe aparecer:
- El contenedor con los espacios claramente marcados y numerados.
- La información del productor, es decir, mostrar si está dormido, trabajando, cuando intente ingresar al contenedor, etc.
- La información del consumidor, dormido, trabajando, cuando intente ingresar, etc.
- Mensajes que indiquen en todo momento, quien está trabajando, o quien intenta trabajar, o si está dormido.
9. Deben manejarse tiempos aleatorios para dormir al productor y al consumidor.
10. Al “despertar” intentará producir y/o consumir respectivamente, verificando que pueda hacerlo según sus condiciones.
11. Al entrar al buffer podrán producir y/o consumir de tres a seis elementos en cada entrada.
12. El productor colocará elementos en orden, comenzando con la primera casilla y continuando en la casilla donde quedo.
13. El consumidor quitará elementos en orden, comenzando también por la primera casilla y continuando en donde quedo la última entrada.
14. Cuando el productor y/o el consumidor lleguen a la casilla 22, irán de nuevo a la 1 y continuarán produciendo y/o consumiendo respectivamente.
15. El programa terminara cuando se presione la tecla “ESC”.
Para la entrega del programa deberá realizar un video con las especificaciones que se soliciten al momento de la explicación, además deberá tener un reporte de este el cual consta de:<br>
• Datos personales<br>
• Datos de la materia<br>
• Número de actividad<br>
• Objetivo de la actividad<br>
• Notas acerca del lenguaje, como soluciono y conclusiones. <br><br>
**Entregables:**<br>
Código fuente (si el lenguaje en el que trabaja lo permite entregue el ejecutable), reporte y video de no más de 5 minutos. Para el video puede dejar la liga en el mismo reporte y subir el video a drive o YouTube. Deberá subir un solo archivo (si es necesario en comprimido) a la plataforma de moodle2, en tiempo y forma. El nombre del archivo deberá estar compuesto por su primer apellido, su primer nombre, sección y número de actividad, por ejemplo: BecerraVioletaD01Act6.pdf. Si se pasa de la fecha de entrega tendrá oportunidad de entrega tardía en Classroom con un menor puntaje.
