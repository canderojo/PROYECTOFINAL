#include <iostream>
using namespace std;

class persona{
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

class autor: public persona{
    private:
        string medio;
    public:
    autor();
    autor(string,float,string);
    void setmedio(string);
    string getmedio();
};

class usuario: public persona{
    private:
        int edad;
    public:
        usuario();
        usuario(string,float,int);
        void setedad(int);
        int getedad();
};

class comentario{
    private:
        int numero;
        string texto;
        usuario user;
    public:
        comentario();
        comentario(int,string,usuario);
        void setnumero(int);
        void settexto(string);
        void setuser(usuario);
        int getnumero();
        string gettexto();
        usuario getuser();     
};

class fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        fecha();
        fecha(int,int,int);
        void setdia(int);
        void setmes(int);
        void setanio(int);
        int getdia();
        int getmes();
        int getanio();
};


class articulo{
    private:
        string titulo;
        string detalle;
        fecha fecha_publicacion;
        autor autor_articulo;
        comentario comentarios[100];
    public:
        articulo();
        articulo(string,string,fecha,autor);
        void settitulo(string);
        void setdetalle(string);
        void setfecha_publicacion(fecha);
        void setautor_articulo(autor);
        string gettitulo();
        string getdetalle();
        fecha getfecha_publicacion();
        autor getautor_articulo();
};


