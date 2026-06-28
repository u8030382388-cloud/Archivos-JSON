public class Usuario {

    private String nombre;
    private int edad;
    private String lenguaje;

    public Usuario() {
    }

    public Usuario(String nombre, int edad, String lenguaje) {
        this.nombre = nombre;
        this.edad = edad;
        this.lenguaje = lenguaje;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public String getLenguaje() {
        return lenguaje;
    }

    public void setLenguaje(String lenguaje) {
        this.lenguaje = lenguaje;
    }

    @Override
    public String toString() {
        return "Usuario{" +
                "nombre='" + nombre + '\'' +
                ", edad=" + edad +
                ", lenguaje='" + lenguaje + '\'' +
                '}';
    }
}