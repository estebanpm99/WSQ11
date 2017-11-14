#include<iostream>
#include<fstream> // esta libreria sirve para leer archivos
#include<string>
using namespace std;
int main() {
   ifstream doc;
  string str,name="1.txt";  //declaramos 2 variables tipo string
  int tam=0,count=0;
  doc.open(name.c_str(),ios::in);
  if (doc.fail()) {
    cout<<"hay un error, el archivo no se ha encontrado"<<endl;
  }
  while (!doc.eof()) {
    getline(doc,str);
    tam+=str.size();   //todo el texto se guarda en la variable str
    for(int i=0; i<tam; i++){
      str[i] = tolower(str[i]);   //aqui se convierte todo el texto a minusculas
    }
    cout<<str<<endl;
    int findbanana = str.find("banana"); //se busca la palabra banana y te devuelve en el num de caracter que lo encontro
    while (findbanana != -1) { //si es -1 es que no encontro nada
      count++;
      findbanana = str.find("banana", findbanana+1);  //se sigue con la busqueda desde un caracter despues
    }
  }
cout<<count<<endl;      //arroja las veces que se encontro banana

  return 0;
}
