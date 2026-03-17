/*
 * Copyright (C) 2024 lucas
 *
 * Este programa es software libre: puedes redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General GNU publicada por la
 * Free Software Foundation, ya sea la versión 3 de la Licencia, o
 * (a tu elección) cualquier versión posterior.
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
int main() {
    int menu_principal = 67;
    int menu_encriptar;
    int menu_opengl;
    const long double dos = 2.0l;
    const long double trentidos = 32.0l;
    const long double cientodiez = 110.0l;
    const long double pi = 3.14L;
    long double numero_final;
    long double numero_final1;
    long long error12 = -9223372036854775808LL;
    long double encriptado;
    std::string c1;
    long double desencriptado;
    std::string letras;
    std::string entrada;
    int contador = 0;
    bool contador1 = false;
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
    int ciclosjugados;
    int enemycamera = 5;
    int enemycamera1 = 5;
    int ciclos;
    int menu_juegos = 0;
    srand(time(0));
while (true) {
 
 
 
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
        std::cout<<"1-encriptacion."<<std::endl;
        std::cout<<"2-opengl"<<std::endl;
        std::cout<<"3-juegos de terminal"<<std::endl;
        std::cout<<"9-licensia."<<std::endl;
        std::cout<<"0-creditos"<<std::endl;
        std::cout<<"10-salir"<<std::endl;
        std::cin >> menu_principal;
         if (menu_principal == 1) {
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
            std::cout<<"1-encriptar"<<std::endl;
            std::cout<<"2-desencriptar"<<std::endl;
            std::cin >> menu_encriptar;
            if (menu_encriptar == 1) {
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
   
     std::cout << "introduci la palabra que quieras en codigo ascii:a-97,b-98,c-99,d-100,e-101,f-102,g-103,h-104,i-105,j-106,k-107,l-108,m-109,n-110o-111,p-112,q-113,r-114,s-115,t-116,u-117,v-118,w-119,x-120,y-121,z-122,"<<std::endl;
     std::cin >> entrada;

     // Si usas string, primero hay que convertirlo a numero para poder dividir.
     long double letras = std::stold(entrada);

     long double cifrado = (letras / pi) + cientodiez;
     long double numero_final = cifrado * dos + trentidos;

     std::cout << std::fixed << std::setprecision(0);
     std::cout << "tu numero final encriptado es " << numero_final << std::endl<<"apreta cualquier letra para salir"<<std::endl;
     std::cin>>c1;
    }
    if (menu_encriptar == 2)
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
    std::cout<<"que numero queres desencriptar"<<std::endl;
    std::cin>>numero_final1;
      //desencriptado
     desencriptado = ((numero_final1 - trentidos) / dos - cientodiez) * pi;
     if (desencriptado == error12)
     {
       std::cout<<"error en desencriptacion"<<std::endl<<"poibles causas del error:numero demasiado largo, error general"<<std::endl;
       std::cin>>c1;
     }
     
     std::cout << "el numero desencriptado es: " << std::llround(desencriptado) << std::endl<<std::endl<<"presiona cualquier letra para salir";
     std::cin>>c1;
    }





 }
 if (menu_principal == 0) 
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
  std::cout <<"desarrolador:luquitaz"<<std::endl<<"debugger de confianza: chatgpt integrado en vscode"<<std::endl<<"editor de codigo:visual studio code";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl<<"apreta cualquier letra para salir";
  std::cin>>c1;


 

 }
 if (menu_principal == 2)
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
  std::cout <<"1-triangulo"<<std::endl;
  std::cin>>menu_opengl;




  }
 if (menu_opengl == 1)
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
    }

    



 }
 if (menu_principal == 3)
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
    
 

 if (menu_principal == 9)
 {
   std::cout<<"Copyright (C) 2026 lucas"<<std::endl<<" Este programa es software libre: usted puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública General GNU"<<std::endl<<"Este software utiliza la librería GLFW (www.glfw.org), bajo la licencia Zlib. El código fuente de esta aplicación está disponible bajo la licencia GPL v3 en [tu enlace].";
 }
 if (menu_principal == 10){
    system("exit");
 }
    return 0;
}
}
