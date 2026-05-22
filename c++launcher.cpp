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
#include <winsock2.h>
#include <windows.h>
#include "glew.h" 
#include <cstdlib>
#include "glfw3.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <algorithm>
#include <arrayfire.h>
#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00
#define CPPHTTPLIB_OPENSSL_SUPPORT
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
     std::string clv = "⬛​⬜​⬛​⬜​⬛​⬜​⬛⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​⬜​⬛​​";
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
  SoLoud::handle h;
SoLoud::Soloud soloud;
SoLoud::Wav idk;
int msc;
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

void esclose(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}
namespace boucingtriangl
{
int c1;
float a;
float b;
float c;
float d;
float e;
float f;

bool sumorest = false;
bool sumorest1 = false;
bool sumorest2 = false;
bool sumorest3 = false;
bool sumorest4 = false;
bool sumorest5 = false;
unsigned int buffminer;
void esclose(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
} // namespace boucingtriangl
}
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
namespace mov
{
float posiciones[6] = {
    -0.1, -0.3,
    0.1, -0.3,
    0, 0.3
};
unsigned int buffminer;
std::string c1;
float enemy;
int min = -1;
int max = 1;
long double i = 1;
float estela[6] = {
   -0.2, 1,
   0.1, 1,
   0, 1
};
long double i2 = 0;
bool drawit = false;
float enemy2;
float distancia1;
float distancia2;
float distancia3;
float enemy1;
float enemy4;
float enemy3;
float enemy5;
float enemy6;
long double vely1 = 0.00001;
long double vely2 = 0.00002;
long double vely3 = 0.00003;
float upxp;
float minxp;
float upyp;
float margen = 0.06f;
float minyp;
float upxe;
bool colision1 = false;
bool colision2 = false;
float minxe;
float upye;
float minye;
float pos;
float minxd;
float upxd;
  SoLoud::handle h;
SoLoud::Soloud soloud;
SoLoud::Wav idk;


void esclose(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}
} // namespace mov
namespace juegitogl
{
void cerrar_con_escape(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}
void actualizarBuffer(unsigned int VBO, float* datos, int tamanioBytes)
{
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, tamanioBytes, datos);
}

int c = 0;
int segundos = 0;
float posiciones1[9] = {
   0.2f, 0.2f, 0.0f,
   0.2f, -0.2f, 0.0f,
   -0.2f, 0.2f, 0.0f
};
float posiciones2[9] = {
   0.2f, 0.2f, 0.0f,
   0.2f, -0.2f, 0.0f,
   -0.2f, 0.2f, 0.0f
};
float posiciones3[9] = {
   -0.2f, 0.2f, 0.0f,
   -0.2f, -0.2f, 0.0f,
   0.2f, -0.2f, 0.0f
};
float posiciones[9] = {
   -0.2f, 0.2f, 0.0f,
   -0.2f, -0.2f, 0.0f,
   0.2f, -0.2f, 0.0f
};
float player[9] = {
   0.0f, 0.3f, 0.0f,
   0.15f, -0.2f, 0.0f,
   -0.15f, -0.2f, 0.0f
};
float prm[9] = {
   -1.0f, 1.0f, 0.0f,
   -0.9f, 0.8f, 0.0f,
   -0.8f, 1.0f, 0.0f
};
bool drw = false;
bool drw1 = false;
bool si = true;
bool colisionAnterior = false;
bool a = false;
long double caiday = 0.0001L;
float calculo = 0.0f;
float cxalculo1 = 0.0f;
float n = 0.0f;
float n1 = 0.0f;
float n2 = 0.0f;
float n3 = 0.0f;
int contador = 0;
long double diferencia = 0.0L;
}
namespace Vars {
    unsigned int VBO1, VAO1;
    unsigned int VBO2, VAO2;
    unsigned int VBO3, VAO3;

    unsigned int VBO, VAO;
    unsigned int VBO5, VAO5;
    unsigned int VBO4, VAO4;
    SoLoud::Wav sp;

    float posiciones1[9] = {
        -0.8f, 0.8f, 0.0f,
        -0.8f, -0.8f, 0.0f,
        0.8f, -0.8f, 0.0f
    };
    float posiciones[9] = {
        -0.8f, 0.8f, 0.0f,
        0.8f, 0.8f, 0.0f,
        0.8f, -0.8f, 0.0f
    };
    float posiciones3[9] = {
        0.7f, 0.8f, 0.0f,
        0.75f, 0.8f, 0.0f,
        0.75f, 0.6f, 0.0f
    };
    float posiciones2[9] = {
        0.7f, 0.8f, 0.0f,
        0.7f, 0.6f, 0.0f,
        0.75f, 0.6f, 0.0f
    };
        float posiciones5[9] = {
        0.8f, 0.75f, 0.0f,
        0.8f, 0.67f, 0.0f,
        0.65f, 0.67f, 0.0f
    };
    float posiciones4[9] = {
        0.8f, 0.75f, 0.0f,
        0.65f, 0.75f, 0.0f,
        0.65f, 0.67f, 0.0f
    };
    int segundos = 0,i;
    float n2 = 0, n3 = 0;
    float t = 0;
    
    unsigned int vertexshader;
    unsigned int fragmentshader;
    unsigned int fragmentshader1;
    unsigned int shaderProgram;
    unsigned int shaderProgram1;
    
    const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
    
    const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(0.0f, 1.0f, 0.0f, 1.0f);\n"
    "}\n\0";
    const char *fragmentShaderSource1 = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 1.0f, 1.0f, 1.0f);\n"
    "}\n\0";
    SoLoud::Soloud soloud;
    SoLoud::handle h;
}

class electron
{
  private:
    float velocidad = 1.0f;
    double ultimoMovimiento = 0.0;
     float posiciones2[9] = {
        -0.5f, 0.3f, 0.0f,
        -0.5f, -0.1f, 0.0f,
        -0.1f, -0.1f, 0.0f
    };
    float posiciones3[9] = {
        -0.5f, 0.3f, 0.0f,
        -0.1f, 0.3f, 0.0f,
        -0.1f, -0.1f, 0.0f
    };
        float destinox[9] = {
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f
    };
    float destinoy[9] = {
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f
    };
            float destinox1[9] = {
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f
    };
    float destinoy1[9] = {
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f,
        -0.0f, 0.0f, 0.0f
    };
        float posicionesbase2[9] = {
        -0.5f, 0.3f, 0.0f,
        -0.5f, -0.1f, 0.0f,
        -0.1f, -0.1f, 0.0f
    };
    float posicionesbase3[9] = {
        -0.5f, 0.3f, 0.0f,
        -0.1f, 0.3f, 0.0f,
        -0.1f, -0.1f, 0.0f
    };
    //
    float posiciones5[9] = {
        -0.4f, 0.25f, 0.0f,
        -0.30f, 0.25f, 0.0f,
        -0.4f, 0.20f, 0.0f
    };
    float posiciones4[9] = {
        -0.4f, 0.20f, 0.0f,
        -0.30f, 0.20f, 0.0f,
        -0.30f, 0.25f, 0.0f
    };
    //
    float posicionesbase4[9] = {
        -0.4f, 0.20f, 0.0f,
        -0.30f, 0.20f, 0.0f,
        -0.30f, 0.25f, 0.0f
    };
    float posicionesbase5[9] = {
        -0.4f, 0.25f, 0.0f,
        -0.30f, 0.25f, 0.0f,
        -0.4f, 0.20f, 0.0f
    };
    //
   unsigned int VBO2, VAO2;
    unsigned int VBO3, VAO3;
    unsigned int VBO4, VAO4;
    unsigned int VBO5, VAO5;
    float n2,n3;
    unsigned int vertexshader;
    unsigned int fragmentshader, fragmentshader1;
    unsigned int shaderProgram, shaderProgram1;

    const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
    
