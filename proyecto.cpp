#include <iostream>
#include <cstring>
using namespace std;

class persona
{
private:
    const char* nombre[15];
    float dni;

public:
    persona();
    persona(const char*, float);
    void setnombre(const char*);
    void setdni(float);
    char getnombre();
    float getdni();
};

class autor : public persona
{
private:
    char medio[10];

public:
    autor();
    autor(const char*, float, char);
    void setmedio(const char*);
    char getmedio();
};

class usuario : public persona
{
private:
    int edad;

public:
    usuario();
    usuario(char, float, int);
    void setedad(int);
    int getedad();
};

class comentario
{
private:
    int numero;
    char texto[100];

public:
    comentario();
    comentario(int, char);
    void setnumero(int);
    void settexto(char);
    int getnumero();
    char gettexto();
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
    char titulo[20];
    char detalle[30];
    fecha fecha_publicacion;
    autor autor_articulo;
    comentario comentarios[100];

public:
    noticia();
    noticia(char, char, fecha, autor, comentario);
    void settitulo(char);
    void setdetalle(char);
    void setfecha(fecha);
    void setautor(autor);
    void setcomentario(comentario);
    char gettitulo();
    char getdetalle();
    fecha getfecha();
    autor getautor();
    comentario getcomentario();
};

persona::persona()
{
}

persona::persona(const char* nombre_, float dni_)
{
    nombre[15] = nombre_;
    dni = dni_;
}

void persona::setnombre(const char* nombre_)
{
    nombre[15]= nombre_;
}

void persona::setdni(float dni_)
{
    dni = dni_;
}

char persona::getnombre()
{
    return nombre[15];
}

float persona::getdni()
{
    return dni;
}

autor::autor()
{
}

autor::autor(const char* nombre_, float dni_, char medio_) : persona(nombre_, dni_)
{
    medio[10] = medio_;
}

void autor::setmedio(const char* medio_)
{
    strncpy(medio, medio_, sizeof(medio) - 1);
    medio[sizeof(medio) - 1] = '\0';
}

char autor::getmedio()
{
    return medio[10];
}

usuario::usuario()
{
}

usuario::usuario(char nombre_, float dni_, int edad_) : persona(nombre_, dni_)
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

comentario::comentario(int numero_, char texto_)
{
    numero = numero_;
    texto[100]= texto_;
}

void comentario::setnumero(int numero_)
{
    numero = numero_;
}

void comentario::settexto(char texto_)
{
    texto[100] = texto_;
}

int comentario::getnumero()
{
    return numero;
}

