#include <iostream>
using namespace std;

class persona
{
private:
    string nombre;
    float dni;

public:
    persona();
    persona(string, float);
    void setnombre(string);
    void setdni(float);
    string getnombre();
    float getdni();
};

class autor : public persona
{
private:
    string medio;

public:
    autor();
    autor(string, float, string);
    void setmedio(string);
    string getmedio();
};

class usuario : public persona
{
private:
    int edad;

public:
    usuario();
    usuario(string, float, int);
    void setedad(int);
    int getedad();
};

class comentario
{
private:
    int numero;
    string texto;
    usuario usuario_comentario;

public:
    comentario();
    comentario(int, string, usuario);
    void setnumero(int);
    void settexto(string);
    void setusuario(usuario);
    int getnumero();
    string gettexto();
    usuario getusuario();
};

class fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    fecha();
    fecha(int, int, int);
    void setdia(int);
    void setmes(int);
    void setanio(int);
    int getdia();
    int getmes();
    int getanio();
};

class noticia
{
private:
    string titulo;
    string detalle;
    fecha fecha_publicacion;
    autor autor_articulo;
    comentario comentarios[100];

public:
    noticia();
    noticia(string, string, fecha, autor, comentario[100]);
    void settitulo(string);
    void setdetalle(string);
    void setfecha(fecha);
    void setautor(autor);
    void setcomentario(comentario);
    string gettitulo();
    string getdetalle();
    fecha getfecha();
    autor getautor();
    comentario getcomentario();
};

persona::persona()
{
}

persona::persona(string nombre_, float dni_)
{
    nombre = nombre_;
    dni = dni_;
}

void persona::setnombre(string nombre_)
{
    nombre = nombre_;
}

void persona::setdni(float dni_)
{
    dni = dni_;
}

string persona::getnombre()
{
    return nombre;
}

float persona::getdni()
{
    return dni;
}

autor::autor()
{
}

autor::autor(string nombre_, float dni_, string medio_) : persona(nombre_, dni_)
{
    medio = medio_;
}

void autor::setmedio(string medio_)
{
    medio = medio_;
}

string autor::getmedio()
{
    return medio;
}

usuario::usuario()
{
}

usuario::usuario(string nombre_, float dni_, int edad_) : persona(nombre_, dni_)
{
    edad = edad_;
}

void usuario::setedad(int edad_)
{
    edad = edad_;
}

int usuario::getedad()
{
    return edad;
}

comentario::comentario()
{
}

comentario::comentario(int numero_, string texto_, usuario usuario_comentario_)
{
    numero = numero_;
    texto = texto_;
    usuario_comentario = usuario_comentario_;
}

void comentario::setnumero(int numero_)
{
    numero = numero_;
}

void comentario::settexto(string texto_)
{
    texto = texto_;
}

void comentario::setusuario(usuario usuario_comentario_)
{
    usuario_comentario = usuario_comentario_;
}

int comentario::getnumero()
{
    return numero;
}

string comentario::gettexto()
{
    return texto;
}

usuario comentario::getusuario()
{
    return usuario_comentario;
}

fecha::fecha()
{
}

fecha::fecha(int dia_, int mes_, int anio_)
{
    dia = dia_;
    mes = mes_;
    anio = anio_;
}

void fecha::setdia(int dia_)
{
    dia = dia_;
}

void fecha::setmes(int mes_)
{
    mes = mes_;
}

void fecha::setanio(int anio_)
{
    anio = anio_;
}

int fecha::getdia()
{
    return dia;
}

int fecha::getmes()
{
    return mes;
}

int fecha::getanio()
{
    return anio;
}

noticia::noticia()
{
}

noticia::noticia(string titulo_, string detalle_, fecha fecha_publicacion_, autor autor_articulo_, comentario c[100])
{
    titulo = titulo_;
    detalle = detalle_;
    fecha_publicacion = fecha_publicacion_;
    autor_articulo = autor_articulo_;
    for (int i = 0; i < 100; i++)
    {
        comentarios[i] = c[i];
    }
}

void noticia::settitulo(string titulo_)
{
    titulo = titulo_;
}

void noticia::setdetalle(string detalle_)
{
    detalle = detalle_;
}

void noticia::setfecha(fecha fecha_publicacion_)
{
    fecha_publicacion = fecha_publicacion_;
}

void noticia::setautor(autor autor_articulo_)
{
    autor_articulo = autor_articulo_;
}

void noticia::setcomentario(comentario c)
{
    for (int i = 0; i < 10; i++)
    {
        comentarios[i] = c;
    }
}

string noticia::gettitulo()
{
    return titulo;
}

string noticia::getdetalle()
{
    return detalle;
}

fecha noticia::getfecha()
{
    return fecha_publicacion;
}

autor noticia::getautor()
{
    return autor_articulo;
}

comentario noticia::getcomentario()
{
    return comentarios[100];
}

void registro_autores()
{
    string nombre, medio;
    float dni;

    cout << "--------------------AUTORES-------------------" << endl;
    cout << "Ingrese el nombre del autor: " << endl;
    cin >> nombre;
    cout << "Ingrese el DNI del autor: " << endl;
    cin >> dni;
    cout << "Ingrese el medio: " << endl;
    cin >> medio;
    autor a(nombre, dni, medio);
    cout << "Autor registrado con exito" << endl;
}

void registro_usuarios()
{
    string nombre;
    float dni;
    int edad;

    cout << "--------------------USUARIOS-------------------" << endl;
    cout << "Ingrese el nombre del usuario: " << endl;
    cin >> nombre;
    cout << "Ingrese el DNI del usuario: " << endl;
    cin >> dni;
    cout << "Ingrese la edad del usuario: " << endl;
    cin >> edad;
    usuario u(nombre, dni, edad);
    cout << "Usuario registrado con exito" << endl;
}

void menu()
{
    cout << "SISTEMA DE NOTICIAS" << endl;
    cout << "1. Registro de autores. " << endl;
    cout << "2. Registro de usuarios. " << endl;
    cout << "3. Carga de noticias a publicar por parte de un autor. " << endl;
    cout << "4. Registro de comentarios sobre las noticias por parte de usuarios registrados. " << endl;
    cout << "5. Listar noticias publicadas en el ano. " << endl;
    cout << "6. Listado de noticias publicadas el ultimo mes. " << endl;
    cout << "7. Mostrar una noticia y sus comentarios asociados. " << endl;
    cout << "8. Articulos publicados por un determinado autor. " << endl;
    cout << "9. Salir. " << endl;
}

int main()
{

    int opc;
    do
    {
        menu();
        cin >> opc;
        switch (opc)
        {
        case 1:
            registro_autores();
            break;
        case 2:
            registro_usuarios();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            cout << "Saliendo..." << endl;
            break;
        }
    } while (opc != 9);
}