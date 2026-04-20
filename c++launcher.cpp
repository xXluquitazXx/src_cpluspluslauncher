/*
 * Copyright (C) 2024 lucas
 *
 * Este programa es software libre: puedes redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General GNU publicada por la
 * Free Software Foundation.
 *
 * Este programa se distribuye con la esperanza de que sea útil, pero
 * SIN NINGUNA GARANTÍA; incluso sin la garantía mercantil implícita
 * o aptitud para un propósito determinado. Consulte la
 * Licencia Pública General GNU para más detalles.
 *
 * Deberías haber recibido una copia de la Licencia Pública General GNU
 * junto con este programa. Si no, consulta <https://www.gnu.org>.
 */
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include "glfw3.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <arrayfire.h>
#include "httplib.h"
#include "abc\soloud20200207\include\soloud.h"
#include "abc\soloud20200207\include\soloud_wav.h"
#include "abc\soloud20200207\include\soloud_thread.h"
namespace downloader
 {
 std::string nombre = "abc";

 std::ofstream wrier (nombre, std::ios::binary);
 int option;
 std::string hoster = "abc";
 std::string direr = "abc";
  } // namespace downloader
namespace clvgen
{
   
     int max = 1;
     int min = 0;
     int num1;
     int num2;
     int num3;
     int min1 = 50;
     int max1 = 57;
     int min2 = 66;
     int max2 = 90;
     unsigned char bytewrite;
     int condin = 0;
     std::ofstream wrier ("claves.enc",std::ios::binary);
     const unsigned char pir = 31;
     const unsigned char cientodiezzr = 110;
     const unsigned char treintiunor = 32;
     int nclv;
     int contador;
     std::string clv = "⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​​";
     std::string clv2 = "​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​​";
     bool clvw = false;

} // namespace clvgen
namespace configuracion
{
  int enc;
  int mscfnd;
  std::fstream conf("configuracion.conf.enc", std::ios::binary | std::ios::in | std::ios::out);
  unsigned char uns = 111;
  char rdbyt1;
  char rdbyt2;
  unsigned char unse = 112;
  int readed = 0;
} // namespace configuracion
namespace pdfs
{
    int opcion;
    std::string prpd = "abc";
    std::string prpd1 = "abc";
    std::ofstream unio("uniondearchivos.txt", std::ios::binary);
    long double largito;
    long double largo1;
    long double largo2;
    long double largo3;