char comentario::gettexto()
{
    return texto[100];
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

noticia::noticia(char titulo_, char detalle_, fecha fecha_publicacion_, autor autor_articulo_, comentario c)
{
    titulo[20] = titulo_;
    detalle[30]= detalle_;
    fecha_publicacion = fecha_publicacion_;
    autor_articulo = autor_articulo_;
    comentarios[100] = c;
}

void noticia::settitulo(char titulo_)
{
    titulo[20] = titulo_;
}

void noticia::setdetalle(char detalle_)
{
    detalle[30] = detalle_;
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

char noticia::gettitulo()
{
    return titulo[20];
}

char noticia::getdetalle()
{
    return detalle[30];
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
    char nombre[15], medio[10];
    float dni;

    cout << "--------------------AUTORES-------------------" << endl;
    cout << "Ingrese el nombre del autor: " << endl;
    cin.getline(nombre, 15, '\n');
    cout << "Ingrese el DNI del autor: " << endl;
    cin >> dni;
    cout << "Ingrese el medio: " << endl;
    cin.getline(medio, 10, '\n');
    autor a(nombre[15], dni, medio[10]);
    cout << "Autor registrado con exito" << endl;
}

void registro_usuarios()
{
    char nombre[15];
    float dni;
    int edad;

    cout << "--------------------USUARIOS-------------------" << endl;
    cout << "Ingrese el nombre del usuario: " << endl;
    cin.getline(nombre, 15, '\n');
    cout << "Ingrese el DNI del usuario: " << endl;
    cin >> dni;
    cout << "Ingrese la edad del usuario: " << endl;
    cin >> edad;
    usuario u(nombre[15], dni, edad);
    cout << "Usuario registrado con exito" << endl;
}

void registro_noticias(){
    char titulo[20], nombre[15], medio[10], detalle[30];
    int dia, mes, anio;
    float dni;
    
    cout << "--------------------NOTICIAS-------------------" << endl;
    cout << "Ingrese el titulo de la noticia: " << endl;
    cin.getline(titulo, 20, '\n');
    cout << "Ingrese el detalle de la noticia: " << endl;
    cin.getline(detalle, 30, '\n');
    cout << "Ingrese la fecha de publicacion de la noticia: " << endl;
    cout << "Dia: " << endl;
    cin >> dia;
    cout << "Mes: " << endl;
    cin >> mes;
    cout << "Anio: " << endl;
    cin >> anio;
    fecha fecha_publicacion(dia, mes, anio);
    cout << "Ingrese el autor de la noticia: " << endl;
    cout << "Nombre: " << endl;
    cin.getline(nombre, 15, '\n');
    cout << "DNI: " << endl;
    cin >> dni;
    cout << "Medio: " << endl;
    cin.getline(medio, 10, '\n');
    autor autor_articulo(nombre[15], dni, medio[10]);
    comentario comentarios[100];
    noticia n(titulo[20], detalle[30], fecha_publicacion, autor_articulo, comentarios[100]);
    cout << "Noticia registrada con exito" << endl;   
}

bool usuario_registrado(usuario u, usuario usuarios_registrados[], int num_usuarios)
{
        for (int i = 0; i < num_usuarios; i++)
        {
            if (u.getdni() == usuarios_registrados[i].getdni())
            {
                return true;
            }
        }
        return false;
}
void registro_comentarios(usuario usuarios_registrados[], int num_usuarios)
{
    int numero_noticia;
    char texto[100];
    float dni;
    cout << "--------------------COMENTARIOS-------------------" << endl;
    cout << "Ingrese el numero de la noticia a comentar: " << endl;
    cin >> numero_noticia;
    cout << "Ingrese el DNI del usuario que realiza el comentario: " << endl;
    cin >> dni;
    usuario u;
    u.setdni(dni);
    if (!usuario_registrado(u, usuarios_registrados, num_usuarios))
    {
        cout << "El usuario no esta registrado. No se puede realizar el comentario." << endl;
        return;
    }
    cout << "Ingrese el texto del comentario: " << endl;
    cin.ignore(); 
    cin.getline(texto, 100, '\n');
    comentario c(numero_noticia, texto[100]);
    cout << "Comentario registrado con exito" << endl;
}

void listar_noticias_publicadas_anio(noticia noticias[], int num_noticias, int anio)
    {
        cout << "Noticias publicadas en el año " << anio << ":" << endl;
        for (int i = 0; i < num_noticias; i++)
        {
            if (noticias[i].getfecha().getanio() == anio)
            {
                cout << "Título: " << noticias[i].gettitulo() << endl;
                cout << "Detalle: " << noticias[i].getdetalle() << endl;
                cout << "Fecha de publicación: " << noticias[i].getfecha().getdia() << "/" << noticias[i].getfecha().getmes() << "/" << noticias[i].getfecha().getanio() << endl;
                cout << "Autor: " << noticias[i].getautor().getnombre() << endl;
                cout << "Medio: " << noticias[i].getautor().getmedio() << endl;
                cout << "Comentarios: " << endl;
                comentario comentarios[100] = noticias[i].getcomentario();
                for (int j = 0; j < 100; j++)
                {
                    if (comentarios[j].getnumero() != 0)
                    
                        cout << "Número: " << comentarios[j].getnumero() << endl;
                        cout << "Texto: " << comentarios[j].gettexto() << endl;
                    }
                }
                cout << "----------------------------------------" << endl;
            }
}
    


void listar_noticias_publicadas_ultimo_mes(noticia noticias[], int num_noticias)
{
    cout << "Noticias publicadas en el último mes:" << endl;
    fecha fecha_actual;
    int dia_actual = fecha_actual.getdia();
    int mes_actual = fecha_actual.getmes();
    int anio_actual = fecha_actual.getanio();
    for (int i = 0; i < num_noticias; i++)
    {
        fecha fecha_publicacion = noticias[i].getfecha();
        int mes_publicacion = fecha_publicacion.getmes();
        int anio_publicacion = fecha_publicacion.getanio();
        if (mes_publicacion == mes_actual && anio_publicacion == anio_actual)
        {
            cout << "Título: " << noticias[i].gettitulo() << endl;
            cout << "Detalle: " << noticias[i].getdetalle() << endl;
            cout << "Fecha de publicación: " << fecha_publicacion.getdia() << "/" << mes_publicacion << "/" << anio_publicacion << endl;
            cout << "Autor: " << noticias[i].getautor().getnombre() << endl;
            cout << "Medio: " << noticias[i].getautor().getmedio() << endl;
            cout << "Comentarios: " << endl;
            comentario comentarios[100] = noticias[i].getcomentario();
            for (int j = 0; j < 100; j++)
            {
                if (comentarios[j].getnumero() != 0)
                {
                    cout << "Número: " << comentarios[j].getnumero() << endl;
                    cout << "Texto: " << comentarios[j].gettexto() << endl;
                }
            }
        cout << endl;
        }
    }
}

void mostrar_noticia_comentarios(noticia noticias[], char titulo[]){

    cout << "Noticia: " << titulo << endl;
    for (int i = 0; i < 100; i++)
    {
        if (strcmp(noticias[i].gettitulo(), titulo) == 0)
        {
            cout << "Título: " << noticias[i].gettitulo() << endl;
            cout << "Detalle: " << noticias[i].getdetalle() << endl;
            cout << "Fecha de publicación: " << noticias[i].getfecha().getdia() << "/" << noticias[i].getfecha().getmes() << "/" << noticias[i].getfecha().getanio() << endl;
            cout << "Autor: " << noticias[i].getautor().getnombre() << endl;
            cout << "Medio: " << noticias[i].getautor().getmedio() << endl;
            cout << "Comentarios: " << endl;
            for (int j = 0; j < 100; j++)
            {
                if (noticias[i].getcomentario()[j].getnumero() != 0)
                {
                    cout << "Número de comentario: " << noticias[i].getcomentario()[j].getnumero() << endl;
                    cout << "Texto: " << noticias[i].getcomentario()[j].gettexto() << endl;
                }
            }
            cout << "----------------------------------------" << endl;
        }
    }

}
void articulos_publicados_autor(noticia noticias[], int num_noticias, char nombre_autor[])
{
    cout << "Artículos publicados por el autor " << nombre_autor << ":" << endl;
    for (int i = 0; i < num_noticias; i++)
    {
        if (strcmp(noticias[i].getautor().getnombre(), nombre_autor) == 0)
        {
            cout << "Título: " << noticias[i].gettitulo() << endl;
            cout << "Detalle: " << noticias[i].getdetalle() << endl;
            cout << "Fecha de publicación: " << noticias[i].getfecha().getdia() << "/" << noticias[i].getfecha().getmes() << "/" << noticias[i].getfecha().getanio() << endl;
            cout << "Autor: " << noticias[i].getautor().getnombre() << endl;
            cout << "Medio: " << noticias[i].getautor().getmedio() << endl;
            cout << "Comentarios: " << endl;
            for (int j = 0; j < 100; j++)
            {
                comentario c = noticias[i].getcomentario();
                if (c.getnumero() != 0)
                {
                    cout << "Número de comentario: " << c.getnumero() << endl;
                    cout << "Texto: " << c.gettexto() << endl;
                }
            }
            cout << "----------------------------------------" << endl;
        }
    }
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

    autor autores_registrados[100];
    usuario usuarios_registrados[100];
    noticia noticias[100];
    int num_autores = 0;
    int num_usuarios = 0;
    int num_noticias = 0;
    int anio=2024;
    char titulo[20];
    char nombre_autor[15];
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
            registro_noticias();
            break;
        case 4:
            registro_comentarios(usuarios_registrados, num_usuarios);
            break;
        case 5:
            listar_noticias_publicadas_anio(noticias, num_noticias, anio);
            break;
        case 6:
            listar_noticias_publicadas_ultimo_mes(noticias, num_noticias);
            break;
        case 7:
            mostrar_noticia_comentarios(noticias, titulo);
            break;
        case 8:
            articulos_publicados_autor(noticias, num_noticias, nombre_autor);
            break;
        default:
            cout << "Saliendo..." << endl;
            break;
        }
    } while (opc != 9);
}
