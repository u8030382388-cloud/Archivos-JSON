#include <stdio.h>
#include <cjson/cJSON.h>

int main() {

    FILE *archivo;
    char contenido[1000];


    archivo = fopen("datos.json", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo JSON");
        return 1;
    }


    fread(contenido, sizeof(char), 1000, archivo);

    fclose(archivo);


    cJSON *json = cJSON_Parse(contenido);

    if (json == NULL) {
        printf("Error leyendo JSON");
        return 1;
    }


    cJSON *nombre = cJSON_GetObjectItem(json, "nombre");
    cJSON *edad = cJSON_GetObjectItem(json, "edad");
    cJSON *lenguaje = cJSON_GetObjectItem(json, "lenguaje");


    printf("Nombre: %s\n", nombre->valuestring);
    printf("Edad: %d\n", edad->valueint);
    printf("Lenguaje: %s\n", lenguaje->valuestring);


    cJSON_Delete(json);

    return 0;
}