    const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(0.0f, 0.0f, 1.0f, 1.0f);\n"
    "}\n\0";
    const char *fragmentShaderSource1 = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 1.0f, 1.0f, 1.0f);\n"
    "}\n\0";
    //fin de variables
    public:
             void generarbuffers_shader()
             {

    glGenBuffers(1, &VBO2);
    glGenVertexArrays(1, &VAO2);
    glBindVertexArray(VAO2);
    glBindBuffer(GL_ARRAY_BUFFER, VBO2);
    glBufferData(GL_ARRAY_BUFFER, sizeof(posiciones2), posiciones2, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);

    glGenBuffers(1, &VBO3);
    glGenVertexArrays(1, &VAO3);
    glBindVertexArray(VAO3);
    glBindBuffer(GL_ARRAY_BUFFER, VBO3);
    glBufferData(GL_ARRAY_BUFFER, sizeof(posiciones3), posiciones3, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);
    //
    glGenBuffers(1, &VBO4);
    glGenVertexArrays(1, &VAO4);
    glBindVertexArray(VAO4);
    glBindBuffer(GL_ARRAY_BUFFER, VBO4);
    glBufferData(GL_ARRAY_BUFFER, sizeof(posiciones4), posiciones4, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);

    glGenBuffers(1, &VBO5);
    glGenVertexArrays(1, &VAO5);
    glBindVertexArray(VAO5);
    glBindBuffer(GL_ARRAY_BUFFER, VBO5);
    glBufferData(GL_ARRAY_BUFFER, sizeof(posiciones5), posiciones5, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);
    //
    vertexshader = glCreateShader(GL_VERTEX_SHADER);
    fragmentshader = glCreateShader(GL_FRAGMENT_SHADER);
    fragmentshader1 = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(vertexshader, 1, &vertexShaderSource, NULL);
    glShaderSource(fragmentshader, 1, &fragmentShaderSource, NULL);
    glShaderSource(fragmentshader1, 1, &fragmentShaderSource1, NULL);

    glCompileShader(fragmentshader);
    glCompileShader(vertexshader);
    glCompileShader(fragmentshader1);

    shaderProgram = glCreateProgram();
    shaderProgram1 = glCreateProgram();

    glAttachShader(shaderProgram, fragmentshader);
    glAttachShader(shaderProgram, vertexshader);
    glLinkProgram(shaderProgram);
    glAttachShader(shaderProgram1, fragmentshader1);
    glAttachShader(shaderProgram1, vertexshader);
    glLinkProgram(shaderProgram1);

    
    glDeleteShader(vertexshader);
    glDeleteShader(fragmentshader);
    glDeleteShader(fragmentshader1);


             }
             void drw()
{
        glBindBuffer(GL_ARRAY_BUFFER, VBO2);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(posiciones2), posiciones2);
        glBindBuffer(GL_ARRAY_BUFFER, VBO3);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(posiciones3), posiciones3);
        //
        glBindBuffer(GL_ARRAY_BUFFER, VBO4);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(posiciones4), posiciones4);
        glBindBuffer(GL_ARRAY_BUFFER, VBO5);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(posiciones5), posiciones5);
        //
        glUseProgram(shaderProgram);
        glBindVertexArray(VAO2);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(VAO3);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glUseProgram(shaderProgram1);
        glBindVertexArray(VAO4);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glBindVertexArray(VAO5);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
}
void actualizar_objetivo()
{
            n2 = -0.3f + (float)rand() / RAND_MAX * 0.9f;
            n3 = -0.7f + (float)rand() / RAND_MAX * 0.6f;
            destinox[0] = posicionesbase2[0] + n2;
            destinox[1] = posicionesbase2[1] + n3;
            destinox[3] = posicionesbase2[3] + n2;
            destinox[4] = posicionesbase2[4] + n3;
            destinox[6] = posicionesbase2[6] + n2;
            destinox[7] = posicionesbase2[7] + n3;
            destinoy[0] = posicionesbase3[0] + n2;
            destinoy[1] = posicionesbase3[1] + n3;
            destinoy[3] = posicionesbase3[3] + n2;
            destinoy[4] = posicionesbase3[4] + n3;
            destinoy[6] = posicionesbase3[6] + n2;
            destinoy[7] = posicionesbase3[7] + n3;
            //
            destinox1[0] = posicionesbase4[0] + n2;
            destinox1[1] = posicionesbase4[1] + n3;
            destinox1[3] = posicionesbase4[3] + n2;
            destinox1[4] = posicionesbase4[4] + n3;
            destinox1[6] = posicionesbase4[6] + n2;
            destinox1[7] = posicionesbase4[7] + n3;
            destinoy1[0] = posicionesbase5[0] + n2;
            destinoy1[1] = posicionesbase5[1] + n3;
            destinoy1[3] = posicionesbase5[3] + n2;
            destinoy1[4] = posicionesbase5[4] + n3;
            destinoy1[6] = posicionesbase5[6] + n2;
            destinoy1[7] = posicionesbase5[7] + n3;
            //
}
             void ir_a_posicion()
             {
            double ahora = glfwGetTime();
            if (ultimoMovimiento == 0.0)
            {
                ultimoMovimiento = ahora;
            }
            float delta = static_cast<float>(ahora - ultimoMovimiento);
            if (delta > 0.05f)
            {
                delta = 0.05f;
            }
            ultimoMovimiento = ahora;
            float paso = velocidad * delta;

            if (posiciones2[0] < destinox[0])
            {
                posiciones2[0] += paso;
            }
            if (posiciones2[0] > destinox[0])
            {
                posiciones2[0] -= paso;
            }
            //
            if (posiciones2[1] < destinox[1])
            {
                posiciones2[1] += paso;
            }
            if (posiciones2[1] > destinox[1])
            {
                posiciones2[1] -= paso;
            }
            //
            if (posiciones2[3] < destinox[3])
            {
                posiciones2[3] += paso;
            }
            if (posiciones2[3] > destinox[3])
            {
                posiciones2[3] -= paso;
            }
            //
            if (posiciones2[4] < destinox[4])
            {
                posiciones2[4] += paso;
            }
            if (posiciones2[4] > destinox[4])
            {
                posiciones2[4] -= paso;
            }
            //
            if (posiciones2[6] < destinox[6])
            {
                posiciones2[6] += paso;
            }
            if (posiciones2[6] > destinox[6])
            {
                posiciones2[6] -= paso;
            }
            //
            if (posiciones2[7] < destinox[7])
            {
                posiciones2[7] += paso;
            }
            if (posiciones2[7] > destinox[7])
            {
                posiciones2[7] -= paso;
            }
            //
            if (posiciones3[0] < destinoy[0])
            {
                posiciones3[0] += paso;
            }
            if (posiciones3[0] > destinoy[0])
            {
                posiciones3[0] -= paso;
            }
            //
            if (posiciones3[1] < destinoy[1])
            {
                posiciones3[1] += paso;
            }
            if (posiciones3[1] > destinoy[1])
            {
                posiciones3[1] -= paso;
            }
            //
            if (posiciones3[3] < destinoy[3])
            {
                posiciones3[3] += paso;
            }
            if (posiciones3[3] > destinoy[3])
            {
                posiciones3[3] -= paso;
            }
            //
            if (posiciones3[4] < destinoy[4])
            {
                posiciones3[4] += paso;
            }
            if (posiciones3[4] > destinoy[4])
            {
                posiciones3[4] -= paso;
            }
            //
            if (posiciones3[6] < destinoy[6])
            {
                posiciones3[6] += paso;
            }
            if (posiciones3[6] > destinoy[6])
            {
                posiciones3[6] -= paso;
            }
            //
            if (posiciones3[7] < destinoy[7])
            {
                posiciones3[7] += paso;
            }
            if (posiciones3[7] > destinoy[7])
            {
                posiciones3[7] -= paso;
            }
            //}efhiuhefsifsffshfhhdifhiushfhsefhuisfhiuehefiushfiusehfiusfsiejfiofhaddadawdwg
            
            if (posiciones4[0] < destinox1[0])
            {
                posiciones4[0] += paso;
            }
            if (posiciones4[0] > destinox1[0])
            {
                posiciones4[0] -= paso;
            }
            //
            if (posiciones4[1] < destinox1[1])
            {
                posiciones4[1] += paso;
            }
            if (posiciones4[1] > destinox1[1])
            {
                posiciones4[1] -= paso;
            }
            //
            if (posiciones4[3] < destinox1[3])
            {
                posiciones4[3] += paso;
            }
            if (posiciones4[3] > destinox1[3])
            {
                posiciones4[3] -= paso;
            }
            //
            if (posiciones4[4] < destinox1[4])
            {
                posiciones4[4] += paso;
            }
            if (posiciones4[4] > destinox1[4])
            {
                posiciones4[4] -= paso;
            }
            //
            if (posiciones4[6] < destinox1[6])
            {
                posiciones4[6] += paso;
            }
            if (posiciones4[6] > destinox1[6])
            {
                posiciones4[6] -= paso;
            }
            //
            if (posiciones4[7] < destinox1[7])
            {
                posiciones4[7] += paso;
            }
            if (posiciones4[7] > destinox1[7])
            {
                posiciones4[7] -= paso;
            }
            //
            if (posiciones5[0] < destinoy1[0])
            {
                posiciones5[0] += paso;
            }
            if (posiciones5[0] > destinoy1[0])
            {
                posiciones5[0] -= paso;
            }
            //
            if (posiciones5[1] < destinoy1[1])
            {
                posiciones5[1] += paso;
            }
            if (posiciones5[1] > destinoy1[1])
            {
                posiciones5[1] -= paso;
            }
            //
            if (posiciones5[3] < destinoy1[3])
            {
                posiciones5[3] += paso;
            }
            if (posiciones5[3] > destinoy1[3])
            {
                posiciones5[3] -= paso;
            }
            //
            if (posiciones5[4] < destinoy1[4])
            {
                posiciones5[4] += paso;
            }
            if (posiciones5[4] > destinoy1[4])
            {
                posiciones5[4] -= paso;
            }
            //
            if (posiciones5[6] < destinoy1[6])
            {
                posiciones5[6] += paso;
            }
            if (posiciones5[6] > destinoy1[6])
            {
                posiciones5[6] -= paso;
            }
            //
            if (posiciones5[7] < destinoy1[7])
            {
                posiciones5[7] += paso;
            }
            if (posiciones5[7] > destinoy1[7])
            {
                posiciones5[7] -= paso;
            }
            //
        }
};

void cerrar_con_escape(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}

void actualizarBuffer(unsigned int VBO, float* datos, int tamanioBytes)
{
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, tamanioBytes, datos);
}

