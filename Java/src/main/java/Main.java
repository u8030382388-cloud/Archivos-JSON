import com.fasterxml.jackson.databind.ObjectMapper;
import java.io.InputStream;

public class Main {

    public static void main(String[] args) {

        ObjectMapper mapper = new ObjectMapper();

        try (InputStream input = Main.class.getResourceAsStream("/datos.json")) {

            if (input == null) {
                throw new RuntimeException("No se encontró el archivo datos.json");
            }

            Usuario usuario = mapper.readValue(input, Usuario.class);

            System.out.println(usuario);

        } catch (Exception e) {
            System.err.println("Ha ocurrido un error al leer el JSON:");
            e.printStackTrace();
        }
    }
}
