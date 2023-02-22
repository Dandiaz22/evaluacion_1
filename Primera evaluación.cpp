/* 
Date 22/02/2023
Author Daniel Alberto Díaz Balbuena
*/



/*
Incluimos la librería standard imput-output para poder meter datos y nos devuelva en pantalla ya compilado el programa.
*/
#include <stdio.h>


/* 
Función principal main, declaramos variable de tipo caracter asignandole el nombre de "pregunta" y variable de tipo entero con el nombre de puntaje con valor por determinar.
*/
int main() {
    char pregunta;
    int puntaje = 0;



/* 
Llamamos a la función printf para que nos devuelva el mensaje en la pantalla.
*/
    printf("Responda las preguntas que se piden con una -s- o -n-.\n");
    printf("Cada respuesta afirmativa sumara 3 puntos, mientras que las negativas solo 1.\n");



/* 
Primera pregunta

Llamamos a la funcion printfpara preguntar al usuario y que este nos responda con s o n.
Se lamma a la funcion scanf para almacenar el dato que nos porporciona y almacernarlo en la variable "pregunta".
Se llama al condicional if, para que depediendo de la respuesta del usuario se le asignen diferentes puntos s = 3 y n = 1, y se almacenen en la avariable puntaje.
*/
    printf("Le gustan los animales? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
   
    
/* 
Segunda pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Disfruta ver todo tipo de peliculas? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
    puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
  
    
/* 
Tercera pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Le gusta el mismo genero en peliculas que a ti? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
 
    
/* 
Cuarta pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Tienen pasatiempos que puedan relacionarse o compartir? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
  
    
/* 
Quinta pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Disfruta escuchar todo tipo de musica? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
    
    
/* 
Sexta pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Le gusta el mismo genero musical que a ti? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
  
    
/* 
Septima pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Conoces a sus amigos cercanos? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
    
    
/* 
Octava pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Tienen deportes en comun que les guste practicar? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
    
    
/* 
Novena pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Demuestra interes en ti? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
   
    
 /* 
Decima pregunta

Mismas funciones que en la pregunta anterior, solo cambia la pregunta al usuario.
*/
    printf("Han salido a comer o alguna actividad solos? (s - n)\n");
    scanf(" %c", &pregunta);
    if(pregunta == 's'){
        puntaje += 3;
    }
    if(pregunta == 'n'){
        puntaje += 1;
    }
    
    
/* 
Resultado
Se llama la funcion printf para mostrar al usuario su puntaje total, los datos almacenados en la variable "puntaje".
Llamamos al condicional if por si el resultado es mayor o igual que 21 (el 70%) muestre en pantalla con la funcion printf que se recomienda seguir.
Llamamos otra condicinal if por si el resultado es menor que 21, se muestre el mensaje en pantalla con la funcion printf que no es recomendable seguir.

*/
    printf("Tu puntaje es de: %d\n", puntaje);
    if (puntaje >= 21){
        printf("El puntaje demuestra posibilidad de compatibilidad, se recomienda seguir con la relacion.");
    }
    if (puntaje < 21){
        printf("El puntaje muestra que no hay mucha compatibilidad, se recomienda alejarse (se vale llorar).");
    }
    
    
    
    
/* 
Termina el codigo y devuelve 0.
*/
    
    return 0;			
    
}