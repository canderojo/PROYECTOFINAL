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
        int getnumero();
        string gettexto();     
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
      int getmes()

};


class articulo{
    private:
        string titulo;
        string detalle;
        
};


