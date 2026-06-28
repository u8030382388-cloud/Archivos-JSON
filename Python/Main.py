import json  # Importamos el módulo json para poder trabajar con archivos JSON.

# Diccionario de Python que contiene los datos que queremos guardar.
datos = {
    "nombre": "Gabriel",
    "edad": 12,
    "lenguaje": "Python"
}

# Abrimos (o creamos) el archivo "datos.json" en modo escritura ("w").
# encoding="utf-8" permite guardar correctamente caracteres como ñ, á, é, etc.
with open("JSON/Python/datos.json", "w", encoding="utf-8") as archivo:

    # Convertimos el diccionario de Python a formato JSON y lo guardamos en el archivo.
    # indent=4 añade una indentación de 4 espacios para que el JSON sea más legible.
    json.dump(datos, archivo, indent=4)