int main(void) {
   std::cout<<"loading: this can take a while"<<std::endl;
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
    if (configuracion::rdbyt2 == 1)
    {

       configuracion::soloud.init();
        configuracion::idk.load("mus.mp3");
        if (configuracion::idk.load("col.mp3") != SoLoud::SO_NO_ERROR)
        {
          /* code */
        }
        
        configuracion::h = configuracion::soloud.play(configuracion::idk,1 ,0 , 0);

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
  std::cout <<"2-triangulo que rebota"<<std::endl;
  std::cout <<"3-juego de ezquivar"<<std::endl;
  std::cout <<"4-juego de ezquivar 2.0"<<std::endl;
  std::cout <<"5-atomos segun thompson"<<std::endl;

  std::cin>>menu_opengl;




  
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
        break;
    }

    



  }
  if (menu_opengl == 2)
  {
        GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit()) 
    {
     return -1;
    }
    

     

    std::cout<<"pone 6 numeros de -1 a 1 que van a ser los valores iniciales"<<std::endl<<"pone un numero y enter. asi 6 veces. no pueden ser todos 0"<<std::endl;
    std::cin>>boucingtriangl::a;
    std::cin>>boucingtriangl::b;
    std::cin>>boucingtriangl::c;
    std::cin>>boucingtriangl::d;
    std::cin>>boucingtriangl::e;
    std::cin>>boucingtriangl::f;
    float posiciones[6] = {
    boucingtriangl::a, boucingtriangl::d,
    boucingtriangl::b, boucingtriangl::e,
    boucingtriangl::b, boucingtriangl::f,
    };
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1360, 768, "Hello triangle", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
     {
       std::cout<<"susamongustoilet";
     }


        glGenBuffers(1, &boucingtriangl::buffminer);//generar bufer
        glBindBuffer(GL_ARRAY_BUFFER, boucingtriangl::buffminer);//definir tipo de bufer creo
        glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), posiciones, GL_STATIC_DRAW );//pasarle datos al buffer
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
         glDrawArrays(GL_TRIANGLES, 0, 3);
         if (posiciones[0] <= -1)
         {
            boucingtriangl::sumorest = false;
         }
        if (posiciones[0] >= 1)
         {
            boucingtriangl::sumorest = true;
         }
         if (posiciones[1] <= -1)
         {
           boucingtriangl::sumorest1 = false;
         }
        if (posiciones[1] >= 1)
         {
            boucingtriangl::sumorest1 = true;
         }
        if (posiciones[2] <= -1)
         {
            boucingtriangl::sumorest2 = false;
         }
        if (posiciones[2] >= 1)
         {
            boucingtriangl::sumorest2 = true;
         }
         if (posiciones[3] <= -1)
         {
            boucingtriangl::sumorest3 = false;
         }
        if (posiciones[3] >= 1)
         {
            boucingtriangl::sumorest3 = true;
         }
        if (posiciones[4] <= -1)
         {
            boucingtriangl::sumorest4 = false;
         }
        if (posiciones[4] >= 1)
         {
            boucingtriangl::sumorest4 = true;
         }
         if (posiciones[5] <= -1)
         {
            boucingtriangl::sumorest5 = false;
         }
        if (posiciones[5] >= 1)
         {
            boucingtriangl::sumorest5 = true;
         }
         //
         if (boucingtriangl::sumorest == false)
         {
            posiciones[0] += 0.0001;
         }
         if (boucingtriangl::sumorest == true)
         {
            posiciones[0] -= 0.0001;
         }
         //
         if (boucingtriangl::sumorest1 == false)
         {
            posiciones[1] += 0.0001;
         }
         if (boucingtriangl::sumorest1 == true)
         {
            posiciones[1] -= 0.0001;
         }
         //
         if (boucingtriangl::sumorest2 == false)
         {
            posiciones[2] += 0.0001;
         }
         if (boucingtriangl::sumorest2 == true)
         {
            posiciones[2] -= 0.0001;
         }
         //
         if (boucingtriangl::sumorest3 == false)
         {
            posiciones[3] += 0.0001;
         }
         if (boucingtriangl::sumorest3 == true)
         {
            posiciones[3] -= 0.0001;
         }
         //
         if (boucingtriangl::sumorest4 == false)
         {
            posiciones[4] += 0.0001;
         }
         if (boucingtriangl::sumorest4 == true)
         {
            posiciones[4] -= 0.0001;
         }
         //
         if (boucingtriangl::sumorest5 == false)
         {
            posiciones[5] += 0.0001;
         }
         if (boucingtriangl::sumorest5 == true)
         {
            posiciones[5] -= 0.0001;
         }
         std::cout<<boucingtriangl::sumorest<<posiciones[0]<<std::endl;
         
         glBegin(GL_TRIANGLES);
         glVertex2f(posiciones[0], posiciones[1]);
         glVertex2f(posiciones[2], posiciones[3]);
         glVertex2f(posiciones[4], posiciones[5]);
         glEnd();
         boucingtriangl::esclose(window);

         
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
  }
  if (menu_opengl == 3)
 {
      glfwInit();
    GLFWwindow* window;
    srand(time(0));
     /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1360, 768, "Hello triangle", NULL, NULL);
    if (!window)
    {
        std::cout<<"tricota"<<std::endl;
        glfwTerminate();
        return -1;

    }
     mov::estela[1] = 1;
     mov::estela[3] = 1;
     mov::estela[5] = 1;
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
     {
       std::cout<<"susamongustoilet";
     }
        glGenBuffers(1, &mov::buffminer);//generar bufer
        glBindBuffer(GL_ARRAY_BUFFER, mov::buffminer);//definir tipo de bufer creo
        glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), mov::posiciones, GL_STATIC_DRAW );//pasarle datos al buffer

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
         glClear(GL_COLOR_BUFFER_BIT);
         glDrawArrays(GL_TRIANGLES, 0, 3);
         glBegin(GL_TRIANGLES);
         glVertex2f(mov::posiciones[0], mov::posiciones[1]);
         glVertex2f(mov::posiciones[2], mov::posiciones[3]);
         glVertex2f(mov::posiciones[4], mov::posiciones[5]);
         glEnd();
         mov::esclose(window);
         mov::colision1 = false;
         mov::colision2 = false;

         if (mov::drawit == true)
         {
         glDrawArrays(GL_TRIANGLES, 0, 3);
         glBegin(GL_TRIANGLES);
         glVertex2f(mov::enemy3, mov::estela[1]);
         glVertex2f(mov::enemy4, mov::estela[3]);
         glVertex2f(mov::pos, mov::estela[5]);
         glEnd();
         }
         mov::i2++;

         if (mov::drawit == true)
         {
             /* code */
         
         

         
          glDrawArrays(GL_TRIANGLES, 0, 3);
          glBegin(GL_TRIANGLES);
          glVertex2f(mov::estela[0], mov::estela[1]);
          glVertex2f(mov::estela[2], mov::estela[3]);
          glVertex2f(mov::estela[4], mov::estela[5]);
          glEnd();
          mov::estela[1] -= mov::vely1;
          mov::estela[3] -= mov::vely2;
          mov::estela[5] -= mov::vely3;

          }
         mov::minxp = std::min(std::min(mov::posiciones[0], mov::posiciones[2]), mov::posiciones[4]);
         mov::upxp = std::max(std::max(mov::posiciones[0], mov::posiciones[2]), mov::posiciones[4]);
         mov::minyp = std::min(std::min(mov::posiciones[1], mov::posiciones[3]), mov::posiciones[5]);
         mov::upyp = std::max(std::max(mov::posiciones[1], mov::posiciones[3]), mov::posiciones[5]);
         mov::upyp -= 0.01;
         // tr
         mov::minxe = std::min(std::min(mov::estela[0], mov::estela[2]),mov::estela[4]);
         mov::upxe = std::max(std::max(mov::estela[0], mov::estela[2] ),mov::estela[4]);
         mov::minye = std::min(std::min(mov::estela[1], mov::estela[3] ),mov::estela[5]);
         mov::upye = std::max(std::max(mov::estela[1], mov::estela[3] ),mov::estela[5]);

         mov::minxd = std::min(std::min(mov::enemy3, mov::enemy4),mov::pos);
         mov::upxd = std::max(std::max(mov::enemy3, mov::enemy4),mov::pos);
         mov::minxp += mov::margen;
         mov::upxp  -= mov::margen;
         mov::minyp += mov::margen;
         mov::upyp  -= mov::margen;

         mov::minxe += mov::margen;
         mov::upxe  -= mov::margen;
         mov::minye += mov::margen;
         mov::upye  -= mov::margen;

         if (mov::upxp >= mov::minxe && mov::minxp <= mov::upxe && mov::minyp <= mov::upye && mov::upyp >= mov::minye)
         {
           mov::h = mov::soloud.play(mov::idk,1 ,0 , 0);
           while (mov::soloud.isValidVoiceHandle(mov::h))
           {
             SoLoud::Thread::sleep(100);
           }
             mov::colision1 = true;
         }
         
         if (mov::upxp >= mov::minxd && mov::minxp <= mov::upxd && mov::minyp <= mov::upye && mov::upyp >= mov::minye)
         {
          mov::colision2 = true;
          mov::h = mov::soloud.play(mov::idk,1 ,0 , 0);
           while (mov::soloud.isValidVoiceHandle(mov::h))
           {
             SoLoud::Thread::sleep(100);
           }
         }
         if (mov::colision1 == true or mov::colision2 == true)
         {
                    glfwSetWindowShouldClose(window, true);
         }
         if (mov::estela[1] <= -1 or mov::estela[3] <= -1 or mov::estela[5] <= -1)
         {
            mov::drawit = false;
         }
         
        if(glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        {
            mov::posiciones[1] += 0.0001;
            mov::posiciones[3] += 0.0001;
            mov::posiciones[5] += 0.0001;

        }
        if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        {
            mov::posiciones[1] -= 0.0001;
            mov::posiciones[3] -= 0.0001;
            mov::posiciones[5] -= 0.0001;
        }
        if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        {
            mov::posiciones[0] -= 0.0001;
            mov::posiciones[2] -= 0.0001;
            mov::posiciones[4] -= 0.0001;
        }
        if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        {
            mov::posiciones[0] += 0.0001;
            mov::posiciones[2] += 0.0001;
            mov::posiciones[4] += 0.0001;
        }
        
         mov::enemy = -1.0f + (float)rand() / RAND_MAX * 2.0f;
         mov::distancia1 = mov::estela[0] - mov::estela[2];
         mov::distancia2 = mov::estela[2] - mov::estela[4];
         mov::distancia3 = mov::estela[0] - mov::estela[4];
          
         mov::i++;
         if (mov::i >= 125 and mov::drawit == false)
         {
            mov::drawit = true;
            mov::enemy1 = -0.8f + (float)rand() / RAND_MAX * 1.8f;
            mov::enemy2 = -0.8f + (float)rand() / RAND_MAX * 1.8f;
            mov::enemy3 = -0.8f + (float)rand() / RAND_MAX * 1.8f;
            mov::enemy4 = -0.8f + (float)rand() / RAND_MAX * 1.8f;
            mov::enemy5 = -0.8f + (float)rand() / RAND_MAX * 1.8f;
            mov::enemy6 = -0.8f + (float)rand() / RAND_MAX * 1.8f;

            mov::i = 0;
         mov::estela[0] = mov::enemy1;
         mov::estela[2] = mov::enemy2;
         mov::estela[4] = mov::enemy5;
         mov::estela[1] = 1;
         mov::estela[3] = 1;
         mov::pos = mov::enemy6;
         mov::estela[5] = 1;
         }
         if (mov::i2 == 12088)
         {
           mov::i2 = 0;
           mov::vely1 += 0.00001;
           mov::vely2 += 0.00001;
           mov::vely3 += 0.00001;

         }
         
         
         
        std::cout<<"\r"<<mov::enemy<<std::flush;
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
 }


 if (menu_opengl == 4)
 {
  cppp();
      srand(time(0));
      glfwInit();
          glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(1360, 768, "using moderngl", NULL, NULL);
    if (!window)
    {
        std::cout << "fallo glfwCreateWindow\n";
        glfwTerminate();
        return -1;
    }
    if (!glfwInit())
    {
        std::cout << "fallo glfwInit\n";
        return -1;
    }



    glfwMakeContextCurrent(window);
    glewInit();
    const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
    const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";
    
    const char *fragmentShaderSource1 = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(0.5f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";
    
    unsigned int VBO1, VAO1;
    unsigned int VBO2, VAO2;
    unsigned int VBO3, VAO3;
    unsigned int VBO, VAO;
    unsigned int VBO5, VAO5;
    unsigned int VBO4, VAO4;
//shader things
unsigned int vertexshader = glCreateShader(GL_VERTEX_SHADER);
unsigned int fragmentshader = glCreateShader(GL_FRAGMENT_SHADER);
unsigned int fragmentshader1 = glCreateShader(GL_FRAGMENT_SHADER);

glShaderSource(vertexshader,1,&vertexShaderSource,NULL);
glShaderSource(fragmentshader,1,&fragmentShaderSource,NULL);
glShaderSource(fragmentshader1,1,&fragmentShaderSource1,NULL);

glCompileShader(vertexshader);
glCompileShader(fragmentshader);
glCompileShader(fragmentshader1);

unsigned int shaderProgram = glCreateProgram();
unsigned int shaderProgram1 = glCreateProgram();

glAttachShader(shaderProgram,fragmentshader);
glAttachShader(shaderProgram,vertexshader);
glLinkProgram(shaderProgram);
glAttachShader(shaderProgram1,fragmentshader1);
glAttachShader(shaderProgram1,vertexshader);
glLinkProgram(shaderProgram1);
glDeleteShader(vertexshader);
glDeleteShader(fragmentshader);
glDeleteShader(fragmentshader1);
 
//end of shader things
//buffer things
        glGenBuffers(1, &VBO);//generar bufer
        glGenVertexArrays(1, &VAO);
        glBindVertexArray(VAO);
        glBindBuffer(GL_ARRAY_BUFFER, VBO);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::posiciones), juegitogl::posiciones, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindVertexArray(0); 
        //
        glGenVertexArrays(1, &VAO1);
        glGenBuffers(1, &VBO1);
        glBindVertexArray(VAO1); 
        glBindBuffer(GL_ARRAY_BUFFER, VBO1);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::posiciones1), juegitogl::posiciones1, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER,0 );
        glBindVertexArray(0); 
        //
        glGenVertexArrays(1, &VAO2);
        glGenBuffers(1, &VBO2);
        glBindVertexArray(VAO2); 
        glBindBuffer(GL_ARRAY_BUFFER, VBO2);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::posiciones2), juegitogl::posiciones2, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER,0 );
        glBindVertexArray(0); 
        //
        glGenVertexArrays(1, &VAO3);
        glGenBuffers(1, &VBO3);
        glBindVertexArray(VAO3); 
        glBindBuffer(GL_ARRAY_BUFFER, VBO3);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::posiciones3), juegitogl::posiciones3, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER,0 );
        glBindVertexArray(0); 
        //
        glGenVertexArrays(1, &VAO5);
        glGenBuffers(1, &VBO5);
        glBindVertexArray(VAO5); 
        glBindBuffer(GL_ARRAY_BUFFER, VBO5);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::player), juegitogl::player, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER,0 );
        glBindVertexArray(0);
        //
        glGenVertexArrays(1, &VAO4);
        glGenBuffers(1, &VBO4);
        glBindVertexArray(VAO4); 
        glBindBuffer(GL_ARRAY_BUFFER, VBO4);//seleccionar ese buffer 
        glBufferData(GL_ARRAY_BUFFER,sizeof(juegitogl::prm), juegitogl::prm, GL_DYNAMIC_DRAW );//pasarle datos al buffer
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER,0 );
        glBindVertexArray(0);