    std::ofstream separar1("parte1.txt", std::ios::binary);
    std::ofstream separar2("parte2.txt", std::ios::binary);
    long double largo4;
    long double prdod;
    long double largo5;
    long double contador;
} // namespace pdfs
void cppp ()
{
 system("cls");
 std::cout<<"cccccccccccccccccccccccccccccccccccccc"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cc         ++              ++"<<std::endl;
 std::cout<<"cc         ++              ++"<<std::endl;
 std::cout<<"cc    ++++++++++++    +++++++++++"<<std::endl;
 std::cout<<"cc         ++              ++"<<std::endl;
 std::cout<<"cc         ++              ++"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cc"<<std::endl;
 std::cout<<"cccccccccccccccccccccccccccccccccccc"<<std::endl;
 std::cout << std::endl;
 std::cout << std::endl;
 std::cout << std::endl;
 std::cout << std::endl;
 std::cout << std::endl;

}
int main() {
    int menu_principal = 67;
    int menu_encriptar = 0;
    int menu_opengl = 0;
    const long double dos = 2.0l;
    const long double trentidos = 32.0l;
    const long double cientodiez = 110.0l;
    const long double pi = 3.14L;
    long double numero_final;
    long double numero_final1;
    long long error12 = -9223372036854775808LL;
    long double encriptado = 0;
    std::string c1;
    long double desencriptado = 0;
    std::string letras = "abc";
    std::string entrada = "abc";
    int contador = 0;
    bool contador1 = false;
    int menu_tools = 0;
    bool lose = false;
    bool enemydoor = false;
    bool enemydoor1 = false;
    int cameras = 0;
    int min = 1;
    int max = 10;
    int puerta = 0;
    int doorcicle = 0;
    int aleatorio = 0;
    int aleatorio1 = 0;
    int bateria = 150;
    int ciclosjugados = 0;
    int enemycamera = 5;
    int enemycamera1 = 5;
    int ciclos;
    std::string outtt = "abc";
    int menu_juegos = 0;
    srand(time(0));
    if (!configuracion::conf.is_open())
    {
      std::ofstream creararchivoconfig("configuracion.conf.enc");
      creararchivoconfig.close();
    }
    //leer byte 1 de config y setearlo a uno si es uns y a 0 si es unse
    configuracion::conf.seekg(configuracion::readed, configuracion::conf.beg);
    configuracion::conf.read(&configuracion::rdbyt1, 1);
    configuracion::readed++;
    if (configuracion::rdbyt1 == configuracion::uns)
    {
      configuracion::rdbyt1 = 1;
    }
    if (configuracion::rdbyt1 == configuracion::unse or configuracion::rdbyt1 == 0)
    {
      configuracion::rdbyt1 = 0;
    }
    //leer byte 2 de config y lo mismo de stetear
    configuracion::conf.seekg(configuracion::readed, configuracion::conf.beg);
    configuracion::conf.read(&configuracion::rdbyt2, 1);
    configuracion::readed++;
    if (configuracion::rdbyt2 == configuracion::uns)
    {
      configuracion::rdbyt2 = 1;
    }
    if (configuracion::rdbyt2 == configuracion::unse or configuracion::rdbyt2 == 0)
    {
      configuracion::rdbyt2 = 0;
    }
    
while (true) {
 
 
        cppp();
        std::cout<<"1-encriptacion."<<std::endl;
        std::cout<<"2-opengl"<<std::endl;
        std::cout<<"3-juegos de terminal"<<std::endl;
        std::cout<<"4-herramientas."<<std::endl;
        std::cout<<"9-licensia."<<std::endl;
        std::cout<<"0-configuracin."<<std::endl;
        std::cout<<"10-salir"<<std::endl;
        std::cin >> menu_principal;
        if (menu_principal == 1) {
            cppp();
            std::cout<<"1-encriptar"<<std::endl;
            std::cout<<"2-desencriptar"<<std::endl;
            std::cout<<"3-encriptar archivos(cpu_backend)"<<std::endl;
            std::cout<<"4-desencriptar archivos(cpu_bakend)"<<std::endl;
            std::cout<<"5-encriptar archivos(gpu_backend)"<<std::endl;
            std::cout<<"6-desencriptar archivos(gpu_bakend)"<<std::endl;
            std::cin >> menu_encriptar;

            if (menu_encriptar == 1) {
                system("cls");
                cppp();
                std::cout << "introduci la palabra que quieras en codigo ascii:a-97,b-98,c-99,d-100,e-101,f-102,g-103,h-104,i-105,j-106,k-107,l-108,m-109,n-110o-111,p-112,q-113,r-114,s-115,t-116,u-117,v-118,w-119,x-120,y-121,z-122,"<<std::endl;
                std::cin >> entrada;

                long double letras = std::stold(entrada);
                long double cifrado = (letras / pi) + cientodiez;
                long double numero_final = cifrado * dos + trentidos;

                std::cout << std::fixed << std::setprecision(0);
                std::cout << "tu numero final encriptado es " << numero_final << std::endl<<"apreta cualquier letra para salir"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar == 2) {
                cppp();
                std::cout<<"que numero queres desencriptar"<<std::endl;
                std::cin>>numero_final1;
                desencriptado = ((numero_final1 - trentidos) / dos - cientodiez) * pi;
                if (desencriptado == error12) {
                    std::cout<<"error en desencriptacion"<<std::endl<<"poibles causas del error:numero demasiado largo, error general"<<std::endl;
                    std::cin>>c1;
                }

                std::cout << "el numero desencriptado es: " << std::llround(desencriptado) << std::endl<<std::endl<<"presiona cualquier letra para salir";
                std::cin>>c1;
            }

            if (menu_encriptar == 3) {
                cppp();
                int leer = 0;
                const unsigned char pir = 31;
                const unsigned char cientodiezzr = 110;
                const unsigned char treintiunor = 32;
                std::string in = "abc";

                std::cout<<"que archivo queres encriptar?"<<std::endl;
                std::cin>>in;
                std::ifstream inputfile (in, std::ifstream::binary);
                std::ofstream outfile ("outfile.enc",std::ofstream::binary);
                inputfile.seekg(0,inputfile.end);
                int largo = inputfile.tellg();
                inputfile.seekg(0, inputfile.beg);
                int largototal = inputfile.tellg();
                std::cout<<"este archivo mide"<<largo<<std::endl;
                if (largo == -1) {
                    std::cout<<"archivo no encontrado"<<std::endl;
                }
                while (largototal < largo) {
                    unsigned char breaded = 0;
                    inputfile.read(reinterpret_cast<char*>(&breaded), sizeof(breaded));
                    std::cout<<breaded<<std::endl;
                    unsigned char bytewrite = (((breaded xor pir) + cientodiezzr) + treintiunor);
                    largototal++;
                    outfile.write(reinterpret_cast<char*>(&bytewrite), sizeof(bytewrite));
                    inputfile.seekg(largototal, inputfile.beg);
                }
                std::cout<<"archivo encriptado por cpu en: outfile.enc"<<std::endl;
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar == 4) {
                cppp();
                const unsigned char pir = 31;
                const unsigned char cientodiezzr = 110;
                const unsigned char treintiunor = 32;
                std::string in = "abc";

                std::cout<<"que archivo queres desencriptar?(cpu)"<<std::endl;
                std::cin>>in;
                std::cout<<"que archivo queres que salga?(cpu)"<<std::endl;
                std::cin>>outtt;

                
                std::ifstream inputfile(in, std::ifstream::binary);
                std::ofstream outfile(outtt, std::ofstream::binary);
                inputfile.seekg(0, inputfile.end);
                int largo = inputfile.tellg();
                inputfile.seekg(0, inputfile.beg);
                int largototal = inputfile.tellg();
                std::cout<<"este archivo mide"<<largo<<std::endl;
                if (largo == -1) {
                    std::cout<<"archivo no encontrado"<<std::endl;
                }
                while (largototal < largo) {
                    unsigned char breaded = 0;
                    inputfile.read(reinterpret_cast<char*>(&breaded), sizeof(breaded));
                    unsigned char bytewrite = ((breaded - treintiunor) - cientodiezzr) xor pir;
                    largototal++;
                    outfile.write(reinterpret_cast<char*>(&bytewrite), sizeof(bytewrite));
                    inputfile.seekg(largototal, inputfile.beg);
                }
                std::cout<<"archivo desencriptado por cpu en: "<<outtt<<std::endl;
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar == 5) {
                const unsigned char pir = 31;
                const unsigned char cientodiezzr = 110;
                const unsigned char treintiunor = 32;
                std::string in = "abc";
                cppp();
                std::cout<<"que archivo queres encriptar?(gpu)"<<std::endl;
                std::cin>>in;
                std::ifstream inputfile(in, std::ifstream::binary);
                if (!inputfile) {
                    std::cout<<"archivo no encontrado"<<std::endl;
                } else {
                    std::vector<unsigned char> data((std::istreambuf_iterator<char>(inputfile)), std::istreambuf_iterator<char>());
                    if (data.empty()) {
                        std::cout<<"archivo vacio"<<std::endl;
                    } else {
                        af_set_backend(AF_BACKEND_OPENCL);
                        af_array in_arr = 0, pir_arr = 0, c110_arr = 0, c32_arr = 0;
                        af_array xor_arr = 0, add1_arr = 0, out_arr = 0;
                        const dim_t dims[1] = { static_cast<dim_t>(data.size()) };
                        af_create_array(&in_arr, data.data(), 1, dims, u8);
                        af_constant(&pir_arr, pir, 1, dims, u8);
                        af_constant(&c110_arr, cientodiezzr, 1, dims, u8);
                        af_constant(&c32_arr, treintiunor, 1, dims, u8);
                        af_bitxor(&xor_arr, in_arr, pir_arr, false);
                        af_add(&add1_arr, xor_arr, c110_arr, false);
                        af_add(&out_arr, add1_arr, c32_arr, false);

                        std::vector<unsigned char> out(data.size());
                        af_get_data_ptr(out.data(), out_arr);

                        std::ofstream outfile("outfile_gpu.enc", std::ofstream::binary);
                        outfile.write(reinterpret_cast<const char*>(out.data()), static_cast<std::streamsize>(out.size()));
                        std::cout<<"archivo encriptado con gpu en: outfile_gpu.enc"<<std::endl;

                        af_release_array(out_arr);
                        af_release_array(add1_arr);
                        af_release_array(xor_arr);
                        af_release_array(c32_arr);
                        af_release_array(c110_arr);
                        af_release_array(pir_arr);
                        af_release_array(in_arr);
                    }
                }
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar == 6) {
                const unsigned char pir = 31;
                const unsigned char cientodiezzr = 110;
                const unsigned char treintiunor = 32;
                std::string in = "abc";
                cppp();
                std::cout<<"que archivo queres desencriptar?(gpu)"<<std::endl;
                std::cin>>in;
                std::ifstream inputfile(in, std::ifstream::binary);
                if (!inputfile) {
                    std::cout<<"archivo no encontrado"<<std::endl;
                } else {
                    std::vector<unsigned char> data((std::istreambuf_iterator<char>(inputfile)), std::istreambuf_iterator<char>());
                    if (data.empty()) {
                        std::cout<<"archivo vacio"<<std::endl;
                    } else {
                        af_set_backend(AF_BACKEND_OPENCL);
                        af_array in_arr = 0, pir_arr = 0, c110_arr = 0, c32_arr = 0;
                        af_array sub1_arr = 0, sub2_arr = 0, out_arr = 0;
                        const dim_t dims[1] = { static_cast<dim_t>(data.size()) };
                        af_create_array(&in_arr, data.data(), 1, dims, u8);
                        af_constant(&pir_arr, pir, 1, dims, u8);
                        af_constant(&c110_arr, cientodiezzr, 1, dims, u8);
                        af_constant(&c32_arr, treintiunor, 1, dims, u8);
                        af_sub(&sub1_arr, in_arr, c32_arr, false);
                        af_sub(&sub2_arr, sub1_arr, c110_arr, false);
                        af_bitxor(&out_arr, sub2_arr, pir_arr, false);

                        std::vector<unsigned char> out(data.size());
                        af_get_data_ptr(out.data(), out_arr);

                        std::ofstream outfile("outfile_gpu.dec", std::ofstream::binary);
                        outfile.write(reinterpret_cast<const char*>(out.data()), static_cast<std::streamsize>(out.size()));
                        std::cout<<"archivo desencriptado con gpu en: outfile_gpu.dec"<<std::endl;

                        af_release_array(out_arr);
                        af_release_array(sub2_arr);
                        af_release_array(sub1_arr);
                        af_release_array(c32_arr);
                        af_release_array(c110_arr);
                        af_release_array(pir_arr);
                        af_release_array(in_arr);
                    }
                }
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar < 1 || menu_encriptar > 6) {
                std::cout<<"opcion invalida"<<std::endl;
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }
        }
    




 if (menu_principal == 2)
  {
  cppp();
  std::cout <<"1-triangulo"<<std::endl;
  std::cin>>menu_opengl;




  }
 if (menu_principal == 2 && menu_opengl == 1)
  {
       GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello triangle", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
         glBegin(GL_TRIANGLES);
         glVertex3f(-0.5, 0.5, 0.9);
         glVertex3f(0.9, -1, -0.67);
         glVertex3f(0.12, 0.8, 0.12);
         
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
        std::cout<<"apreta cualquier letra para salir";
        std::cin>>c1;
        glfwTerminate();
        break;
    }

    



  }
  if (menu_principal == 3)
  {
    cppp();
    std::cout<<"1-fnaf."<<std::endl;
    std::cin>>menu_juegos;
    if (menu_juegos == 1)
    {
     std::cout<<"cuanta bateria queres tener? se descuenta bateria solo por usar la puerta"<<std::endl;
     std::cin>>bateria;
     std::cout<<"cuantos ciclos queres jugar?(un ciclo se completa al mirar las camaras y decidir si cerras la puerta, basicamente una vuelta al main loop)"<<std::endl;
     std::cin>>ciclos;
     while (lose == false or ciclos == ciclosjugados)
     {
       cameras == 99;
       //enemigo 1
       if (enemycamera1 != 1)
       {
    aleatorio1 = min + rand() % (max - min + 1);
  }
  if (enemycamera1 == 0 and puerta == 1)
  {
    aleatorio1 = min + rand() % (max - min + 1);
  }
  if (aleatorio <= 6)
  {
    enemycamera1--;
  }
  if (aleatorio1 >= 6)
  {
    enemycamera1++;
  }
  if (enemycamera1 >= 5)
  {
    enemycamera1--;
  }
  if (enemycamera1 <= -1)
  {
    enemycamera1++;
    enemycamera1++;
  }
  if (enemycamera1 == 0)
  {
    enemydoor1 = true;
  }
  
  //enemigo 2
    if (enemycamera != 1)
  {
    aleatorio = min + rand() % (max - min + 1);
  }
  if (enemycamera == 0 and puerta == 1)
  {
    aleatorio = min + rand() % (max - min + 1);
  }
  if (aleatorio <= 6)
  {
    enemycamera++;
  }
  if (aleatorio >= 6)
  {
    enemycamera--;
  }
  if (enemycamera >= 5)
  {
    enemycamera--;
  }
  if (enemycamera <= -1)
  {
    enemycamera++;
    enemycamera++;
  }
  //fin de enemigo 2
  if (contador >= 5 or contador1 == true)
  {
    system("cls");
    std::cout<<"perdiste que manco voy a crear una carpeta con archivos adentro que digan cosas medio sus";
    system("mkdir sustoiletamongusskibidy");
    system("cd sustoiletamongusskibidy");
    system("echo skibidy toilet sigma pobni chamba sus free fornite aura skibidy minecraft bobicraft minimini hot >> u_lose_in_my_fnaf_lololol.txt");
    system("cls");
    lose = true;
  }

  if (enemydoor == true and puerta == 0)
  {
    contador++;
    contador++;
  }
  if (enemydoor1 == true and puerta == 0)
  {
    contador1 = true;
  }
  
  

  if (enemycamera == 0)
  {
    enemydoor = true;
  }
  if (puerta == 1)
  {
    enemydoor = false;
    puerta -= 1;
  }

  std::cout<<"to chek camera 1 press 1 to chek camera 2 press 2 same whit cameras 3,4,5. to cheek the office press 0"<<std::endl;
  std::cin>>cameras;
  if (enemycamera == cameras)
  {
         std::cout<<"enemy is in camera:"<<cameras<<std::endl;
  }
  if (enemycamera1 == cameras)
  {
    std::cout<<"enemy2 is in camera:"<<cameras<<std::endl;
  }
  
  if (cameras == 0 and enemydoor == true or cameras == 0 and enemydoor1 == true)
  {
    std::cout<<"hay alguien en la oficina"<<std::endl;
  }
  if (cameras == 0 and enemydoor == false or cameras == 0 and enemydoor1 == false)
  {
    std::cout<<"no hay nadie"<<std::endl;
  }
  if (enemydoor == true)
  {
    contador++;
  }
  std::cout<<"if u want to close the door then press 1"<<std::endl;
   std::cin>>puerta;
   ciclosjugados++;
  if (puerta == 1)
  {
    bateria--;
  }
  if (enemydoor == true)
  {
    contador++;
    contador++;
  }
  
  
  
 }

   
  }




 }
 if (menu_principal == 4)
 {
    cppp();
    std::cout<<"1-descargador de paginas web."<<std::endl;
    std::cout<<"2-generador de claves aleatorias"<<std::endl;
    std::cout<<"3-reproductor de musica"<<std::endl;
    std::cout<<"4-separar y unir archivos"<<std::endl;
    std::cin>>menu_tools;
   if (menu_tools == 1)
    {



  
  std::cout<<"nombre del archivo"<<std::endl;
  std::cin>>downloader::nombre;
 while (TRUE)
 {

    std::cout<<"pone el nombre de la pagina host ejemplo es.wikipedia.org"<<std::endl;
    std::cin>>downloader::hoster;
    std::cout<<"pone el nombre de el apartado ejemplo /wiki/Canis_familiaris"<<std::endl;
    std::cin>>downloader::direr;

    std::cout<<"1-web browser basic"<<std::endl<<"2-web downloader."<<std::endl<<"3-view status."<<std::endl;
    std::cin>>downloader::option;
    if (downloader::option == 1)
    {


        

        httplib::SSLClient cli(downloader::hoster);
        cli.set_follow_location(true);
        cli.set_default_headers({
        {"User-Agent", "Mozilla/5.0"}
        });
        auto idk = cli.Get(downloader::direr);

        
     if (!idk) {
     std::cout << "request fallida\n";
     }
     else {
    std::cout << "status: " << idk->status << std::endl;
    std::cout << "size: " << idk->body.size() << std::endl;
    std::cout << idk->get_header_value("Content-Type") << std::endl;
    }
        
        
        std::cout<<idk->body.data();
       
        
    }
    if (downloader::option == 2)
    {
         httplib::SSLClient cli(downloader::hoster);
         cli.set_follow_location(true);
         cli.set_default_headers({
         {"User-Agent", "Mozilla/5.0"}
         });
         auto idk = cli.Get(downloader::direr);
     if (!idk) {
     std::cout << "request fallida\n";
     }
     else {
    std::cout << "status: " <<idk->status << std::endl;
    std::cout << "size: " <<idk->body.size() << std::endl;
    std::cout << idk->get_header_value("Content-Type") << std::endl;
    }
         downloader::wrier.write(idk->body.data(), idk->body.size());
    }
    if (downloader::option == 3)
    {
        httplib::SSLClient cli(downloader::hoster);
         cli.set_follow_location(true);
         cli.set_default_headers({
         {"User-Agent", "Mozilla/5.0"}
         });
          auto idk = cli.Get(downloader::direr);
     if (!idk) {
     std::cout << "request fallida"<<std::endl;
     }
     else {
    std::cout << "status: " << idk->status << std::endl;
    std::cout << "size: " << idk->body.size() << std::endl;
    std::cout << idk->get_header_value("Content-Type") << std::endl;
    }
    }
    
 }

 
 

    }
  if (menu_tools == 2)
  {
 cppp();
 std::cout<<"info: las claves generadas en este programa son validas en la microsoft store"<<std::endl;
 std::cout<<std::endl;
 std::cout<<std::endl;
 std::cout<<"cuantas claves queres generar?"<<std::endl;
 std::cin>>clvgen::nclv;
 srand(time(0));
 while (clvgen::contador <= clvgen::nclv)
 {
    
 
 
  while (clvgen::condin <= 25) //agregar contador y generar x numero de claves guardandolas en un archivo encriptado
  {
    clvgen::num1 = clvgen::min + rand() % (clvgen::max - clvgen::min + 1);
    if (clvgen::num1 == 0)
    {
        clvgen::num2 = clvgen::min1 + rand() % (clvgen::max1 - clvgen::min1 + 1);
        while (clvgen::num2 == 53)
        {
            clvgen::num2 = clvgen::min1 + rand() % (clvgen::max1 - clvgen::min1 + 1);

        }   
             if (configuracion::rdbyt1 == 1)
             {
            clvgen::bytewrite = (((clvgen::num2 xor clvgen::pir) + clvgen::cientodiezzr) + clvgen::treintiunor);
            clvgen::wrier.write(reinterpret_cast<char*>(&clvgen::bytewrite), sizeof(clvgen::bytewrite));
            std::cout<<"\r"<<clvgen::bytewrite<<clvgen::num2<<std::flush;
             }
             if (configuracion::rdbyt1 == 0)
             {
            clvgen::bytewrite = clvgen::num2;
            clvgen::wrier.write(reinterpret_cast<char*>(&clvgen::bytewrite), sizeof(clvgen::bytewrite));
            std::cout<<"\r"<<clvgen::bytewrite<<clvgen::num2<<std::flush;

             }
             
    }
    if (clvgen::num1 == 1)
    {
        clvgen::num3 = clvgen::min2 + rand() % (clvgen::max2 - clvgen::min2 + 1);
        while (clvgen::num3 == 73 or clvgen::num3 == 69 or clvgen::num3 == 79 or clvgen::num3 == 76 or clvgen::num3 == 85 or clvgen::num3 == 83)
        {
            clvgen::num3 = clvgen::min2 + rand() % (clvgen::max2 - clvgen::min2 + 1);
        }
             if (configuracion::rdbyt1 == 1)
             {
            clvgen::bytewrite = (((clvgen::num3 xor clvgen::pir) + clvgen::cientodiezzr) + clvgen::treintiunor);
            clvgen::wrier.write(reinterpret_cast<char*>(&clvgen::bytewrite), sizeof(clvgen::bytewrite));
            std::cout<<"\r"<<clvgen::bytewrite<<clvgen::num3<<std::flush;
             }
             if (configuracion::rdbyt1 == 0)
             {
            clvgen::bytewrite = clvgen::num3;
            clvgen::wrier.write(reinterpret_cast<char*>(&clvgen::bytewrite), sizeof(clvgen::bytewrite));
            std::cout<<"\r"<<clvgen::bytewrite<<clvgen::num3<<std::flush;

             }
    }
    
  clvgen::condin++;
    
    
 }
 
 




 if (clvgen::clvw == true)
 {
  clvgen::wrier.write(clvgen::clv.c_str(), clvgen::clv.size());
  clvgen::clvw = false;
 }
 else
 {
  clvgen::wrier.write(clvgen::clv2.c_str(), clvgen::clv2.size());
  clvgen::clvw = true;
 }
 clvgen::wrier.write("\n", 1);


 clvgen::condin = 0;









  clvgen::contador++;
  }
 if (configuracion::rdbyt1 == 1)
 {
  std::cout<<"se generaron correctamente"<<clvgen::contador<<"claves y se guardaron de forma encriptada en claves.enc"<<std::endl<<"para desencriptar las claves ve a la funcion desencriptar archivos en el menu 1"<<std::endl;

 }
 if (configuracion::rdbyt1 == 0)
 {
  std::cout<<"se generaron correctamente"<<clvgen::contador<<"claves y se guardaron en claves.enc"<<std::endl;
 }
 
 

  std::cin>>c1;
  }
  if (menu_tools == 3)
  {
 cppp();
 SoLoud::Wav idk;
 std::string abcd = "abcd";
 SoLoud::Soloud soloud;
 std::cout<<"que audio queres reproducir?"<<std::endl;
 std::cin>>abcd;
 bool pausa = false;
 float volumen = 1.0f;
 const char* ab = abcd.data();
 long double posicion;
 long double largoso = idk.getLength();
 idk.load(ab);
 soloud.init();
 SoLoud::handle h = soloud.play(idk,volumen ,0 , pausa);
  while (soloud.isValidVoiceHandle(h))
  {
     SoLoud::Thread::sleep(100);
     posicion = soloud.getStreamPosition(h);
      std::cout<<"\r"<<posicion<<"/"<<largoso<<" "<<std::flush;
  }
  soloud.deinit();
  }
  if (menu_tools == 4)
  {
  cppp();

 std::cout<<"1-unir archivos"<<std::endl<<"2-separar archivos"<<std::endl;
 std::cin>>pdfs::opcion;
 if (pdfs::opcion == 1)
 {
    std::cout<<"escribi el nombre del primer archivo"<<std::endl;
    std::cin>>pdfs::prpd;
    std::ifstream prpdf(pdfs::prpd, std::ios::binary);
    if (!prpdf.is_open())
    {
      system("exit");
    }
    std::cout<<"escribi el nombre del segundo archivo"<<std::endl;
    std::cin>>pdfs::prpd1;
    std::ifstream prpdf1(pdfs::prpd1, std::ios::binary);
    if (!prpdf1.is_open())
    {
      system("exit");
    }
    prpdf.seekg(0, prpdf.end);
    pdfs::largo1 = prpdf.tellg();
    prpdf.seekg(0, prpdf.beg);
    char* read1 = new char[(size_t)pdfs::largo1];
    prpdf.read(read1,pdfs::largo1);
    pdfs::unio.write(read1, (std::streamsize)pdfs::largo1);
    pdfs::unio.flush();
    prpdf1.seekg(0, prpdf1.end);
    pdfs::largo2 = prpdf1.tellg();
    prpdf1.seekg(0, prpdf1.beg);
    char* read2 = new char[(size_t)pdfs::largo2];
    prpdf1.read(read2,pdfs::largo2);
    pdfs::unio.write(read2, (std::streamsize)pdfs::largo2);
    pdfs::unio.flush();
    delete[] read1;
    delete[] read2;
 }
 if (pdfs::opcion == 2)
 {
    std::cout<<"escribi el nombre archivo a separar"<<std::endl;
    std::cin>>pdfs::prpd1;
    std::ifstream prpdf2(pdfs::prpd1, std::ios::binary);
    if (!prpdf2.is_open())
    {
      system("exit");
    }
    
    std::cout<<"por donde separar?(caracteres)"<<std::endl;
    std::cin>>pdfs::prdod;
    prpdf2.seekg(pdfs::prdod, prpdf2.beg);
    pdfs::largo3 = prpdf2.tellg();
    prpdf2.seekg(0, prpdf2.beg);
    char* read3 = new char[(size_t)pdfs::largo3];
    prpdf2.read(read3 ,pdfs::prdod);
    pdfs::separar1.write(read3, (std::streamsize)pdfs::largo3);
    pdfs::separar1.flush();
    //escribir segundo archivo
    prpdf2.seekg(0, prpdf2.end);
    pdfs::largo4 = prpdf2.tellg();
    pdfs::contador = pdfs::largo3;
    
    pdfs::largo5 = pdfs::largo4 - pdfs::prdod;
    char* read4 = new char[(size_t)pdfs::largo5];
    prpdf2.seekg(pdfs::prdod, prpdf2.beg);
    prpdf2.read(read4, pdfs::largo5);
    
    pdfs::separar2.write(read4, (std::streamsize)pdfs::largo5);
    pdfs::separar2.flush();
    delete[] read3;
    delete[] read4;
 }
  }
  
 }
 if (menu_principal == 0)
 {
  cppp();
   std::cout<<"encriptar todos los archivos? si queres encriptarlos apreta 1 si no apreta 0"<<std::endl;
   std::cin>>configuracion::enc;
   configuracion::conf.seekp(0);
   configuracion::conf.clear();
   if (configuracion::enc == 1)
   {
     configuracion::conf.write(reinterpret_cast<const char*>(&configuracion::uns), sizeof(configuracion::uns));
     configuracion::conf.flush();
     std::cout<<"perfecto entonces los archivos salen encriptados"<<std::endl;
   }
   if (configuracion::enc == 0)
   {
    std::cout<<"perfecto entonces los archivos no salen encriptados"<<std::endl;
    configuracion::conf.write(reinterpret_cast<const char*>(&configuracion::unse), sizeof(configuracion::unse));
    configuracion::conf.flush();
   }
  std::cout<< (int)(unsigned char)configuracion::rdbyt1<<std::endl;



  
  std::cout << "para que se apliquen las configuraciones tenes que reiniciar la aplicacion" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl<<"apreta cualquier letra para salir"<<std::endl;
  std::cin>>c1;

 }
 
 if (menu_principal == 9)
 {
   std::cout<<"Copyright (C) 2026 lucas"<<std::endl<<" Este programa es software libre: usted puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública General GNU"<<std::endl<<"Este software utiliza la librería GLFW (www.glfw.org), bajo la licencia Zlib. El código fuente de esta aplicación está disponible bajo la licencia GPL v3 en https://github.com/xXluquitazXx/src_cpluspluslauncher"<<std::endl;
   std::cout<<"apreta cualquier tecla para salir"<<std::endl;
   std::cin>>c1;
   break;
 }
 if (menu_principal == 10){
    break;
 }
}
    return 0;
}