//end of buffer things 
  

 juegitogl::segundos = 0;
          juegitogl::contador = 3;
 juegitogl::drw = false;


     long double t = glfwGetTime();
    while (!glfwWindowShouldClose(window))
    {

        float playerMinX = std::min(std::min(juegitogl::player[0], juegitogl::player[3]), juegitogl::player[6]);
        float playerMaxX = std::max(std::max(juegitogl::player[0], juegitogl::player[3]), juegitogl::player[6]);
        float playerMinY = std::min(std::min(juegitogl::player[1], juegitogl::player[4]), juegitogl::player[7]);
        float playerMaxY = std::max(std::max(juegitogl::player[1], juegitogl::player[4]), juegitogl::player[7]);
        //
        float objMinX = std::min(std::min(juegitogl::prm[0], juegitogl::prm[3]), juegitogl::prm[6]);
        float objMaxX = std::max(std::max(juegitogl::prm[0], juegitogl::prm[3]), juegitogl::prm[6]);
        float objMinY = std::min(std::min(juegitogl::prm[1], juegitogl::prm[4]), juegitogl::prm[7]);
        float objMaxY = std::max(std::max(juegitogl::prm[1], juegitogl::prm[4]), juegitogl::prm[7]);
        //
        float enemy1MinX = std::min(std::min(std::min(juegitogl::posiciones[0], juegitogl::posiciones[3]), juegitogl::posiciones[6]),
                                    std::min(std::min(juegitogl::posiciones1[0], juegitogl::posiciones1[3]), juegitogl::posiciones1[6]));
        float enemy1MaxX = std::max(std::max(std::max(juegitogl::posiciones[0], juegitogl::posiciones[3]), juegitogl::posiciones[6]),
                                    std::max(std::max(juegitogl::posiciones1[0], juegitogl::posiciones1[3]), juegitogl::posiciones1[6]));
        float enemy1MinY = std::min(std::min(std::min(juegitogl::posiciones[1], juegitogl::posiciones[4]), juegitogl::posiciones[7]),
                                    std::min(std::min(juegitogl::posiciones1[1], juegitogl::posiciones1[4]), juegitogl::posiciones1[7]));
        float enemy1MaxY = std::max(std::max(std::max(juegitogl::posiciones[1], juegitogl::posiciones[4]), juegitogl::posiciones[7]),
                                    std::max(std::max(juegitogl::posiciones1[1], juegitogl::posiciones1[4]), juegitogl::posiciones1[7]));

        float enemy2MinX = std::min(std::min(std::min(juegitogl::posiciones2[0], juegitogl::posiciones2[3]), juegitogl::posiciones2[6]),
                                    std::min(std::min(juegitogl::posiciones3[0], juegitogl::posiciones3[3]), juegitogl::posiciones3[6]));
        float enemy2MaxX = std::max(std::max(std::max(juegitogl::posiciones2[0], juegitogl::posiciones2[3]), juegitogl::posiciones2[6]),
                                    std::max(std::max(juegitogl::posiciones3[0], juegitogl::posiciones3[3]), juegitogl::posiciones3[6]));
        float enemy2MinY = std::min(std::min(std::min(juegitogl::posiciones2[1], juegitogl::posiciones2[4]), juegitogl::posiciones2[7]),
                                    std::min(std::min(juegitogl::posiciones3[1], juegitogl::posiciones3[4]), juegitogl::posiciones3[7]));
        float enemy2MaxY = std::max(std::max(std::max(juegitogl::posiciones2[1], juegitogl::posiciones2[4]), juegitogl::posiciones2[7]),
                                    std::max(std::max(juegitogl::posiciones3[1], juegitogl::posiciones3[4]), juegitogl::posiciones3[7]));
playerMaxY -= 0.05f;
playerMinY += 0.05f;
playerMaxX -= 0.05f;
playerMinX += 0.05f;

        bool colisionobjeto =
            playerMaxX >= objMinX &&
            playerMinX <= objMaxX &&
            playerMaxY >= objMinY &&
            playerMinY <= objMaxY;
        bool colisionEnemigo1 =
            playerMaxX >= enemy1MinX &&
            playerMinX <= enemy1MaxX &&
            playerMaxY >= enemy1MinY &&
            playerMinY <= enemy1MaxY;

        bool colisionEnemigo2 =
            playerMaxX >= enemy2MinX &&
            playerMinX <= enemy2MaxX &&
            playerMaxY >= enemy2MinY &&
            playerMinY <= enemy2MaxY;
if (colisionobjeto == true && juegitogl::colisionAnterior == false)
{
    juegitogl::contador++;
}

juegitogl::colisionAnterior = colisionobjeto;

            if (juegitogl::contador >= 3)
            {
                juegitogl::segundos = 0;
                juegitogl::si = true;
                juegitogl::contador = 0;
                colisionobjeto = false;
                juegitogl::drw1 = false;
                 juegitogl::prm[0] = -1; 
                         juegitogl::prm[1] = 1; 
                                     juegitogl::prm[2] = 0;  
                                                 juegitogl::prm[3] = -0.9;  
                                                                juegitogl::prm[4] = 0.8;
                                                                              juegitogl::prm[5] = 0;
                                                                                          juegitogl::prm[6] = -0.8;
                                                                                                         juegitogl::prm[7] = 1;
                                                                                                                     juegitogl::prm[8] = 0;
                                                                                                                          juegitogl::prm[0] += juegitogl::n2;
          juegitogl::prm[3] += juegitogl::n2;
               juegitogl::prm[6] += juegitogl::n2;
     juegitogl::prm[1] -= juegitogl::n3;
          juegitogl::prm[4] -= juegitogl::n3;
               juegitogl::prm[7] -= juegitogl::n3;
            }
            if (juegitogl::segundos == 67)
            {
              glfwSetWindowShouldClose(window, true);
            }

            
 if ((glfwGetTime() - t) >= 1.0)
 {
    juegitogl::segundos++;
        t = glfwGetTime();
 }
if (juegitogl::drw && (colisionEnemigo1 || colisionEnemigo2))
{
    glfwSetWindowShouldClose(window, true);
}
if (juegitogl::segundos == 30)
{
    juegitogl::drw1 = true;
}



 if (colisionobjeto == true and juegitogl::contador != 3)
 {

    
            juegitogl::n2 = 0.0f + (float)rand() / RAND_MAX * 1.6f;// numero aleatorio con coma
            juegitogl::n3 = 0.0f + (float)rand() / RAND_MAX * 1.6f;// numero aleatorio con coma
            juegitogl::prm[0] = -1; 
                         juegitogl::prm[1] = 1; 
                                     juegitogl::prm[2] = 0;  
                                                 juegitogl::prm[3] = -0.9;  
                                                                juegitogl::prm[4] = 0.8;
                                                                              juegitogl::prm[5] = 0;
                                                                                          juegitogl::prm[6] = -0.8;
                                                                                                         juegitogl::prm[7] = 1;
                                                                                                                     juegitogl::prm[8] = 0;


     juegitogl::prm[0] += juegitogl::n2;
          juegitogl::prm[3] += juegitogl::n2;
               juegitogl::prm[6] += juegitogl::n2;
     juegitogl::prm[1] -= juegitogl::n3;
          juegitogl::prm[4] -= juegitogl::n3;
               juegitogl::prm[7] -= juegitogl::n3;

     juegitogl::actualizarBuffer(VBO4,juegitogl::prm, sizeof(juegitogl::prm));
 }
        std::cout<<" "<<juegitogl::segundos<<std::flush;
     juegitogl::calculo = juegitogl::prm[0];
        glClearColor(0.08f, 0.08f, 0.12f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT); 


        glUseProgram(shaderProgram);
        if (juegitogl::drw)
        {
        glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glBindVertexArray(VAO1);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glBindVertexArray(VAO2);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glBindVertexArray(VAO3);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
           juegitogl::posiciones[1] -= juegitogl::caiday;
           juegitogl::posiciones[4] -= juegitogl::caiday;
           juegitogl::posiciones[7] -= juegitogl::caiday;
           juegitogl::posiciones1[1] -= juegitogl::caiday;
           juegitogl::posiciones1[4] -= juegitogl::caiday;
           juegitogl::posiciones1[7] -= juegitogl::caiday;
           //
           juegitogl::posiciones2[1] -= juegitogl::caiday;
           juegitogl::posiciones2[4] -= juegitogl::caiday;
           juegitogl::posiciones2[7] -= juegitogl::caiday;
           juegitogl::posiciones3[1] -= juegitogl::caiday;
           juegitogl::posiciones3[4] -= juegitogl::caiday;
           juegitogl::posiciones3[7] -= juegitogl::caiday;
        }
        glUseProgram(shaderProgram1);
         if (juegitogl::drw1 == true)
{
            glBindVertexArray(VAO4);
            glDrawArrays(GL_TRIANGLES,0,3);
            glBindVertexArray(0);
}       
        glBindVertexArray(VAO5);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        juegitogl::actualizarBuffer(VBO, juegitogl::posiciones, sizeof(juegitogl::posiciones));
        juegitogl::actualizarBuffer(VBO1, juegitogl::posiciones1, sizeof(juegitogl::posiciones1));
        juegitogl::actualizarBuffer(VBO2, juegitogl::posiciones2, sizeof(juegitogl::posiciones2));
        juegitogl::actualizarBuffer(VBO3, juegitogl::posiciones3, sizeof(juegitogl::posiciones3));
        juegitogl::actualizarBuffer(VBO5, juegitogl::player, sizeof(juegitogl::player));
   
         juegitogl::c++;
         if (juegitogl::drw == false)
         {
            juegitogl::drw = true;
            
            juegitogl::n = 0.0f + (float)rand() / RAND_MAX * 1.6f;// numero aleatorio con coma
            juegitogl::n1 = 0.0f + (float)rand() / RAND_MAX * 1.6f;// numero aleatorio con coma
juegitogl::posiciones[0] = -1 + juegitogl::n;
juegitogl::posiciones[3] = -1 + juegitogl::n;
juegitogl::posiciones[6] =  -0.6f + juegitogl::n;

juegitogl::posiciones1[0] =  -0.6f + juegitogl::n;
juegitogl::posiciones1[3] =  -0.6f + juegitogl::n;
juegitogl::posiciones1[6] = -1 + juegitogl::n;
//
juegitogl::posiciones2[0] = -1 + juegitogl::n1;
juegitogl::posiciones2[3] = -1 + juegitogl::n1;
juegitogl::posiciones2[6] =  -0.6f + juegitogl::n1;

juegitogl::posiciones3[0] =  -0.6f + juegitogl::n1;
juegitogl::posiciones3[3] =  -0.6f + juegitogl::n1;
juegitogl::posiciones3[6] = -1 + juegitogl::n1;
           //y
juegitogl::posiciones[1] = 0.8f;
juegitogl::posiciones[4] = 0.4f;
juegitogl::posiciones[7] = 0.4f;

juegitogl::posiciones1[1] = 0.8f;
juegitogl::posiciones1[4] = 0.4f;
juegitogl::posiciones1[7] = 0.8f;
//
juegitogl::posiciones2[1] = 0.8f;
juegitogl::posiciones2[4] = 0.4f;
juegitogl::posiciones2[7] = 0.4f;

juegitogl::posiciones3[1] = 0.8f;
juegitogl::posiciones3[4] = 0.4f;
juegitogl::posiciones3[7] = 0.8f;

         }  

         if (juegitogl::posiciones[7] <= -1)
         {
            juegitogl::drw = false;
         }
         if (juegitogl::c == 8583)
         {
            juegitogl::c = 0;
            juegitogl::caiday += 0.000001;
         }
         // jugador wasd
         if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
         {
            juegitogl::player[1] += 0.0004;
            juegitogl::player[4] += 0.0004;
            juegitogl::player[7] += 0.0004;
         }
         if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
         {
            juegitogl::player[1] -= 0.0004;
            juegitogl::player[4] -= 0.0004;
            juegitogl::player[7] -= 0.0004;
         }
        if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
         {
            juegitogl::player[0] += 0.0004;
            juegitogl::player[3] += 0.0004;
            juegitogl::player[6] += 0.0004;
         }
        if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
         {
            juegitogl::player[0] -= 0.0004;
            juegitogl::player[3] -= 0.0004;
            juegitogl::player[6] -= 0.0004;
         }
         //end
       
        juegitogl::cerrar_con_escape(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    
    glfwTerminate();
    
 }
 if (menu_opengl == 5)
 {
      
    srand(time(0));
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    while(true){

    
    std::cout<<"cuantos electrones queres?(habia 92 elementos en la epoca a si que ese es el maximo)"<<std::endl;
    std::cin>>Vars::i;
    if (Vars::i >= 1 and Vars::i <= 92)
    {
        break;
    }
    }
    electron prueba1;
    electron prueba2;
    electron prueba3;
    electron prueba4;
    electron prueba5;
    electron prueba6;
    electron prueba7;
    electron prueba8;
    electron prueba9;
    electron prueba10;
    electron prueba11;
    electron prueba12;
    electron prueba13;
    electron prueba14;
    electron prueba15;
    electron prueba16;
    electron prueba17;
    electron prueba18;
    electron prueba19;
    electron prueba20;
    electron prueba21;
    electron prueba22;
    electron prueba23;
    electron prueba24;
    electron prueba25;
    electron prueba26;
    electron prueba27;
    electron prueba28;
    electron prueba29;
    electron prueba30;
    electron prueba31;
    electron prueba32;
    electron prueba33;
    electron prueba34;
    electron prueba35;
    electron prueba36;
    electron prueba37;
    electron prueba38;
    electron prueba39;
    electron prueba40;
    electron prueba41;
    electron prueba42;
    electron prueba43;
    electron prueba44;
    electron prueba45;
    electron prueba46;
    electron prueba47;
    electron prueba48;
    electron prueba49;
    electron prueba50;
    electron prueba51;
    electron prueba52;
    electron prueba53;
    electron prueba54;
    electron prueba55;
    electron prueba56;
    electron prueba57;
    electron prueba58;
    electron prueba59;
    electron prueba60;
    electron prueba61;
    electron prueba62;
    electron prueba63;
    electron prueba64;
    electron prueba65;
    electron prueba66;
    electron prueba67;
    electron prueba68;
    electron prueba69;
    electron prueba70;
    electron prueba71;
    electron prueba72;
    electron prueba73;
    electron prueba74;
    electron prueba75;
    electron prueba76;
    electron prueba77;
    electron prueba78;
    electron prueba79;
    electron prueba80;
    electron prueba81;
    electron prueba82;
    electron prueba83;
    electron prueba84;
    electron prueba85;
    electron prueba86;
    electron prueba87;
    electron prueba88;
    electron prueba89;
    electron prueba90;
    electron prueba91;
    electron prueba92;
if (!glfwInit())
{
    std::cout << "fallo glfwInit\n";
    return -1;
}

GLFWwindow* window = glfwCreateWindow(
    1360,
    768,
    "tabla periodica segun el modelo de thompson",
    NULL,
    NULL
);

if (!window)
{
    std::cout << "fallo glfwCreateWindow\n";
    glfwTerminate();
    return -1;
}

glfwMakeContextCurrent(window);

GLenum err = glewInit();

if (err != GLEW_OK)
{
    std::cout << "fallo glew: "
              << glewGetErrorString(err)
              << "\n";
    return -1;
}
    if (Vars::i >= 1)
    {
        prueba1.generarbuffers_shader();
    }
    if (Vars::i >= 2)
    {
        prueba2.generarbuffers_shader();
    }
    if (Vars::i >= 3)
    {
        prueba3.generarbuffers_shader();
    }
    if (Vars::i >= 4)
    {
        prueba4.generarbuffers_shader();
    }
    if (Vars::i >= 5)
    {
        prueba5.generarbuffers_shader();
    }
    if (Vars::i >= 6)
    {
        prueba6.generarbuffers_shader();
    }
    if (Vars::i >= 7)
    {
        prueba7.generarbuffers_shader();
    }
    if (Vars::i >= 8)
    {
        prueba8.generarbuffers_shader();
    }
    if (Vars::i >= 9)
    {
        prueba9.generarbuffers_shader();
    }
    if (Vars::i >= 10)
    {
        prueba10.generarbuffers_shader();
    }
    if (Vars::i >= 11)
    {
        prueba11.generarbuffers_shader();
    }
    if (Vars::i >= 12)
    {
        prueba12.generarbuffers_shader();
    }
    if (Vars::i >= 13)
    {
        prueba13.generarbuffers_shader();
    }
    if (Vars::i >= 14)
    {
        prueba14.generarbuffers_shader();
    }
    if (Vars::i >= 15)
    {
        prueba15.generarbuffers_shader();
    }
    if (Vars::i >= 16)
    {
        prueba16.generarbuffers_shader();
    }
    if (Vars::i >= 17)
    {
        prueba17.generarbuffers_shader();
    }
    if (Vars::i >= 18)
    {
        prueba18.generarbuffers_shader();
    }
    if (Vars::i >= 19)
    {
        prueba19.generarbuffers_shader();
    }
    if (Vars::i >= 20)
    {
        prueba20.generarbuffers_shader();
    }
    if (Vars::i >= 21)
    {
        prueba21.generarbuffers_shader();
    }
    if (Vars::i >= 22)
    {
        prueba22.generarbuffers_shader();
    }
    if (Vars::i >= 23)
    {
        prueba23.generarbuffers_shader();
    }
    if (Vars::i >= 24)
    {
        prueba24.generarbuffers_shader();
    }
    if (Vars::i >= 25)
    {
        prueba25.generarbuffers_shader();
    }
    if (Vars::i >= 26)
    {
        prueba26.generarbuffers_shader();
    }
    if (Vars::i >= 27)
    {
        prueba27.generarbuffers_shader();
    }
    if (Vars::i >= 28)
    {
        prueba28.generarbuffers_shader();
    }
    if (Vars::i >= 29)
    {
        prueba29.generarbuffers_shader();
    }
    if (Vars::i >= 30)
    {
        prueba30.generarbuffers_shader();
    }
    if (Vars::i >= 31)
    {
        prueba31.generarbuffers_shader();
    }
    if (Vars::i >= 32)
    {
        prueba32.generarbuffers_shader();
    }
    if (Vars::i >= 33)
    {
        prueba33.generarbuffers_shader();
    }
    if (Vars::i >= 34)
    {
        prueba34.generarbuffers_shader();
    }
    if (Vars::i >= 35)
    {
        prueba35.generarbuffers_shader();
    }
    if (Vars::i >= 36)
    {
        prueba36.generarbuffers_shader();
    }
    if (Vars::i >= 37)
    {
        prueba37.generarbuffers_shader();
    }
    if (Vars::i >= 38)
    {
        prueba38.generarbuffers_shader();
    }
    if (Vars::i >= 39)
    {
        prueba39.generarbuffers_shader();
    }
    if (Vars::i >= 40)
    {
        prueba40.generarbuffers_shader();
    }
    if (Vars::i >= 41)
    {
        prueba41.generarbuffers_shader();
    }
    if (Vars::i >= 42)
    {
        prueba42.generarbuffers_shader();
    }
    if (Vars::i >= 43)
    {
        prueba43.generarbuffers_shader();
    }
    if (Vars::i >= 44)
    {
        prueba44.generarbuffers_shader();
    }
    if (Vars::i >= 45)
    {
        prueba45.generarbuffers_shader();
    }
    if (Vars::i >= 46)
    {
        prueba46.generarbuffers_shader();
    }
    if (Vars::i >= 47)
    {
        prueba47.generarbuffers_shader();
    }
    if (Vars::i >= 48)
    {
        prueba48.generarbuffers_shader();
    }
    if (Vars::i >= 49)
    {
        prueba49.generarbuffers_shader();
    }
    if (Vars::i >= 50)
    {
        prueba50.generarbuffers_shader();
    }
    if (Vars::i >= 51)
    {
        prueba51.generarbuffers_shader();
    }
    if (Vars::i >= 52)
    {
        prueba52.generarbuffers_shader();
    }
    if (Vars::i >= 53)
    {
        prueba53.generarbuffers_shader();
    }
    if (Vars::i >= 54)
    {
        prueba54.generarbuffers_shader();
    }
    if (Vars::i >= 55)
    {
        prueba55.generarbuffers_shader();
    }
    if (Vars::i >= 56)
    {
        prueba56.generarbuffers_shader();
    }
    if (Vars::i >= 57)
    {
        prueba57.generarbuffers_shader();
    }
    if (Vars::i >= 58)
    {
        prueba58.generarbuffers_shader();
    }
    if (Vars::i >= 59)
    {
        prueba59.generarbuffers_shader();
    }
    if (Vars::i >= 60)
    {
        prueba60.generarbuffers_shader();
    }
    if (Vars::i >= 61)
    {
        prueba61.generarbuffers_shader();
    }
    if (Vars::i >= 62)
    {
        prueba62.generarbuffers_shader();
    }
    if (Vars::i >= 63)
    {
        prueba63.generarbuffers_shader();
    }
    if (Vars::i >= 64)
    {
        prueba64.generarbuffers_shader();
    }
    if (Vars::i >= 65)
    {
        prueba65.generarbuffers_shader();
    }
    if (Vars::i >= 66)
    {
        prueba66.generarbuffers_shader();
    }
    if (Vars::i >= 67)
    {
        prueba67.generarbuffers_shader();
    }
    if (Vars::i >= 68)
    {
        prueba68.generarbuffers_shader();
    }
    if (Vars::i >= 69)
    {
        prueba69.generarbuffers_shader();
    }
    if (Vars::i >= 70)
    {
        prueba70.generarbuffers_shader();
    }
    if (Vars::i >= 71)
    {
        prueba71.generarbuffers_shader();
    }
    if (Vars::i >= 72)
    {
        prueba72.generarbuffers_shader();
    }
    if (Vars::i >= 73)
    {
        prueba73.generarbuffers_shader();
    }
    if (Vars::i >= 74)
    {
        prueba74.generarbuffers_shader();
    }
    if (Vars::i >= 75)
    {
        prueba75.generarbuffers_shader();
    }
    if (Vars::i >= 76)
    {
        prueba76.generarbuffers_shader();
    }
    if (Vars::i >= 77)
    {
        prueba77.generarbuffers_shader();
    }
    if (Vars::i >= 78)
    {
        prueba78.generarbuffers_shader();
    }
    if (Vars::i >= 79)
    {
        prueba79.generarbuffers_shader();
    }
    if (Vars::i >= 80)
    {
        prueba80.generarbuffers_shader();
    }
    if (Vars::i >= 81)
    {
        prueba81.generarbuffers_shader();
    }
    if (Vars::i >= 82)
    {
        prueba82.generarbuffers_shader();
    }
    if (Vars::i >= 83)
    {
        prueba83.generarbuffers_shader();
    }
    if (Vars::i >= 84)
    {
        prueba84.generarbuffers_shader();
    }
    if (Vars::i >= 85)
    {
        prueba85.generarbuffers_shader();
    }
    if (Vars::i >= 86)
    {
        prueba86.generarbuffers_shader();
    }
    if (Vars::i >= 87)
    {
        prueba87.generarbuffers_shader();
    }
    if (Vars::i >= 88)
    {
        prueba88.generarbuffers_shader();
    }
    if (Vars::i >= 89)
    {
        prueba89.generarbuffers_shader();
    }
    if (Vars::i >= 90)
    {
        prueba90.generarbuffers_shader();
    }
    if (Vars::i >= 91)
    {
        prueba91.generarbuffers_shader();
    }
    if (Vars::i >= 92)
    {
        prueba92.generarbuffers_shader();
    }
    
    Vars::vertexshader = glCreateShader(GL_VERTEX_SHADER);
    Vars::fragmentshader = glCreateShader(GL_FRAGMENT_SHADER);
    Vars::fragmentshader1 = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(Vars::vertexshader, 1, &Vars::vertexShaderSource, NULL);
    glShaderSource(Vars::fragmentshader, 1, &Vars::fragmentShaderSource, NULL);
    glShaderSource(Vars::fragmentshader1 , 1, &Vars::fragmentShaderSource1, NULL);

    glCompileShader(Vars::vertexshader);
    glCompileShader(Vars::fragmentshader);
    glCompileShader(Vars::fragmentshader1);

    Vars::shaderProgram = glCreateProgram();
    Vars::shaderProgram1 = glCreateProgram();

    glAttachShader(Vars::shaderProgram, Vars::fragmentshader);
    glAttachShader(Vars::shaderProgram, Vars::vertexshader);
    glLinkProgram(Vars::shaderProgram);
    glAttachShader(Vars::shaderProgram1, Vars::fragmentshader1);
    glAttachShader(Vars::shaderProgram1, Vars::vertexshader);
    glLinkProgram(Vars::shaderProgram1);
    
    glDeleteShader(Vars::vertexshader);
    glDeleteShader(Vars::fragmentshader);
    glDeleteShader(Vars::fragmentshader1);

    //buffer things
    glGenBuffers(1, &Vars::VBO);
    glGenVertexArrays(1, &Vars::VAO);
    glBindVertexArray(Vars::VAO);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones), Vars::posiciones, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);

    glGenBuffers(1, &Vars::VBO1);
    glGenVertexArrays(1, &Vars::VAO1);
    glBindVertexArray(Vars::VAO1);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO1);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones1), Vars::posiciones1, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);
    //+
    glGenBuffers(1, &Vars::VBO2);
    glGenVertexArrays(1, &Vars::VAO2);
    glBindVertexArray(Vars::VAO2);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO2);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones2), Vars::posiciones2, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);

    glGenBuffers(1, &Vars::VBO3);
    glGenVertexArrays(1, &Vars::VAO3);
    glBindVertexArray(Vars::VAO3);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO3);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones3), Vars::posiciones3, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);
    //
        glGenBuffers(1, &Vars::VBO4);
    glGenVertexArrays(1, &Vars::VAO4);
    glBindVertexArray(Vars::VAO4);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO4);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones4), Vars::posiciones4, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);

    glGenBuffers(1, &Vars::VBO5);
    glGenVertexArrays(1, &Vars::VAO5);
    glBindVertexArray(Vars::VAO5);
    glBindBuffer(GL_ARRAY_BUFFER, Vars::VBO5);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vars::posiciones5), Vars::posiciones5, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(0);
    //
    Vars::sp.load("textovich.mp3");
    Vars::t = glfwGetTime();
    Vars::soloud.init();
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glUseProgram(Vars::shaderProgram);
        glBindVertexArray(Vars::VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO1);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        glUseProgram(Vars::shaderProgram1);
        glBindVertexArray(Vars::VAO2);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO3);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO4);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO5);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        if (Vars::i >= 1)
        {
            prueba1.drw();
        }
        if (Vars::i >= 2)
        {
            prueba2.drw();
        }
        if (Vars::i >= 3)
        {
            prueba3.drw();
        }
        if (Vars::i >= 4)
        {
            prueba4.drw();
        }
        if (Vars::i >= 5)
        {
            prueba5.drw();
        }
        if (Vars::i >= 6)
        {
            prueba6.drw();
        }
        if (Vars::i >= 7)
        {
            prueba7.drw();
        }
        if (Vars::i >= 8)
        {
            prueba8.drw();
        }
        if (Vars::i >= 9)
        {
            prueba9.drw();
        }
        if (Vars::i >= 10)
        {
            prueba10.drw();
        }
        if (Vars::i >= 11)
        {
            prueba11.drw();
        }
        if (Vars::i >= 12)
        {
            prueba12.drw();
        }
        if (Vars::i >= 13)
        {
            prueba13.drw();
        }
        if (Vars::i >= 14)
        {
            prueba14.drw();
        }
        if (Vars::i >= 15)
        {
            prueba15.drw();
        }
        if (Vars::i >= 16)
        {
            prueba16.drw();
        }
        if (Vars::i >= 17)
        {
            prueba17.drw();
        }
        if (Vars::i >= 18)
        {
            prueba18.drw();
        }
        if (Vars::i >= 19)
        {
            prueba19.drw();
        }
        if (Vars::i >= 20)
        {
            prueba20.drw();
        }
        if (Vars::i >= 21)
        {
            prueba21.drw();
        }
        if (Vars::i >= 22)
        {
            prueba22.drw();
        }
        if (Vars::i >= 23)
        {
            prueba23.drw();
        }
        if (Vars::i >= 24)
        {
            prueba24.drw();
        }
        if (Vars::i >= 25)
        {
            prueba25.drw();
        }
        if (Vars::i >= 26)
        {
            prueba26.drw();
        }
        if (Vars::i >= 27)
        {
            prueba27.drw();
        }
        if (Vars::i >= 28)
        {
            prueba28.drw();
        }
        if (Vars::i >= 29)
        {
            prueba29.drw();
        }
        if (Vars::i >= 30)
        {
            prueba30.drw();
        }
        if (Vars::i >= 31)
        {
            prueba31.drw();
        }
        if (Vars::i >= 32)
        {
            prueba32.drw();
        }
        if (Vars::i >= 33)
        {
            prueba33.drw();
        }
        if (Vars::i >= 34)
        {
            prueba34.drw();
        }
        if (Vars::i >= 35)
        {
            prueba35.drw();
        }
        if (Vars::i >= 36)
        {
            prueba36.drw();
        }
        if (Vars::i >= 37)
        {
            prueba37.drw();
        }
        if (Vars::i >= 38)
        {
            prueba38.drw();
        }
        if (Vars::i >= 39)
        {
            prueba39.drw();
        }
        if (Vars::i >= 40)
        {
            prueba40.drw();
        }
        if (Vars::i >= 41)
        {
            prueba41.drw();
        }
        if (Vars::i >= 42)
        {
            prueba42.drw();
        }
        if (Vars::i >= 43)
        {
            prueba43.drw();
        }
        if (Vars::i >= 44)
        {
            prueba44.drw();
        }
        if (Vars::i >= 45)
        {
            prueba45.drw();
        }
        if (Vars::i >= 46)
        {
            prueba46.drw();
        }
        if (Vars::i >= 47)
        {
            prueba47.drw();
        }
        if (Vars::i >= 48)
        {
            prueba48.drw();
        }
        if (Vars::i >= 49)
        {
            prueba49.drw();
        }
        if (Vars::i >= 50)
        {
            prueba50.drw();
        }
        if (Vars::i >= 51)
        {
            prueba51.drw();
        }
        if (Vars::i >= 52)
        {
            prueba52.drw();
        }
        if (Vars::i >= 53)
        {
            prueba53.drw();
        }
        if (Vars::i >= 54)
        {
            prueba54.drw();
        }
        if (Vars::i >= 55)
        {
            prueba55.drw();
        }
        if (Vars::i >= 56)
        {
            prueba56.drw();
        }
        if (Vars::i >= 57)
        {
            prueba57.drw();
        }
        if (Vars::i >= 58)
        {
            prueba58.drw();
        }
        if (Vars::i >= 59)
        {
            prueba59.drw();
        }
        if (Vars::i >= 60)
        {
            prueba60.drw();
        }
        if (Vars::i >= 61)
        {
            prueba61.drw();
        }
        if (Vars::i >= 62)
        {
            prueba62.drw();
        }
        if (Vars::i >= 63)
        {
            prueba63.drw();
        }
        if (Vars::i >= 64)
        {
            prueba64.drw();
        }
        if (Vars::i >= 65)
        {
            prueba65.drw();
        }
        if (Vars::i >= 66)
        {
            prueba66.drw();
        }
        if (Vars::i >= 67)
        {
            prueba67.drw();
        }
        if (Vars::i >= 68)
        {
            prueba68.drw();
        }
        if (Vars::i >= 69)
        {
            prueba69.drw();
        }
        if (Vars::i >= 70)
        {
            prueba70.drw();
        }
        if (Vars::i >= 71)
        {
            prueba71.drw();
        }
        if (Vars::i >= 72)
        {
            prueba72.drw();
        }
        if (Vars::i >= 73)
        {
            prueba73.drw();
        }
        if (Vars::i >= 74)
        {
            prueba74.drw();
        }
        if (Vars::i >= 75)
        {
            prueba75.drw();
        }
        if (Vars::i >= 76)
        {
            prueba76.drw();
        }
        if (Vars::i >= 77)
        {
            prueba77.drw();
        }
        if (Vars::i >= 78)
        {
            prueba78.drw();
        }
        if (Vars::i >= 79)
        {
            prueba79.drw();
        }
        if (Vars::i >= 80)
        {
            prueba80.drw();
        }
        if (Vars::i >= 81)
        {
            prueba81.drw();
        }
        if (Vars::i >= 82)
        {
            prueba82.drw();
        }
        if (Vars::i >= 83)
        {
            prueba83.drw();
        }
        if (Vars::i >= 84)
        {
            prueba84.drw();
        }
        if (Vars::i >= 85)
        {
            prueba85.drw();
        }
        if (Vars::i >= 86)
        {
            prueba86.drw();
        }
        if (Vars::i >= 87)
        {
            prueba87.drw();
        }
        if (Vars::i >= 88)
        {
            prueba88.drw();
        }
        if (Vars::i >= 89)
        {
            prueba89.drw();
        }
        if (Vars::i >= 90)
        {
            prueba90.drw();
        }
        if (Vars::i >= 91)
        {
            prueba91.drw();
        }
        if (Vars::i >= 92)
        {
            prueba92.drw();
        }
        //
        glUseProgram(Vars::shaderProgram1);
        glBindVertexArray(Vars::VAO2);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO3);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);

        glBindVertexArray(Vars::VAO4);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        
        glBindVertexArray(Vars::VAO5);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glBindVertexArray(0);
        if ((glfwGetTime() - Vars::t) >= 0.65)
        {
            Vars::segundos++;
            Vars::t = glfwGetTime();
            if (Vars::i >= 61)
            {
                prueba61.actualizar_objetivo();
            }
            if (Vars::i >= 11)
            {
                prueba11.actualizar_objetivo();
            }
            if (Vars::i >= 44)
            {
                prueba44.actualizar_objetivo();
            }
            if (Vars::i >= 2)
            {
                prueba2.actualizar_objetivo();
            }
            if (Vars::i >= 66)
            {
                prueba66.actualizar_objetivo();
            }
            if (Vars::i >= 60)
            {
                prueba60.actualizar_objetivo();
            }
            if (Vars::i >= 16)
            {
                prueba16.actualizar_objetivo();
            }
            if (Vars::i >= 27)
            {
                prueba27.actualizar_objetivo();
            }
            if (Vars::i >= 42)
            {
                prueba42.actualizar_objetivo();
            }
            if (Vars::i >= 33)
            {
                prueba33.actualizar_objetivo();
            }
            if (Vars::i >= 48)
            {
                prueba48.actualizar_objetivo();
            }
            if (Vars::i >= 50)
            {
                prueba50.actualizar_objetivo();
            }
            if (Vars::i >= 69)
            {
                prueba69.actualizar_objetivo();
            }
            if (Vars::i >= 20)
            {
                prueba20.actualizar_objetivo();
            }
            if (Vars::i >= 62)
            {
                prueba62.actualizar_objetivo();
            }
            if (Vars::i >= 68)
            {
                prueba68.actualizar_objetivo();
            }
            if (Vars::i >= 46)
            {
                prueba46.actualizar_objetivo();
            }
            if (Vars::i >= 73)
            {
                prueba73.actualizar_objetivo();
            }
            if (Vars::i >= 71)
            {
                prueba71.actualizar_objetivo();
            }
            if (Vars::i >= 51)
            {
                prueba51.actualizar_objetivo();
            }
            if (Vars::i >= 52)
            {
                prueba52.actualizar_objetivo();
            }
            if (Vars::i >= 88)
            {
                prueba88.actualizar_objetivo();
            }
            if (Vars::i >= 78)
            {
                prueba78.actualizar_objetivo();
            }
            if (Vars::i >= 75)
            {
                prueba75.actualizar_objetivo();
            }
            if (Vars::i >= 34)
            {
                prueba34.actualizar_objetivo();
            }
            if (Vars::i >= 9)
            {
                prueba9.actualizar_objetivo();
            }
            if (Vars::i >= 38)
            {
                prueba38.actualizar_objetivo();
            }
            if (Vars::i >= 74)
            {
                prueba74.actualizar_objetivo();
            }
            if (Vars::i >= 31)
            {
                prueba31.actualizar_objetivo();
            }
            if (Vars::i >= 45)
            {
                prueba45.actualizar_objetivo();
            }
            if (Vars::i >= 77)
            {
                prueba77.actualizar_objetivo();
            }
            if (Vars::i >= 43)
            {
                prueba43.actualizar_objetivo();
            }
            if (Vars::i >= 41)
            {
                prueba41.actualizar_objetivo();
            }
            if (Vars::i >= 91)
            {
                prueba91.actualizar_objetivo();
            }
            if (Vars::i >= 59)
            {
                prueba59.actualizar_objetivo();
            }
            if (Vars::i >= 80)
            {
                prueba80.actualizar_objetivo();
            }
            if (Vars::i >= 13)
            {
                prueba13.actualizar_objetivo();
            }
            if (Vars::i >= 37)
            {
                prueba37.actualizar_objetivo();
            }
            if (Vars::i >= 24)
            {
                prueba24.actualizar_objetivo();
            }
            if (Vars::i >= 40)
            {
                prueba40.actualizar_objetivo();
            }
            if (Vars::i >= 19)
            {
                prueba19.actualizar_objetivo();
            }
            if (Vars::i >= 67)
            {
                prueba67.actualizar_objetivo();
            }
            if (Vars::i >= 56)
            {
                prueba56.actualizar_objetivo();
            }
            if (Vars::i >= 64)
            {
                prueba64.actualizar_objetivo();
            }
            if (Vars::i >= 8)
            {
                prueba8.actualizar_objetivo();
            }
            if (Vars::i >= 35)
            {
                prueba35.actualizar_objetivo();
            }
            if (Vars::i >= 92)
            {
                prueba92.actualizar_objetivo();
            }
            if (Vars::i >= 47)
            {
                prueba47.actualizar_objetivo();
            }
            if (Vars::i >= 3)
            {
                prueba3.actualizar_objetivo();
            }
            if (Vars::i >= 17)
            {
                prueba17.actualizar_objetivo();
            }
            if (Vars::i >= 39)
            {
                prueba39.actualizar_objetivo();
            }
            if (Vars::i >= 53)
            {
                prueba53.actualizar_objetivo();
            }
            if (Vars::i >= 23)
            {
                prueba23.actualizar_objetivo();
            }
            if (Vars::i >= 57)
            {
                prueba57.actualizar_objetivo();
            }
            if (Vars::i >= 25)
            {
                prueba25.actualizar_objetivo();
            }
            if (Vars::i >= 6)
            {
                prueba6.actualizar_objetivo();
            }
            if (Vars::i >= 7)
            {
                prueba7.actualizar_objetivo();
            }
            if (Vars::i >= 63)
            {
                prueba63.actualizar_objetivo();
            }
            if (Vars::i >= 49)
            {
                prueba49.actualizar_objetivo();
            }
            if (Vars::i >= 85)
            {
                prueba85.actualizar_objetivo();
            }
            if (Vars::i >= 10)
            {
                prueba10.actualizar_objetivo();
            }
            if (Vars::i >= 86)
            {
                prueba86.actualizar_objetivo();
            }
            if (Vars::i >= 22)
            {
                prueba22.actualizar_objetivo();
            }
            if (Vars::i >= 81)
            {
                prueba81.actualizar_objetivo();
            }
            if (Vars::i >= 21)
            {
                prueba21.actualizar_objetivo();
            }
            if (Vars::i >= 1)
            {
                prueba1.actualizar_objetivo();
            }
            if (Vars::i >= 89)
            {
                prueba89.actualizar_objetivo();
            }
            if (Vars::i >= 58)
            {
                prueba58.actualizar_objetivo();
            }
            if (Vars::i >= 87)
            {
                prueba87.actualizar_objetivo();
            }
            if (Vars::i >= 54)
            {
                prueba54.actualizar_objetivo();
            }
            if (Vars::i >= 84)
            {
                prueba84.actualizar_objetivo();
            }
            if (Vars::i >= 26)
            {
                prueba26.actualizar_objetivo();
            }
            if (Vars::i >= 72)
            {
                prueba72.actualizar_objetivo();
            }
            if (Vars::i >= 79)
            {
                prueba79.actualizar_objetivo();
            }
            if (Vars::i >= 65)
            {
                prueba65.actualizar_objetivo();
            }
            if (Vars::i >= 30)
            {
                prueba30.actualizar_objetivo();
            }
            if (Vars::i >= 28)
            {
                prueba28.actualizar_objetivo();
            }
            if (Vars::i >= 83)
            {
                prueba83.actualizar_objetivo();
            }
            if (Vars::i >= 90)
            {
                prueba90.actualizar_objetivo();
            }
            if (Vars::i >= 5)
            {
                prueba5.actualizar_objetivo();
            }
            if (Vars::i >= 55)
            {
                prueba55.actualizar_objetivo();
            }
            if (Vars::i >= 76)
            {
                prueba76.actualizar_objetivo();
            }
            if (Vars::i >= 12)
            {
                prueba12.actualizar_objetivo();
            }
            if (Vars::i >= 70)
            {
                prueba70.actualizar_objetivo();
            }
            if (Vars::i >= 14)
            {
                prueba14.actualizar_objetivo();
            }
            if (Vars::i >= 18)
            {
                prueba18.actualizar_objetivo();
            }
            if (Vars::i >= 29)
            {
                prueba29.actualizar_objetivo();
            }
            if (Vars::i >= 32)
            {
                prueba32.actualizar_objetivo();
            }
            if (Vars::i >= 36)
            {
                prueba36.actualizar_objetivo();
            }
            if (Vars::i >= 4)
            {
                prueba4.actualizar_objetivo();
            }
            if (Vars::i >= 15)
            {
                prueba15.actualizar_objetivo();
            }
            if (Vars::i >= 82)
            {
                prueba82.actualizar_objetivo();
            }
            
        


        }

        if (Vars::i >= 1)
        {
            prueba1.ir_a_posicion();
        }
        if (Vars::i >= 2)
        {
            prueba2.ir_a_posicion();
        }
        if (Vars::i >= 3)
        {
            prueba3.ir_a_posicion();
        }
        if (Vars::i >= 4)
        {
            prueba4.ir_a_posicion();
        }
        if (Vars::i >= 5)
        {
            prueba5.ir_a_posicion();
        }
        if (Vars::i >= 6)
        {
            prueba6.ir_a_posicion();
        }
        if (Vars::i >= 7)
        {
            prueba7.ir_a_posicion();
        }
        if (Vars::i >= 8)
        {
            prueba8.ir_a_posicion();
        }
        if (Vars::i >= 9)
        {
            prueba9.ir_a_posicion();
        }
        if (Vars::i >= 10)
        {
            prueba10.ir_a_posicion();
        }
        if (Vars::i >= 11)
        {
            prueba11.ir_a_posicion();
        }
        if (Vars::i >= 12)
        {
            prueba12.ir_a_posicion();
        }
        if (Vars::i >= 13)
        {
            prueba13.ir_a_posicion();
        }
        if (Vars::i >= 14)
        {
            prueba14.ir_a_posicion();
        }
        if (Vars::i >= 15)
        {
            prueba15.ir_a_posicion();
        }
        if (Vars::i >= 16)
        {
            prueba16.ir_a_posicion();
        }
        if (Vars::i >= 17)
        {
            prueba17.ir_a_posicion();
        }
        if (Vars::i >= 18)
        {
            prueba18.ir_a_posicion();
        }
        if (Vars::i >= 19)
        {
            prueba19.ir_a_posicion();
        }
        if (Vars::i >= 20)
        {
            prueba20.ir_a_posicion();
        }
        if (Vars::i >= 21)
        {
            prueba21.ir_a_posicion();
        }
        if (Vars::i >= 22)
        {
            prueba22.ir_a_posicion();
        }
        if (Vars::i >= 23)
        {
            prueba23.ir_a_posicion();
        }
        if (Vars::i >= 24)
        {
            prueba24.ir_a_posicion();
        }
        if (Vars::i >= 25)
        {
            prueba25.ir_a_posicion();
        }
        if (Vars::i >= 26)
        {
            prueba26.ir_a_posicion();
        }
        if (Vars::i >= 27)
        {
            prueba27.ir_a_posicion();
        }
        if (Vars::i >= 28)
        {
            prueba28.ir_a_posicion();
        }
        if (Vars::i >= 29)
        {
            prueba29.ir_a_posicion();
        }
        if (Vars::i >= 30)
        {
            prueba30.ir_a_posicion();
        }
        if (Vars::i >= 31)
        {
            prueba31.ir_a_posicion();
        }
        if (Vars::i >= 32)
        {
            prueba32.ir_a_posicion();
        }
        if (Vars::i >= 33)
        {
            prueba33.ir_a_posicion();
        }
        if (Vars::i >= 34)
        {
            prueba34.ir_a_posicion();
        }
        if (Vars::i >= 35)
        {
            prueba35.ir_a_posicion();
        }
        if (Vars::i >= 36)
        {
            prueba36.ir_a_posicion();
        }
        if (Vars::i >= 37)
        {
            prueba37.ir_a_posicion();
        }
        if (Vars::i >= 38)
        {
            prueba38.ir_a_posicion();
        }
        if (Vars::i >= 39)
        {
            prueba39.ir_a_posicion();
        }
        if (Vars::i >= 40)
        {
            prueba40.ir_a_posicion();
        }
        if (Vars::i >= 41)
        {
            prueba41.ir_a_posicion();
        }
        if (Vars::i >= 42)
        {
            prueba42.ir_a_posicion();
        }
        if (Vars::i >= 43)
        {
            prueba43.ir_a_posicion();
        }
        if (Vars::i >= 44)
        {
            prueba44.ir_a_posicion();
        }
        if (Vars::i >= 45)
        {
            prueba45.ir_a_posicion();
        }
        if (Vars::i >= 46)
        {
            prueba46.ir_a_posicion();
        }
        if (Vars::i >= 47)
        {
            prueba47.ir_a_posicion();
        }
        if (Vars::i >= 48)
        {
            prueba48.ir_a_posicion();
        }
        if (Vars::i >= 49)
        {
            prueba49.ir_a_posicion();
        }
        if (Vars::i >= 50)
        {
            prueba50.ir_a_posicion();
        }
        if (Vars::i >= 51)
        {
            prueba51.ir_a_posicion();
        }
        if (Vars::i >= 52)
        {
            prueba52.ir_a_posicion();
        }
        if (Vars::i >= 53)
        {
            prueba53.ir_a_posicion();
        }
        if (Vars::i >= 54)
        {
            prueba54.ir_a_posicion();
        }
        if (Vars::i >= 55)
        {
            prueba55.ir_a_posicion();
        }
        if (Vars::i >= 56)
        {
            prueba56.ir_a_posicion();
        }
        if (Vars::i >= 57)
        {
            prueba57.ir_a_posicion();
        }
        if (Vars::i >= 58)
        {
            prueba58.ir_a_posicion();
        }
        if (Vars::i >= 59)
        {
            prueba59.ir_a_posicion();
        }
        if (Vars::i >= 60)
        {
            prueba60.ir_a_posicion();
        }
        if (Vars::i >= 61)
        {
            prueba61.ir_a_posicion();
        }
        if (Vars::i >= 62)
        {
            prueba62.ir_a_posicion();
        }
        if (Vars::i >= 63)
        {
            prueba63.ir_a_posicion();
        }
        if (Vars::i >= 64)
        {
            prueba64.ir_a_posicion();
        }
        if (Vars::i >= 65)
        {
            prueba65.ir_a_posicion();
        }
        if (Vars::i >= 66)
        {
            prueba66.ir_a_posicion();
        }
        if (Vars::i >= 67)
        {
            prueba67.ir_a_posicion();
        }
        if (Vars::i >= 68)
        {
            prueba68.ir_a_posicion();
        }
        if (Vars::i >= 69)
        {
            prueba69.ir_a_posicion();
        }
        if (Vars::i >= 70)
        {
            prueba70.ir_a_posicion();
        }
        if (Vars::i >= 71)
        {
            prueba71.ir_a_posicion();
        }
        if (Vars::i >= 72)
        {
            prueba72.ir_a_posicion();
        }
        if (Vars::i >= 73)
        {
            prueba73.ir_a_posicion();
        }
        if (Vars::i >= 74)
        {
            prueba74.ir_a_posicion();
        }
        if (Vars::i >= 75)
        {
            prueba75.ir_a_posicion();
        }
        if (Vars::i >= 76)
        {
            prueba76.ir_a_posicion();
        }
        if (Vars::i >= 77)
        {
            prueba77.ir_a_posicion();
        }
        if (Vars::i >= 78)
        {
            prueba78.ir_a_posicion();
        }
        if (Vars::i >= 79)
        {
            prueba79.ir_a_posicion();
        }
        if (Vars::i >= 80)
        {
            prueba80.ir_a_posicion();
        }
        if (Vars::i >= 81)
        {
            prueba81.ir_a_posicion();
        }
        if (Vars::i >= 82)
        {
            prueba82.ir_a_posicion();
        }
        if (Vars::i >= 83)
        {
            prueba83.ir_a_posicion();
        }
        if (Vars::i >= 84)
        {
            prueba84.ir_a_posicion();
        }
        if (Vars::i >= 85)
        {
            prueba85.ir_a_posicion();
        }
        if (Vars::i >= 86)
        {
            prueba86.ir_a_posicion();
        }
        if (Vars::i >= 87)
        {
            prueba87.ir_a_posicion();
        }
        if (Vars::i >= 88)
        {
            prueba88.ir_a_posicion();
        }
        if (Vars::i >= 89)
        {
            prueba89.ir_a_posicion();
        }
        if (Vars::i >= 90)
        {
            prueba90.ir_a_posicion();
        }
        if (Vars::i >= 91)
        {
            prueba91.ir_a_posicion();
        }
        if (Vars::i >= 92)
        {
            prueba92.ir_a_posicion();
        }
        if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
        {
             Vars::h = Vars::soloud.play(Vars::sp,1 ,0 , 0);
        }
        
        
        cerrar_con_escape(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }


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
  //
     std::cout<<"queres musica de fondo? si queres apreta 1 si no apreta 0"<<std::endl;
   std::cin>>configuracion::msc;
   configuracion::conf.seekp(1);
   configuracion::conf.clear();
   if (configuracion::msc == 1)
   {
     configuracion::conf.write(reinterpret_cast<const char*>(&configuracion::uns), sizeof(configuracion::uns));
     configuracion::conf.flush();
     std::cout<<"perfecto entonces tenes musica de fondo"<<std::endl;
   }
   if (configuracion::msc == 0)
   {
    std::cout<<"perfecto entonces no tenes musica de fondo"<<std::endl;
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
   if (configuracion::rdbyt2 == 1)
   {
     configuracion::soloud.deinit();
   }
   
    return 0;
}


