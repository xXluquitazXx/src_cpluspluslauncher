/*
 * Copyright (C) 2026 lucas
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
#include <cstdio>
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
#include "prod.cpp"
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
    char rdbyt3;

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

class electrron
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

void cerrrar_con_escape(GLFWwindow* window)
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
 namespace visualizador
    {
        
     // namespace visualizador
    
    const char *sorf = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "layout (location = 1) in vec3 aColor;\n"
    "layout (location = 2) in vec2 aTexCoord;\n"
    "out vec3 ourColor;\n"
    "out vec2 TexCoord;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos, 1.0);\n"
    "ourColor = aColor;\n"
    "TexCoord = vec2(aTexCoord.x,aTexCoord.y);\n"
    "}\0";
    
    const char *sourv = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "in vec3 ourColor;\n"
    "in vec2 TexCoord;\n"
    "uniform sampler2D texture1;\n"

    "void main()\n"
    "{\n"
    "   FragColor = texture(texture1, TexCoord);\n"
    "}\n\0";
    unsigned int vbo,vao,shadep,verter,fragme,vbo1,vao1;
    float poscicion[24] = {
         0.5f,  0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f, // top right
         0.5f, -0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f, // bottom right
        -0.5f, -0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f, // bottom left
        };
GLFWwindow* window;
unsigned int texture,texura;
int wi,hi,nr,looc;
unsigned char *a;
    float posi[24] = {
         -0.5f, - 0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   0.0f, 0.0f, // top right
         -0.5f, 0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   0.0f, 1.0f, // bottom right
        0.5f, 0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 1.0f, // bottom left
        };
        int loc;
            int width, height, nrChannels;

const char* nome = "ver imagenes";
 std::string rutinga;
 const std::string nada;
    }
    namespace fla
    {
        // Cuadrante superior derecho
float tuberia_arriba[48] = {
    // Triángulo 1
     0.90f,  1.00f, 0.0f, 1,0,0, 0,1,
     1.10f,  1.00f, 0.0f, 0,1,0, 1,1,
     1.10f,  0.30f, 0.0f, 0,0,1, 1,0,

    // Triángulo 2
     0.90f,  1.00f, 0.0f, 1,0,0, 0,1,
     0.90f,  0.30f, 0.0f, 0,1,0, 0,0,
     1.10f,  0.30f, 0.0f, 0,0,1, 1,0
};
float tuberia_abajo[48] = {
    // Triángulo 1
     0.90f, -0.30f, 0.0f, 1,0,0, 0,1,
     1.10f, -0.30f, 0.0f, 0,1,0, 1,1,
     1.10f, -1.00f, 0.0f, 0,0,1, 1,0,

    // Triángulo 2
     0.90f, -0.30f, 0.0f, 1,0,0, 0,1,
     0.90f, -1.00f, 0.0f, 0,1,0, 0,0,
     1.10f, -1.00f, 0.0f, 0,0,1, 1,0
};
float tuberia_arriba_original[48] = {
    // Triángulo 1
     0.90f,  1.00f, 0.0f, 1,0,0, 0,1,
     1.10f,  1.00f, 0.0f, 0,1,0, 1,1,
     1.10f,  0.30f, 0.0f, 0,0,1, 1,0,

    // Triángulo 2
     0.90f,  1.00f, 0.0f, 1,0,0, 0,1,
     0.90f,  0.30f, 0.0f, 0,1,0, 0,0,
     1.10f,  0.30f, 0.0f, 0,0,1, 1,0
};
float tuberia_abajo_original[48] = {
    // Triángulo 1
     0.90f, -0.30f, 0.0f, 1,0,0, 0,1,
     1.10f, -0.30f, 0.0f, 0,1,0, 1,1,
     1.10f, -1.00f, 0.0f, 0,0,1, 1,0,

    // Triángulo 2
     0.90f, -0.30f, 0.0f, 1,0,0, 0,1,
     0.90f, -1.00f, 0.0f, 0,1,0, 0,0,
     1.10f, -1.00f, 0.0f, 0,0,1, 1,0
};
float poop[48] = {
    // Triángulo 1
    -1.0f,-0.8f,0.0f, 1,0,0, 0,1,
     1.0f,-0.8f,0.0f, 0,1,0, 1,1,
     1.0f,-1.0f,0.0f, 0,0,1, 1,0,

    // Triángulo 2
    -1.0f,-0.8f,0.0f, 1,0,0, 0,1,
    -1.0f,-1.0f,0.0f, 0,1,0, 0,0,
     1.0f,-1.0f,0.0f, 0,0,1, 1,0
};

    /* Original brrskibidy (commented out):
    float brrskibidy[48] = {
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.65f,  0.10f, 0.0f, 0,1,0, 1,1,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0,
        
        // Triángulo 2
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.80f, -0.10f, 0.0f, 0,1,0, 0,0,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0
    };
    */
// Mantener la abertura en una zona segura para que el personaje siempre pueda pasar.
float n = -0.16f + (float)rand() / RAND_MAX * 0.32f;
int algo;
float reloj;
int points = 0;
    // Corrected brrskibidy with consistent winding (both triangles CW)
    float brrskibidy[48] = {
        // Triángulo 1
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.65f,  0.10f, 0.0f, 0,1,0, 1,1,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0,
        // Triángulo 2 (reordered to match winding)
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0,
        -0.80f, -0.10f, 0.0f, 0,1,0, 0,0
    };
     float pooop[48] = {    -1.0f,  1.0f, 0.0f,   1,1,1,   0,1,
     1.0f,  1.0f, 0.0f,   1,1,1,   1,1,
     1.0f, -1.0f, 0.0f,   1,1,1,   1,0,

    // Triángulo 2
    -1.0f,  1.0f, 0.0f,   1,1,1,   0,1,
    -1.0f, -1.0f, 0.0f,   1,1,1,   0,0, // 32,33
     1.0f, -1.0f, 0.0f,   1,1,1,   1,0 // 40 41

   };
// Cuadrante inferior derecho
    bloquete skibidy;
    bloquete tuberia_ap;
    bloquete fondaso;
    bool nuerto = false,cocolisionmelon = false,skibidycolision = false;
    bloquete tuberia_dawn;
    personaje toilet;
    GLFWwindow* window;
float velocidad = 0.0006;
    const char* rutardopolis = "flapy bodrio";
    } // namespace fla
    namespace skibidygame
{

        personaje playerer;
        bloquete test;
        GLFWwindow* window;
        float piso[48] = {    -1.0f,-0.8f,0.0f, 1,0,0, 0,1,
         1.0f,-0.8f,0.0f, 0,1,0, 1,1,
         1.0f,-1.0f,0.0f, 0,0,1, 1,0,
    
        // TriÃ¡ngulo 2
        -1.0f,-0.8f,0.0f, 1,0,0, 0,1,
        -1.0f,-1.0f,0.0f, 0,1,0, 0,0,
         1.0f,-1.0f,0.0f, 0,0,1, 1,0};
        const char* test_tex = "foto_perfil.png";
        float pos_playerer[48] = {
        // TriÃ¡ngulo 1 (arriba-derecha)
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.65f,  0.10f, 0.0f, 0,1,0, 1,1,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0,
        
        // TriÃ¡ngulo 2 (abajo-izquierda)
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.80f, -0.10f, 0.0f, 0,1,0, 0,0,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0
        };
            float pos_playerer_original[48] = {
        // TriÃ¡ngulo 1 (arriba-derecha)
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.65f,  0.10f, 0.0f, 0,1,0, 1,1,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0,
        
        // TriÃ¡ngulo 2 (abajo-izquierda)
        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
        -0.80f, -0.10f, 0.0f, 0,1,0, 0,0,
        -0.65f, -0.10f, 0.0f, 0,0,1, 1,0
        };
            float pos_cajarng[48] = {
              1.0f,  -0.55f, 0.0f,   1.0f, 0.0f, 0.0f,  0.0f, 1.0f, // top right
              1.4f,  -0.55f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f, // bottom right
              1.4f,   -0.8f, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 0.0f, // bottom left
            
              1.0f, -0.55f, 0.0f,   1.0f, 0.0f, 0.0f,   0.0f, 1.0f, // top right
              1.0f, -0.8, 0.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f, // bottom right
              1.4f, -0.8, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 0.0f};
            float pos_cajarng_original[48] = {
              1.0f,  -0.55f, 0.0f,   1.0f, 0.0f, 0.0f,  0.0f, 1.0f, // top right
              1.4f,  -0.55f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f, // bottom right
              1.4f,   -0.8f, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 0.0f, // bottom left
            
              1.0f, -0.55f, 0.0f,   1.0f, 0.0f, 0.0f,   0.0f, 1.0f, // top right
              1.0f, -0.8, 0.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f, // bottom right
              1.4f, -0.8, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 0.0f};
        float pos_test_block[48] = {    // TriÃ¡ngulo 1 (arriba-derecha)
         0.50f,  0.10f, 0.0f, 1,0,0, 0,1,
         0.80f,  0.10f, 0.0f, 0,1,0, 1,1,
         0.80f, -0.20f, 0.0f, 0,0,1, 1,0,
        
        // TriÃ¡ngulo 2 (abajo-izquierda)
         0.50f, 0.10f, 0.0f, 1,0,0, 0,1,
         0.50f, -0.20f, 0.0f, 0,1,0, 0,0,
         0.80f, -0.20f, 0.0f, 0,0,1, 1,0
    };float pos_caja[48] = {
        // TriÃ¡ngulo 1
         0.85f, -0.650f, 0.0f, 1,0,0, 0,1,
         1.15f, -0.650f, 0.0f, 0,1,0, 1,1,
         1.15f, -0.80f, 0.0f, 0,0,1, 1,0,
    
        // TriÃ¡ngulo 2
         0.85f, -0.650f, 0.0f, 1,0,0, 0,1,
         0.85f, -0.80f, 0.0f, 0,1,0, 0,0,
         1.15f, -0.80f, 0.0f, 0,0,1, 1,0
    };
    float pos_caja_original[48] = {
        // TriÃ¡ngulo 1
         0.85f, -0.650f, 0.0f, 1,0,0, 0,1,
         1.15f, -0.650f, 0.0f, 0,1,0, 1,1,
         1.15f, -0.80f, 0.0f, 0,0,1, 1,0,
    
        // TriÃ¡ngulo 2
         0.85f, -0.650f, 0.0f, 1,0,0, 0,1,
         0.85f, -0.80f, 0.0f, 0,1,0, 0,0,
         1.15f, -0.80f, 0.0f, 0,0,1, 1,0
    };
    float pos_casa[48] = {
        // TriÃ¡ngulo 1
         1.40f, -0.35f, 0.0f, 1,0,0, 0,1,
         2.05f, -0.35f, 0.0f, 0,1,0, 1,1,
         2.05f, -0.80f, 0.0f, 0,0,1, 1,0,
    
        // TriÃ¡ngulo 2
         1.40f, -0.35f, 0.0f, 1,0,0, 0,1,
         1.40f, -0.80f, 0.0f, 0,1,0, 0,0,
         2.05f, -0.80f, 0.0f, 0,0,1, 1,0
    };
    float pos_casa_original[48] = {
        // TriÃ¡ngulo 1
         1.40f, -0.35f, 0.0f, 1,0,0, 0,1,
         2.05f, -0.35f, 0.0f, 0,1,0, 1,1,
         2.05f, -0.80f, 0.0f, 0,0,1, 1,0,
    
        // TriÃ¡ngulo 2
         1.40f, -0.35f, 0.0f, 1,0,0, 0,1,
         1.40f, -0.80f, 0.0f, 0,1,0, 0,0,
         2.05f, -0.80f, 0.0f, 0,0,1, 1,0
    };
    float pos_cajarng1[48] = {
    // TriÃ¡ngulo 1
         1.0f, -0.50f, 0.0f,  1,0,0,  0,1,
         1.30f, -0.50f, 0.0f,  0,1,0,  1,1,
         1.30f, -0.80f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
        1.0f, -0.50f, 0.0f,  1,0,0,  0,1,
        1.0f, -0.80f, 0.0f,  0,1,0,  0,0,
         1.30f, -0.80f, 0.0f,  0,0,1,  1,0
    };
    float pos_cajarng1_original[48] = {
    // TriÃ¡ngulo 1
         1.0f, -0.50f, 0.0f,  1,0,0,  0,1,
         1.30f, -0.50f, 0.0f,  0,1,0,  1,1,
         1.30f, -0.80f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
        1.0f, -0.50f, 0.0f,  1,0,0,  0,1,
        1.0f, -0.80f, 0.0f,  0,1,0,  0,0,
         1.30f, -0.80f, 0.0f,  0,0,1,  1,0
    };float pos_cajarng2[48] = {
        // TriÃ¡ngulo 1
         1.50f, -0.15f, 0.0f,  1,0,0,  0,1,
         1.80f, -0.15f, 0.0f,  0,1,0,  1,1,
         1.80f, -0.45f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
         1.50f, -0.15f, 0.0f,  1,0,0,  0,1,
         1.50f, -0.45f, 0.0f,  0,1,0,  0,0,
         1.80f, -0.45f, 0.0f,  0,0,1,  1,0
    };
    float pos_cajarng2_original[48] = {
        // TriÃ¡ngulo 1
         1.50f, -0.15f, 0.0f,  1,0,0,  0,1,
         1.80f, -0.15f, 0.0f,  0,1,0,  1,1,
         1.80f, -0.45f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
         1.50f, -0.15f, 0.0f,  1,0,0,  0,1,
         1.50f, -0.45f, 0.0f,  0,1,0,  0,0,
         1.80f, -0.45f, 0.0f,  0,0,1,  1,0
    };float pos_cajarng3[48] = {
        // TriÃ¡ngulo 1
         1.90f, 0.20f, 0.0f,  1,0,0,  0,1,
         2.20f, 0.20f, 0.0f,  0,1,0,  1,1,
         2.20f, -0.80f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
         1.90f,  0.20f, 0.0f,  1,0,0,  0,1,
         1.90f, -0.80f, 0.0f,  0,1,0,  0,0,
         2.20f, -0.80f, 0.0f,  0,0,1,  1,0
    };
    float pos_cajarng3_original[48] = {
        // TriÃ¡ngulo 1
         1.90f, 0.20f, 0.0f,  1,0,0,  0,1,
         2.20f, 0.20f, 0.0f,  0,1,0,  1,1,
         2.20f, -0.80f, 0.0f,  0,0,1,  1,0,
    
        // TriÃ¡ngulo 2
         1.90f,  0.20f, 0.0f,  1,0,0,  0,1,
         1.90f, -0.80f, 0.0f,  0,1,0,  0,0,
         2.20f, -0.80f, 0.0f,  0,0,1,  1,0
    };
    float pos_fondo[48] = {-1.0,1.0,0.0,1,0,0,0,1,
    1.0,1.0,0.0,0,1,0,1,1,
    1.0,-1.0,0.0,0,0,1,1,0,
    
    -1.0,1.0,0.0,1,0,0,0,1,
    -1.0,-1.0,0.0,0,1,0,0,0,
    1.0,-1.0,0.0,0,0,1,1,0};
    bloquete obj_piso;
    bloquete caja;////////////////////////////fondo jugando pantalla azul win_err. fondo menu es letras en verde tipo haker cayendo. obstaculos ventanas de error. piso 
    bloquete casa;
    bloquete caja_rng2;bool tecla_s;
    float rng = rand() % 3 + 1;
                        float n = -0.70f + (float)rand() / RAND_MAX * (-0.30f - (-0.70f));// numero aleatorio con coma
                        float n3,n1 = -0.65f + (float)rand() / RAND_MAX * (-0.35f - (-0.65f));// numero aleatorio con coma
    bloquete rng3[3];bool prevabajo = false;
    int que_goob_usar = rand() % 3 + 1,cc = 0,pattern = rand() % 5,pp = 0,u = 0; 
    bloquete fondo;bool lo_otro;
                        int prevrng;
    bool colisiones[24] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
    double mouseX,mouseY; bool press = false,menu = true,prevp = false;
    float altura_salto,start_time,end_time,rr = 0.0f;
    float x_mouse = 0.0;
    float graveda = 0.01,velocidad = 0.02,salto = 0.04;
    float y_mouse = 0.0, obj_velocidad = 0.004,n2 = 0,ultimoFrame = 0.0f,deltaTime = 0.0;
    bool abajo = false, arriba = false, derecha = false, izquierda = false, clik = false, w = false, prevW = false, aplastando = false;
        bool alreadystart = false, seguir_subiendo = false;
        bool boton_menu = false;
        bool preva,prevd,tecla_a,tecla_d,adentro_de_caja,saltando;
        audio_manage audio;
            const double target_frame_time = 1.0 / 240.0;
        float cooldown = 0.4f, r = 0.0f;int c = 0;

} // namespace skibidygame
void cpppp(GLFWwindow *window,glm::vec3 &camera_pos,glm::vec3 &camera_front,glm::vec3 &camera_up,camera &cam,int &menu,bloquete *bloq,int cantidad_bloques)
{
    cam.main_loop_lol(window,camera_pos,camera_front,camera_up);

 for (int i = 0; i < cantidad_bloques; ++i)
{
    bloq[i].main_3d(camera_pos, camera_front, camera_up, bloq[i]);
    bloq[i].drwa();
    if (bloq[i].contiene_punto(cam.posicion))
    {
        menu = i + 1;
    }
}
}
int main(void) {
   std::cout<<"loading: this can take a while"<<std::endl;
    int menu_principal = 67;
    int menu_encriptar = 0;
    int menu_opengl = 0;
    const long double dos = 2.0l;
    const long double trentidos = 32.0l;
    const long double cientodiez = 110.0l;
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
    int cantidad_bloques = 10;

    glm::vec3 cameraPos   = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
glm::vec3 cameraUp    = glm::vec3(0.0f, 1.0f, 0.0f);

bool firstMouse = true;
float yaw   = -90.0f;	// yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
float pitch =  0.0f;
float lastX =  1360.0f / 2.0;
float lastY =  768.0 / 2.0;
float fov   =  45.0f;

// timing
float deltaTime = 0.0f;	// time between current frame and last frame
float lastFrame = 0.0f;

     float cubo_pos[288] = {
    // Cara frontal
    -0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,0.0f,
     0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,1.0f,
    -0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,1.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,1.0f,

    // Cara derecha
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,0.0f,
     0.5f,-0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,0.0f,
     0.5f, 0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,1.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,0.0f,
     0.5f, 0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,1.0f,
     0.5f, 0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,1.0f,

    // Cara trasera
     0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,0.0f,
    -0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,0.0f,
    -0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,1.0f,
     0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,0.0f,
    -0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,1.0f,
     0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,1.0f,

    // Cara izquierda
    -0.5f,-0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,0.0f,
    -0.5f,-0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,0.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,1.0f,
    -0.5f,-0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,0.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,1.0f,
    -0.5f, 0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,1.0f,

    // Cara superior
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 0.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 1.0f,0.0f,
     0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 1.0f,1.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 0.0f,0.0f,
     0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 1.0f,1.0f,
    -0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 0.0f,1.0f,

    // Cara inferior
    -0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 0.0f,0.0f,
     0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 1.0f,0.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 1.0f,1.0f,
    -0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 0.0f,0.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 1.0f,1.0f,
    -0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 0.0f,1.0f
};float piso_pos[288] = {
    // Cara superior
    -5.0f, -1.0f, -5.0f, 0.3f, 0.8f, 0.3f, 0.0f, 0.0f,
     5.0f, -1.0f, -5.0f, 0.3f, 0.8f, 0.3f, 1.0f, 0.0f,
     5.0f, -1.0f,  5.0f, 0.3f, 0.8f, 0.3f, 1.0f, 1.0f,

    -5.0f, -1.0f, -5.0f, 0.3f, 0.8f, 0.3f, 0.0f, 0.0f,
     5.0f, -1.0f,  5.0f, 0.3f, 0.8f, 0.3f, 1.0f, 1.0f,
    -5.0f, -1.0f,  5.0f, 0.3f, 0.8f, 0.3f, 0.0f, 1.0f,

    // Cara inferior
    -5.0f, -1.2f,  5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.2f,  5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 0.0f,
     5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 1.0f,

    -5.0f, -1.2f,  5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 1.0f,
    -5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 1.0f,

    // Frente
    -5.0f, -1.2f,  5.0f, 0.2f, 0.6f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.2f,  5.0f, 0.2f, 0.6f, 0.2f, 1.0f, 0.0f,
     5.0f, -1.0f,  5.0f, 0.2f, 0.6f, 0.2f, 1.0f, 1.0f,

    -5.0f, -1.2f,  5.0f, 0.2f, 0.6f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.0f,  5.0f, 0.2f, 0.6f, 0.2f, 1.0f, 1.0f,
    -5.0f, -1.0f,  5.0f, 0.2f, 0.6f, 0.2f, 0.0f, 1.0f,

    // Atrás
     5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 0.0f,
    -5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 0.0f,
    -5.0f, -1.0f, -5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 1.0f,

     5.0f, -1.2f, -5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 0.0f,
    -5.0f, -1.0f, -5.0f, 0.2f, 0.5f, 0.2f, 1.0f, 1.0f,
     5.0f, -1.0f, -5.0f, 0.2f, 0.5f, 0.2f, 0.0f, 1.0f,

    // Izquierda
    -5.0f, -1.2f, -5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 0.0f,
    -5.0f, -1.2f,  5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 0.0f,
    -5.0f, -1.0f,  5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 1.0f,

    -5.0f, -1.2f, -5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 0.0f,
    -5.0f, -1.0f,  5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 1.0f,
    -5.0f, -1.0f, -5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 1.0f,

    // Derecha
     5.0f, -1.2f,  5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.2f, -5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 0.0f,
     5.0f, -1.0f, -5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 1.0f,

     5.0f, -1.2f,  5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 0.0f,
     5.0f, -1.0f, -5.0f, 0.2f, 0.4f, 0.2f, 1.0f, 1.0f,
     5.0f, -1.0f,  5.0f, 0.2f, 0.4f, 0.2f, 0.0f, 1.0f
};float tiempo_anterior = static_cast<float>(glfwGetTime());    float Yaw;
    float Pitch;
    // camera options
    float MovementSpeed;
    float MouseSensitivity;
    float Zoom;
glm::vec3 camera_pos,camera_front,camera_up;    srand(time(0));
    bool camara_reiniciada = false;
    int seccion_anterior = menu_principal;
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
    // el puto record del puto flapy
        configuracion::conf.seekg(configuracion::readed, configuracion::conf.beg);
    configuracion::conf.read(&configuracion::rdbyt3, 1);
    configuracion::readed++;
  
      
    
    //
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
    bloquete piso;GLFWwindow *window;camera cam;
iniciar_glfw_y_glew(window,1360,768,3,"c++launcher");
if (!window)
{
    return 1;
}
bloquete bloq[10];
float posiciones_bloq[10][288] = {};
const float pi = 3.14159265359f;
const float radio_bloques = 3.0f;
piso.config_3D(false,"floor.png",piso_pos,288);
for (int i = 0; i < 10; ++i)
{
    const float angulo = (2.0f * pi * i) / 10;
    const float desplazamiento_x = std::cos(angulo) * radio_bloques;
    const float desplazamiento_z = std::sin(angulo) * radio_bloques;

    for (int j = 0; j < 288; j += 8)
    {
        posiciones_bloq[i][j] = cubo_pos[j] + desplazamiento_x;
        posiciones_bloq[i][j + 1] = cubo_pos[j + 1];
        posiciones_bloq[i][j + 2] = cubo_pos[j + 2] + desplazamiento_z;
        posiciones_bloq[i][j + 3] = cubo_pos[j + 3];
        posiciones_bloq[i][j + 4] = cubo_pos[j + 4];
        posiciones_bloq[i][j + 5] = cubo_pos[j + 5];
        posiciones_bloq[i][j + 6] = cubo_pos[j + 6];
        posiciones_bloq[i][j + 7] = cubo_pos[j + 7];
    }

}
const char* texturas_bloques[8] = {
    "c++launcher_encrip.png",
    "c++launcher_opengl.png",
    "c++launcher_juegos.png",
    "c++launcher_herramientas.png",
    "c++launcher_licensia.png",
    "c++launcher_config.png",
    "c++launcher_exit.png",
    "c++launcher_salir.png"
};
for (int i = 0; i < 8; ++i)
{
    bloq[i].config_3D(false, texturas_bloques[i], posiciones_bloq[i], 288);
}








while (true) {
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 if (menu_principal != seccion_anterior)
 {
     if (menu_principal != 67)
     {
         cam.reiniciar_posicion();
         camera_pos = cam.posicion;
         camera_front = cam.cameraFront;
         camera_up = cam.cameraUp;
         if (menu_principal == 1)
         {
             const char* texturas_encriptar[6] = {
                 "c++launcher_encripcion_ascii.png",
                 "c++launcher_desenc_ascii.png",
                 "c++launcher_encripcion_archivos.png",
                 "c++launcher_desenc_archivo_cpu.png",
                 "c++launcher_encripcion_archivos_gpu.png",
                 "c++launcher_desenc_archivo.png"
             };
             for (int i = 0; i < 6; ++i)
             {
                 bloq[i].cambiar_textura(texturas_encriptar[i]);
             }
         }
         else if (menu_principal == 2)
         {
             const char* texturas_opengl[8] = {
                 "c++launcher_opengl_triangulo.png",
                 "c++launcher_opengl_triangulorebotin.png",
                 "c++launcher_opengl_ezquivar.png",
                 "c++launcher_opengl_ezquivar_2.png",
                 "c++launcher_opengl_thompson.png",
                 "c++launcher_opengl_flapy.png",
                 "c++launcher_opengl_sick_goob.png",
                 "c++launcher_opengl_cubo3d.png"
             };
             for (int i = 0; i < 8; ++i)
             {
                 bloq[i].cambiar_textura(texturas_opengl[i]);
             }
         }
         else if (menu_principal == 4)
         {
             const char* texturas_herramientas[5] = {
                 "c++launcher_herramientas_web.png",
                 "c++launcher_herramientas_clvgen.png",
                 "c++launcher_herramientas_musica.png",
                 "c++launcher_herramientas_syp_arch.png",
                 "c++launcher_herramientas_fotos.png"
             };
             for (int i = 0; i < 5; ++i)
             {
                 bloq[i].cambiar_textura(texturas_herramientas[i]);
             }
         }


                                    

                           










         
     }
     camara_reiniciada = true;
     seccion_anterior = menu_principal;
 }
 if (menu_principal == 67)
 {
     camara_reiniciada = false;
 }
 if ( menu_principal == 67){
cam.main_loop_lol(window,camera_pos,camera_front,camera_up);
cpppp(window,camera_pos,camera_front,camera_up,cam,menu_principal,bloq,7);
piso.main_3d(camera_pos, camera_front, camera_up, piso);
piso.drwa();}


        if (menu_principal == 1) {
            if (!camara_reiniciada)
            {
                cam.reiniciar_posicion();
                camera_pos = cam.posicion;
                camera_front = cam.cameraFront;
                camera_up = cam.cameraUp;
                camara_reiniciada = true;
            }

            menu_encriptar = 0;piso.main_3d(camera_pos, camera_front, camera_up, piso);
piso.drwa();
            cpppp(window,camera_pos,camera_front,camera_up,cam,menu_encriptar,bloq,6);
            std::cout<<"1-encriptar"<<std::endl;
            std::cout<<"2-desencriptar"<<std::endl;
            std::cout<<"3-encriptar archivos(cpu_backend)"<<std::endl;
            std::cout<<"4-desencriptar archivos(cpu_bakend)"<<std::endl;
            std::cout<<"5-encriptar archivos(gpu_backend)"<<std::endl;
            std::cout<<"6-desencriptar archivos(gpu_bakend)"<<std::endl;
         //   std::cin >> menu_encriptar;

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

            if (menu_encriptar != 0 && (menu_encriptar < 1 || menu_encriptar > 6)) {
                std::cout<<"opcion invalida"<<std::endl;
                std::cout<<"apreta cualquier letra para continuar"<<std::endl;
                std::cin>>c1;
            }

            if (menu_encriptar >= 1 && menu_encriptar <= 6)
            {
                menu_principal = 67;
            }
        }
    




 if (menu_principal == 2)
  {
            if (!camara_reiniciada)
            {
                cam.reiniciar_posicion();
                camera_pos = cam.posicion;
                camera_front = cam.cameraFront;
                camera_up = cam.cameraUp;
                camara_reiniciada = true;
            }
piso.main_3d(camera_pos, camera_front, camera_up, piso);
piso.drwa();
            menu_opengl = 0;
            cpppp(window,camera_pos,camera_front,camera_up,cam,menu_opengl,bloq,8);  std::cout <<"1-triangulo"<<std::endl;
  std::cout <<"2-triangulo que rebota"<<std::endl;
  std::cout <<"3-juego de ezquivar"<<std::endl;
  std::cout <<"4-juego de ezquivar 2.0"<<std::endl;
  std::cout <<"5-atomos segun thompson"<<std::endl;
  std::cout<<"6-flappy bodrio con una sola textura(sus.png en los archivos)"<<std::endl;
  std::cout<<"7-sick goob"<<std::endl;
  std::cout<<"8-cubo 3D con la textura que quieras"<<std::endl;





  
 if (menu_opengl == 1)
  {

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

    srand(time(0));
     /* Create a windowed mode window and its OpenGL context */

     mov::estela[1] = 1;
     mov::estela[3] = 1;
     mov::estela[5] = 1;
    /* Make the window's context current */
  
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
      

    while(true){

    
    std::cout<<"cuantos electrones queres?(habia 92 elementos en la epoca a si que ese es el maximo)"<<std::endl;
    std::cin>>Vars::i;
    if (Vars::i >= 1 and Vars::i <= 92)
    {
        break;
    }
    }
    electrron prueba1;
    electrron prueba2;
    electrron prueba3;
    electrron prueba4;
    electrron prueba5;
    electrron prueba6;
    electrron prueba7;
    electrron prueba8;
    electrron prueba9;
    electrron prueba10;
    electrron prueba11;
    electrron prueba12;
    electrron prueba13;
    electrron prueba14;
    electrron prueba15;
    electrron prueba16;
    electrron prueba17;
    electrron prueba18;
    electrron prueba19;
    electrron prueba20;
    electrron prueba21;
    electrron prueba22;
    electrron prueba23;
    electrron prueba24;
    electrron prueba25;
    electrron prueba26;
    electrron prueba27;
    electrron prueba28;
    electrron prueba29;
    electrron prueba30;
    electrron prueba31;
    electrron prueba32;
    electrron prueba33;
    electrron prueba34;
    electrron prueba35;
    electrron prueba36;
    electrron prueba37;
    electrron prueba38;
    electrron prueba39;
    electrron prueba40;
    electrron prueba41;
    electrron prueba42;
    electrron prueba43;
    electrron prueba44;
    electrron prueba45;
    electrron prueba46;
    electrron prueba47;
    electrron prueba48;
    electrron prueba49;
    electrron prueba50;
    electrron prueba51;
    electrron prueba52;
    electrron prueba53;
    electrron prueba54;
    electrron prueba55;
    electrron prueba56;
    electrron prueba57;
    electrron prueba58;
    electrron prueba59;
    electrron prueba60;
    electrron prueba61;
    electrron prueba62;
    electrron prueba63;
    electrron prueba64;
    electrron prueba65;
    electrron prueba66;
    electrron prueba67;
    electrron prueba68;
    electrron prueba69;
    electrron prueba70;
    electrron prueba71;
    electrron prueba72;
    electrron prueba73;
    electrron prueba74;
    electrron prueba75;
    electrron prueba76;
    electrron prueba77;
    electrron prueba78;
    electrron prueba79;
    electrron prueba80;
    electrron prueba81;
    electrron prueba82;
    electrron prueba83;
    electrron prueba84;
    electrron prueba85;
    electrron prueba86;
    electrron prueba87;
    electrron prueba88;
    electrron prueba89;
    electrron prueba90;
    electrron prueba91;
    electrron prueba92;
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
 

if (menu_opengl == 6)
{    fla::fondaso.config(false,"sus.png",fla::pooop);
    fla::tuberia_ap.config(true,"sus.png",fla::tuberia_arriba);
    fla::tuberia_dawn.config(true,"sus.png",fla::tuberia_abajo);
    fla::skibidy.config(false,"sus.png",fla::poop);
    fla::toilet.config("sus.png",fla::brrskibidy);
reproducir_audio("musica_arabe.wav");
while (!glfwWindowShouldClose(fla::window))
 {
    glClear(GL_COLOR_BUFFER_BIT);
    fla::fondaso.drwa();
 fla::skibidy.drwa();
   temporisador(13.0f,fla::reloj,fla::algo);
   if (fla::algo > 0)
   {
    reproducir_audio("musica_arabe.wav");fla::algo = 0;
   }
   
     fla::toilet.drwp();
    fla::tuberia_ap.drwa();
    fla::tuberia_dawn.drwa();
 fla::tuberia_ap.actualizar_array(fla::tuberia_arriba,false);
 fla::tuberia_dawn.actualizar_array(fla::tuberia_abajo,false);
    // Debug: comprobar errores GL después de dibujar fla::tuberias
        fla::toilet.mover_w(fla::window,fla::velocidad,0.8);
fla::toilet.loop_flapy_version(true,0.0002,-0.8,0.0,fla::nuerto,fla::brrskibidy);
 if (fla::tuberia_arriba[0] <= -1.0)
 {reproducir_audio("tirin.wav");
fla::n = -0.32f + (float)rand() / RAND_MAX * 0.64f;
fla::tuberia_abajo[0] = fla::tuberia_abajo_original[0];fla::tuberia_abajo[1] = fla::tuberia_abajo_original[1];fla::tuberia_abajo[8] = fla::tuberia_abajo_original[8];fla::tuberia_abajo[9] = fla::tuberia_abajo_original[9];fla::tuberia_abajo[16] = fla::tuberia_abajo_original[16];fla::tuberia_abajo[17] = fla::tuberia_abajo_original[17];   fla::tuberia_abajo[24] = fla::tuberia_abajo_original[24];fla::tuberia_abajo[25] = fla::tuberia_abajo_original[25];fla::tuberia_abajo[32] = fla::tuberia_abajo_original[32];fla::tuberia_abajo[33] = fla::tuberia_abajo_original[33];fla::tuberia_abajo[40] = fla::tuberia_abajo_original[40];fla::tuberia_abajo[41] = fla::tuberia_abajo_original[41];

fla::tuberia_arriba[0] = fla::tuberia_arriba_original[0];fla::tuberia_arriba[1] = fla::tuberia_arriba_original[1];fla::tuberia_arriba[8] = fla::tuberia_arriba_original[8];fla::tuberia_arriba[9] = fla::tuberia_arriba_original[9];fla::tuberia_arriba[16] = fla::tuberia_arriba_original[16];fla::tuberia_arriba[17] = fla::tuberia_arriba_original[17];fla::tuberia_arriba[24] = fla::tuberia_arriba_original[24];fla::tuberia_arriba[25] = fla::tuberia_arriba_original[25];fla::tuberia_arriba[32] = fla::tuberia_arriba_original[32];fla::tuberia_arriba[33] = fla::tuberia_arriba_original[33];fla::tuberia_arriba[40] = fla::tuberia_arriba_original[40];fla::tuberia_arriba[41] = fla::tuberia_arriba_original[41];


fla::tuberia_abajo[1] += fla::n;fla::tuberia_abajo[9] += fla::n;fla::tuberia_abajo[25] += fla::n;

fla::tuberia_arriba[17] += fla::n;fla::tuberia_arriba[33] += fla::n;fla::tuberia_arriba[41] += fla::n;

fla::tuberia_ap.actualizar_array(fla::tuberia_arriba,true);
fla::tuberia_dawn.actualizar_array(fla::tuberia_abajo,true);
fla::points++;
if (fla::points > configuracion::mscfnd)
{
configuracion::mscfnd = fla::points;
printf("nuevo record \n");   configuracion::conf.seekp(2);
   configuracion::conf.clear();
    configuracion::conf.write(reinterpret_cast<const char*>(&configuracion::mscfnd), sizeof(configuracion::mscfnd));
    configuracion::conf.flush();
}

 }
else
{ 
    fla::tuberia_ap.movete(false,-1.0,0.0,0.00004,fla::tuberia_arriba);
        fla::tuberia_dawn.movete(false,-1.0,0.0,0.00004,fla::tuberia_abajo);

}
 
 fla::tuberia_ap.colision(fla::brrskibidy,fla::cocolisionmelon,0.02,true);
  fla::tuberia_dawn.colision(fla::brrskibidy,fla::skibidycolision,0.02,false);
    if (fla::nuerto or fla::cocolisionmelon or fla::skibidycolision) {reproducir_audio("muerte.wav");glfwSetWindowShouldClose(fla::window,true);break;}
 cerrar_con_escape(fla::window);
    framebuffer_size_callback(fla::window,1360,768);
    glfwSwapBuffers(fla::window);
    glfwPollEvents();
 }
}

  if (menu_opengl == 7)
  {skibidygame::rng = rand() % 3 + 1;
    skibidygame::n = -0.70f + (float)rand() / RAND_MAX * (-0.30f - (-0.70f));
    skibidygame::n1 = -0.65f + (float)rand() / RAND_MAX * (-0.35f - (-0.65f));
    skibidygame::n3 = 0.0f;
    skibidygame::pattern = rand() % 5;
    skibidygame::que_goob_usar = rand() % 3 + 1;
skibidygame::fondo.config(true,"fondo.png",skibidygame::pos_fondo);
if (skibidygame::que_goob_usar == 1){skibidygame::playerer.config("goob2.png",skibidygame::pos_playerer);}
if (skibidygame::que_goob_usar == 2){skibidygame::playerer.config("goob3.png",skibidygame::pos_playerer);}
if (skibidygame::que_goob_usar == 3){skibidygame::playerer.config("goob4.png",skibidygame::pos_playerer);}



    skibidygame::test.config(false,"play_butt.png",skibidygame::pos_test_block);
    skibidygame::obj_piso.config(false,"floor.png",skibidygame::piso);
    skibidygame::caja.config(true,"basura1.png",skibidygame::pos_caja);
    skibidygame::casa.config(true,"tacho2.png",skibidygame::pos_casa);
    skibidygame::caja_rng2.config(true,"autito1.png",skibidygame::pos_cajarng);
    skibidygame::rng3[0].config(true,"caja.png",skibidygame::pos_cajarng1);
    skibidygame::rng3[1].config(true,"dron.png",skibidygame::pos_cajarng2);
    skibidygame::rng3[2].config(true,"casita.png",skibidygame::pos_cajarng3);
    while (!glfwWindowShouldClose(skibidygame::window))
    {//////////////////hacerlo 2 jugadores o mas /implementar tipo block dash
            const auto frame_start = std::chrono::steady_clock::now();
float frameActual = static_cast<float>(glfwGetTime());
    skibidygame::deltaTime = frameActual - skibidygame::ultimoFrame;
    skibidygame::ultimoFrame = frameActual;
glClear(GL_COLOR_BUFFER_BIT);
skibidygame::prevp = skibidygame::boton_menu;

 skibidygame::boton_menu = false;

skibidygame::test.modo_boton(skibidygame::window,GLFW_MOUSE_BUTTON_LEFT,skibidygame::boton_menu);
bool click_recien_pulsado = skibidygame::boton_menu && !skibidygame::prevp;

if (!skibidygame::press and !skibidygame::alreadystart and skibidygame::menu and click_recien_pulsado){
    skibidygame::press = true;
    skibidygame::alreadystart = true;
    skibidygame::menu = false;
    skibidygame::fondo.cambiar_textura("fondo_p.png");
    parar_audio();
    reproducir_audio("mus.mp3");
}
if (!skibidygame::press and !skibidygame::alreadystart and skibidygame::menu){
    skibidygame::fondo.drwa();
skibidygame::test.drwa();
//////////////skibidygame::audio
if (skibidygame::pattern == 0)
{
skibidygame::audio.audio_pattern("pattern_1.wav",skibidygame::pattern,5,20);
}
if (skibidygame::pattern == 1)
{
skibidygame::audio.audio_pattern("pattern_2.wav",skibidygame::pattern,5,20);
}
if (skibidygame::pattern == 2)
{
skibidygame::audio.audio_pattern("pattern_3.wav",skibidygame::pattern,5,20);
}
if (skibidygame::pattern == 3)
{
skibidygame::audio.audio_pattern("pattern_4.wav",skibidygame::pattern,5,20);
}
if (skibidygame::pattern == 4)
{
skibidygame::audio.audio_pattern("pattern_5.wav",skibidygame::pattern,5,20);
}
}
else if (skibidygame::alreadystart and !skibidygame::menu)
{
        skibidygame::fondo.drwa();

    if (skibidygame::start_time - skibidygame::end_time > 0.016666)
    {
skibidygame::menu = true;skibidygame::alreadystart = false;    }
    skibidygame::start_time = glfwGetTime();
    
    skibidygame::prevrng = skibidygame::rng;
        skibidygame::colisiones[0] = false;        
                skibidygame::colisiones[1] = false;
                        skibidygame::colisiones[2] = false;
                                skibidygame::colisiones[3] = false;
                                        skibidygame::colisiones[4] = false;
                                                skibidygame::colisiones[5] = false;
                                                        skibidygame::colisiones[6] = false;
                                                                skibidygame::colisiones[7] = false;
                                                                        skibidygame::colisiones[8] = false;
                                                                                skibidygame::colisiones[9] = false;        
                                                                                         skibidygame::colisiones[10] = false;
                                                                                                 skibidygame::colisiones[11] = false;
                                                                                                         skibidygame::colisiones[12] = false;
                                                                                                                 skibidygame::colisiones[13] = false;      
                                                                                                                         skibidygame::colisiones[14] = false;
                                                                                                                             skibidygame::colisiones[15] = false;
                                                                                                                                     skibidygame::colisiones[16] = false;
                                                                                                                                             skibidygame::colisiones[17] = false;
                                                                                                                                                     skibidygame::colisiones[18] = false;
                                                                                                                                                             skibidygame::colisiones[19] = false;
                                                                                                                                                                     skibidygame::colisiones[20] = false;
                                                                                                                                                                             skibidygame::colisiones[21] = false;
                                                                                                                                                                                     skibidygame::colisiones[22] = false;        
                                                                                                                                                                                              skibidygame::colisiones[23] = false;
                                                                                                                

                                                        








                if (skibidygame::rng == 1)
                {
                   //spawneaR CAJA a la skibidygame::derecha y ir trayendola hacia la skibidygame::izquierda despues de la skibidygame::caja pero cerca de la skibidygame::caja spawnear una especie de skibidygame::casa y usar el skibidygame::rng de vuelta. a mi yo del futuro le mando este mensaje:me voy a jugar 
                                      skibidygame::caja.actualizar_array(skibidygame::pos_caja,false);
                   skibidygame::caja.movete(false,-1.0,0.0,skibidygame::obj_velocidad,skibidygame::pos_caja);
                   skibidygame::caja.actualizar_array(skibidygame::pos_caja,false);
                   skibidygame::caja.detectar_colision_4_lados(skibidygame::colisiones[0],skibidygame::colisiones[1],skibidygame::colisiones[2],skibidygame::colisiones[3],skibidygame::pos_playerer);
                   skibidygame::caja.drwa();
                    /* code */                  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////urgente:aparte de que tenego que arreglar la mierda del skibidygame::salto y que no atravieses skibidygame::caja y skibidygame::casa cuando caes por skibidygame::arriba tengo que hacer algo para detectar tengo que sacarle las cordenadas a todo compararlas con las del jugador y toda esa mierda, deberia usar las funciones de prod eso voy a hacer
                                         skibidygame::casa.actualizar_array(skibidygame::pos_casa,false); 

                                     skibidygame::casa.movete(false,-1.0,0.0,skibidygame::obj_velocidad,skibidygame::pos_casa);
                                     skibidygame::casa.actualizar_array(skibidygame::pos_casa,false);
                                     skibidygame::casa.detectar_colision_4_lados(skibidygame::colisiones[4],skibidygame::colisiones[5],skibidygame::colisiones[6],skibidygame::colisiones[7],skibidygame::pos_playerer);
                   skibidygame::casa.drwa();
                   if (skibidygame::pos_casa[8] < -0.7)
                   {
                    skibidygame::casa.actualizar_array(skibidygame::pos_casa_original,true);
                                        skibidygame::caja.actualizar_array(skibidygame::pos_caja_original,true);
                   skibidygame::obj_velocidad += 0.0004;
skibidygame::caja.altura_random(-0.5f,-0.7f,skibidygame::n); 
skibidygame::casa.altura_random(skibidygame::n + 0.03,-0.4f,skibidygame::n1);
skibidygame::rng = rand() % 3 + 1;   
                   }

                   
                
}
if (skibidygame::rng == 2)
{
 skibidygame::caja_rng2.drwa();
 skibidygame::caja_rng2.movete(false,-1.0f,0.0f,skibidygame::obj_velocidad,skibidygame::pos_cajarng);
 skibidygame::caja_rng2.actualizar_array(skibidygame::pos_cajarng,false);
 skibidygame::caja_rng2.detectar_colision_4_lados(skibidygame::colisiones[8],skibidygame::colisiones[9],skibidygame::colisiones[10],skibidygame::colisiones[11],skibidygame::pos_playerer);
if (skibidygame::pos_cajarng[8] <= -0.7f){skibidygame::caja_rng2.actualizar_array(skibidygame::pos_cajarng_original,true);                   skibidygame::obj_velocidad += 0.0004;
skibidygame::caja_rng2.lado_random(0,-0.40,-0.70,skibidygame::n2);
skibidygame::caja_rng2.lado_random(2,1.6,1.2,skibidygame::n2);
skibidygame::caja_rng2.lado_random(3,skibidygame::n2 - 0.1,1.0,skibidygame::n2);                    skibidygame::rng = rand() % 3 + 1;
}}
if (skibidygame::rng == 3)
{
skibidygame::rng3[0].drwa();
skibidygame::rng3[1].drwa();
skibidygame::rng3[2].drwa();
skibidygame::rng3[0].movete(false,-1.0,0.0,skibidygame::obj_velocidad,skibidygame::pos_cajarng1);
skibidygame::rng3[1].movete(false,-1.0,0.0,skibidygame::obj_velocidad,skibidygame::pos_cajarng2);
skibidygame::rng3[2].movete(false,-1.0,0.0,skibidygame::obj_velocidad,skibidygame::pos_cajarng3);
skibidygame::rng3[0].actualizar_array(skibidygame::pos_cajarng1,false);
skibidygame::rng3[1].actualizar_array(skibidygame::pos_cajarng2,false);
skibidygame::rng3[2].actualizar_array(skibidygame::pos_cajarng3,false);
skibidygame::rng3[0].detectar_colision_4_lados(skibidygame::colisiones[12],skibidygame::colisiones[13],skibidygame::colisiones[14],skibidygame::colisiones[15],skibidygame::pos_playerer);
skibidygame::rng3[1].detectar_colision_4_lados(skibidygame::colisiones[16],skibidygame::colisiones[17],skibidygame::colisiones[18],skibidygame::colisiones[19],skibidygame::pos_playerer);
skibidygame::rng3[2].detectar_colision_4_lados(skibidygame::colisiones[20],skibidygame::colisiones[21],skibidygame::colisiones[22],skibidygame::colisiones[23],skibidygame::pos_playerer);

if (skibidygame::pos_cajarng3[8] < -0.7)
{
skibidygame::rng3[0].actualizar_array(skibidygame::pos_cajarng1_original,true);
skibidygame::rng3[1].actualizar_array(skibidygame::pos_cajarng2_original,true);
skibidygame::rng3[2].actualizar_array(skibidygame::pos_cajarng3_original,true);

skibidygame::obj_velocidad += 0.0004;
skibidygame::rng3[0].altura_random(-0.40,-0.55,skibidygame::n3);
skibidygame::rng3[1].altura_random(skibidygame::n3 + 0.35,skibidygame::n3 + 0.25,skibidygame::n3);
skibidygame::rng3[2].altura_random(skibidygame::n3 + 0.35,skibidygame::n3 + 0.25,skibidygame::n3);
skibidygame::rng = rand() % 3 + 1;
}


}

if (skibidygame::rng != 2 and skibidygame::rng != 1 and skibidygame::rng != 3)
{
    skibidygame::rng = rand() % 3 + 1;std::cout<<"nuevo"<<std::endl;

}


     if (skibidygame::colisiones[0] or skibidygame::colisiones[4] or skibidygame::colisiones[8] or skibidygame::colisiones[12] or skibidygame::colisiones[16] or skibidygame::colisiones[20])
                   {
      skibidygame::playerer.loop(skibidygame::pos_playerer,false);
              skibidygame::pos_playerer[0] -= skibidygame::obj_velocidad;                    skibidygame::pos_playerer[8] -= skibidygame::obj_velocidad;                    skibidygame::pos_playerer[16] -= skibidygame::obj_velocidad;                    skibidygame::pos_playerer[24] -= skibidygame::obj_velocidad;                    skibidygame::pos_playerer[32] -= skibidygame::obj_velocidad;                    skibidygame::pos_playerer[40] -= skibidygame::obj_velocidad;
skibidygame::playerer.loop(skibidygame::pos_playerer,true);
                   }
input(skibidygame::window,GLFW_KEY_A,skibidygame::tecla_a);input(skibidygame::window,GLFW_KEY_D,skibidygame::tecla_d);input(skibidygame::window,GLFW_KEY_S,skibidygame::tecla_s);


                //  if (skibidygame::prevrng == 0 and skibidygame::rng == 1) {skibidygame::n = -0.70f + (float)rand() / RAND_MAX * (-0.30f - (-0.70f));skibidygame::pos_caja[1] = skibidygame::n;skibidygame::pos_caja[9] = skibidygame::n;skibidygame::pos_caja[25] = skibidygame::n;}//setear altura de skibidygame::casa a random entre lo que puede saltar el jugador

//hacer un contador que por 0.5 segundos o algo asi desactive la gravedad y sume de a poco a todas las y(1,9,17,15,33,41)}
/*
if (skibidygame::w and contador_salto == 1)
{
    temporisador(0.1f,reloj_salto,contador_salto);
}
if (skibidygame::w and contador_salto != 1)
{                  me chupa la pija voy a jugar
    skibidygame::pos_playerer[1] += skibidygame::salto;skibidygame::pos_playerer[9] += skibidygame::salto;skibidygame::pos_playerer[17] += skibidygame::salto;skibidygame::pos_playerer[25] += skibidygame::salto;skibidygame::pos_playerer[33] += skibidygame::salto;skibidygame::pos_playerer[41] += skibidygame::salto;
}
*/
                skibidygame::playerer.loop(skibidygame::pos_playerer,false);

    skibidygame::obj_piso.detectar_colision_4_lados(skibidygame::abajo, skibidygame::arriba, skibidygame::derecha, skibidygame::izquierda, skibidygame::pos_playerer);
    const bool abajo_bloquete = skibidygame::colisiones[0] || skibidygame::colisiones[4] || skibidygame::colisiones[8] ||
                                skibidygame::colisiones[12] || skibidygame::colisiones[16] || skibidygame::colisiones[20];
    const bool aterrizo_este_frame = (skibidygame::abajo || abajo_bloquete) && !skibidygame::prevabajo;

    const bool bloqueo_derecha = skibidygame::colisiones[3] || skibidygame::colisiones[7] || skibidygame::colisiones[11] ||
                                 skibidygame::colisiones[15] || skibidygame::colisiones[19] || skibidygame::colisiones[23];
    const bool bloqueo_izquierda = skibidygame::colisiones[2] || skibidygame::colisiones[6] || skibidygame::colisiones[10] ||
                                   skibidygame::colisiones[14] || skibidygame::colisiones[18] || skibidygame::colisiones[22];

    input(skibidygame::window,GLFW_KEY_A,skibidygame::tecla_a);
    input(skibidygame::window,GLFW_KEY_D,skibidygame::tecla_d);
    input(skibidygame::window,GLFW_KEY_S,skibidygame::tecla_s);
skibidygame::playerer.loop(skibidygame::pos_playerer,false);
    if (skibidygame::tecla_d && !bloqueo_derecha && skibidygame::pos_playerer[8] <= 0.9f)
    {
        skibidygame::pos_playerer[0] += skibidygame::velocidad; skibidygame::pos_playerer[8] += skibidygame::velocidad; skibidygame::pos_playerer[16] += skibidygame::velocidad;
        skibidygame::pos_playerer[24] += skibidygame::velocidad; skibidygame::pos_playerer[32] += skibidygame::velocidad; skibidygame::pos_playerer[40] += skibidygame::velocidad;
    }
    if (skibidygame::tecla_a && !bloqueo_izquierda)
    {
        skibidygame::pos_playerer[0] -= skibidygame::velocidad; skibidygame::pos_playerer[8] -= skibidygame::velocidad; skibidygame::pos_playerer[16] -= skibidygame::velocidad;
        skibidygame::pos_playerer[24] -= skibidygame::velocidad; skibidygame::pos_playerer[32] -= skibidygame::velocidad; skibidygame::pos_playerer[40] -= skibidygame::velocidad;
    }
skibidygame::playerer.loop(skibidygame::pos_playerer,true);
    skibidygame::prevd = skibidygame::tecla_d;skibidygame::preva = skibidygame::tecla_a;
    // leer W cada frame para mantener estado actualizado
    input(skibidygame::window,GLFW_KEY_W,skibidygame::w);

            if (!skibidygame::w and !skibidygame::tecla_a and !skibidygame::tecla_s and !skibidygame::tecla_d)
            {
            temporisador(skibidygame::cooldown,skibidygame::r,skibidygame::c);
            }
            

skibidygame::caja_rng2.idle(0.2,"autito1.png","autito1_f2.png",skibidygame::caja_rng2);
            
                skibidygame::playerer.loop(skibidygame::pos_playerer,false);
                // No usar contacto con bloques como skibidygame::piso: eso hace que el personaje se sienta "en el suelo"
                // cuando en realidad estÃ¡ rebotando contra una pared o una skibidygame::caja.
                // El skibidygame::piso real lo detecta skibidygame::obj_piso.detectar_colision_4_lados(...)



if ((skibidygame::tecla_a or skibidygame::tecla_d or skibidygame::w) and skibidygame::abajo)
{
         
    /* code */

skibidygame::lo_otro = true;
              if (skibidygame::que_goob_usar == 1)
              {
skibidygame::playerer.idle(0.2,"goob2_r.png","goob2_r2.png",skibidygame::playerer);
              }
              if (skibidygame::que_goob_usar == 2)
              {
skibidygame::playerer.idle(0.2,"goob3_r.png","goob3_r2.png",skibidygame::playerer);
              }
                            if (skibidygame::que_goob_usar == 3)
              {
skibidygame::playerer.idle(0.2,"goob4_r.png","goob4_r2.png",skibidygame::playerer);
              }}
              else
              {
            if (skibidygame::que_goob_usar == 1)
            {
skibidygame::playerer.cambiar_textura("goob2.png");           }
            if (skibidygame::que_goob_usar == 2)
            {
skibidygame::playerer.cambiar_textura("goob3.png");           }
            if (skibidygame::que_goob_usar == 3)
            {
skibidygame::playerer.cambiar_textura("goob4.png");            }
            }
// 2. Ejecutar la lÃ³gica de Render / AnimaciÃ³skibidygame::n

    // cuanto_achicar = 0.25f (25% de compresiÃ³skibidygame::n)
    // skibidygame::velocidad      = 12.0f (DuraciÃ³skibidygame::n ~0.26 segundos)

    // SOLO si NO estÃ¡ skibidygame::aplastando, el main actualiza las posiciones normales del jugador
            if ((!skibidygame::w and !skibidygame::tecla_a and !skibidygame::tecla_s and !skibidygame::tecla_d) and ( skibidygame::abajo or abajo_bloquete))
{
    /* code */


              if (skibidygame::que_goob_usar == 1)
              {
skibidygame::playerer.idle(0.2,"goob2.png","goob2_f2.png",skibidygame::playerer);
              }
              if (skibidygame::que_goob_usar == 2)
              {
skibidygame::playerer.idle(0.2,"goob3.png","goob3_f2.png",skibidygame::playerer);
              }
                            if (skibidygame::que_goob_usar == 3)
              {
skibidygame::playerer.idle(0.2,"goob4.png","goob4_f2.png",skibidygame::playerer);
              }}
            else if (!skibidygame::lo_otro)//esto hace que lo otro no se ejecute. necesito algo para comprobar que eso no se este ejecutando
              {
            if (skibidygame::que_goob_usar == 1)
            {
skibidygame::playerer.cambiar_textura("goob2.png");           }
            if (skibidygame::que_goob_usar == 2)
            {
skibidygame::playerer.cambiar_textura("goob3.png");           }
            if (skibidygame::que_goob_usar == 3)
            {
skibidygame::playerer.cambiar_textura("goob4.png");            }
            }
    skibidygame::playerer.loop(skibidygame::pos_playerer,false); 

// Reposiciona una sola vez cuando hay lado bloqueado para no patinar mientras rebota.
if (abajo_bloquete) {skibidygame::abajo = true;}

    if (aterrizo_este_frame && !skibidygame::aplastando) 
{
    skibidygame::aplastando = true; // Solo enciende la mecha
}

if (skibidygame::w && !skibidygame::prevW && !skibidygame::seguir_subiendo && skibidygame::abajo && !skibidygame::colisiones[2] && !skibidygame::colisiones[3] && !skibidygame::colisiones[6] && !skibidygame::colisiones[7] && !skibidygame::colisiones[14] && !skibidygame::colisiones[15] && !skibidygame::colisiones[18] && !skibidygame::colisiones[19] && !skibidygame::colisiones[22] && !skibidygame::colisiones[23])//condicion skibidygame::salto
{
    skibidygame::altura_salto = skibidygame::pos_playerer[17] + 0.45f; skibidygame::seguir_subiendo = true;
}
if (skibidygame::pos_playerer[17] > skibidygame::altura_salto or skibidygame::colisiones[17])
{
    skibidygame::seguir_subiendo = false; 
}
if (skibidygame::pos_playerer[17] < skibidygame::altura_salto && skibidygame::seguir_subiendo == true)
{
    skibidygame::pos_playerer[1] += skibidygame::salto;skibidygame::pos_playerer[9] += skibidygame::salto;skibidygame::pos_playerer[17] += skibidygame::salto;skibidygame::pos_playerer[25] += skibidygame::salto;skibidygame::pos_playerer[33] += skibidygame::salto;skibidygame::pos_playerer[41] += skibidygame::salto;
}
                if (!skibidygame::abajo && !skibidygame::seguir_subiendo) {skibidygame::pos_playerer[1] -= skibidygame::graveda;skibidygame::pos_playerer[9] -= skibidygame::graveda;skibidygame::pos_playerer[17] -= skibidygame::graveda;skibidygame::pos_playerer[25] -= skibidygame::graveda;skibidygame::pos_playerer[33] -= skibidygame::graveda;skibidygame::pos_playerer[41] -= skibidygame::graveda;}

                // actualizar flanco previo
                skibidygame::prevW = skibidygame::w;

   skibidygame::playerer.loop(skibidygame::pos_playerer,true);
   if (skibidygame::aplastando)
   {
       skibidygame::playerer.squash(0.05f, 0.18f, skibidygame::aplastando, skibidygame::deltaTime);
   }
   skibidygame::prevabajo = skibidygame::abajo;
   skibidygame::casa.actualizar_array(skibidygame::pos_casa,false);
   skibidygame::caja.actualizar_array(skibidygame::pos_caja,false);
   skibidygame::caja_rng2.actualizar_array(skibidygame::pos_cajarng,false);
   skibidygame::rng3[0].actualizar_array(skibidygame::pos_cajarng1,false);
   skibidygame::rng3[1].actualizar_array(skibidygame::pos_cajarng2,false);
   skibidygame::rng3[2].actualizar_array(skibidygame::pos_cajarng3,false);

   if (skibidygame::adentro_de_caja){
     skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::casa,skibidygame::adentro_de_caja);
if (!skibidygame::colisiones[7] and !skibidygame::colisiones[4]){
     skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::caja,skibidygame::adentro_de_caja);//por que carajos hago esto lol.ni puta idea(el if)
}
skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::caja_rng2,skibidygame::adentro_de_caja);
if (skibidygame::rng == 3.0f){ 
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::rng3[0],skibidygame::adentro_de_caja);
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::rng3[1],skibidygame::adentro_de_caja);
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad + skibidygame::velocidad,skibidygame::rng3[2],skibidygame::adentro_de_caja);
}}
else{
    
     skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::casa,skibidygame::adentro_de_caja);
if (!skibidygame::colisiones[7] and !skibidygame::colisiones[4]){
     skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::caja,skibidygame::adentro_de_caja);//por que carajos hago esto lol.ni puta idea(el if)
}
skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::caja_rng2,skibidygame::adentro_de_caja);
if (skibidygame::rng == 3 and (!skibidygame::colisiones[12] or !skibidygame::colisiones[16] or !skibidygame::colisiones[20])){
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::rng3[0],skibidygame::adentro_de_caja);
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::rng3[1],skibidygame::adentro_de_caja);
  skibidygame::playerer.loop_juegito_skibidy(skibidygame::obj_velocidad,skibidygame::rng3[2],skibidygame::adentro_de_caja);
}
}
    skibidygame::playerer.drwp();
    skibidygame::obj_piso.drwa();
                    if (skibidygame::pos_playerer[8] <= -1.0)
                {//broo se logro tengo novia 
                    skibidygame::press = false;skibidygame::alreadystart = false;
                                        skibidygame::casa.actualizar_array(skibidygame::pos_casa_original,true);
                                        skibidygame::caja.actualizar_array(skibidygame::pos_caja_original,true);
                                        skibidygame::caja_rng2.actualizar_array(skibidygame::pos_cajarng_original,true);
                                        skibidygame::rng3[0].actualizar_array(skibidygame::pos_cajarng1_original,true);
                                                                                skibidygame::rng3[1].actualizar_array(skibidygame::pos_cajarng2_original,true);
                                        skibidygame::rng3[2].actualizar_array(skibidygame::pos_cajarng3_original,true);

                                         skibidygame::obj_velocidad = 0.004;
memcpy(skibidygame::pos_playerer,skibidygame::pos_playerer_original,sizeof(skibidygame::pos_playerer_original));          skibidygame::playerer.loop(skibidygame::pos_playerer,true);
                                  skibidygame::menu = true;
                                  skibidygame::prevp = skibidygame::boton_menu; skibidygame::rng = rand() % 3 + 1;
                                  skibidygame::que_goob_usar = rand() % 3 + 1;
                                  if (skibidygame::que_goob_usar == 1){skibidygame::playerer.cambiar_textura("goob2.png");}
                                                                    if (skibidygame::que_goob_usar == 2){skibidygame::playerer.cambiar_textura("goob3.png");}
                                                                                                      if (skibidygame::que_goob_usar == 3){skibidygame::playerer.cambiar_textura("goob4.png");}
skibidygame::fondo.cambiar_textura("fondo.png");parar_audio();
skibidygame::w = false;  skibidygame::tecla_a = false;  skibidygame::tecla_s = false;  skibidygame::tecla_d = false; 
                skibidygame::abajo = false;  skibidygame::c = 0;
                                  skibidygame::caja_rng2.cambiar_textura("autito1.png");
                }
                
            }
     skibidygame::end_time = glfwGetTime();
     cerrar_con_escape(skibidygame::window);
     framebuffer_size_callback(skibidygame::window,1360,768);
     glfwSwapBuffers(skibidygame::window);
     glfwPollEvents();
          const std::chrono::duration<double> frame_elapsed =
         std::chrono::steady_clock::now() - frame_start;
     const double remaining_time = skibidygame::target_frame_time - frame_elapsed.count();
     if (remaining_time > 0.0)
     {
         std::this_thread::sleep_for(std::chrono::duration<double>(remaining_time));
     }
    
    }}

if (menu_opengl == 8)
{
    GLFWwindow *window;
    float cubo_pos[288] = {
    // Cara frontal
    -0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,0.0f,
     0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,1.0f,
    -0.5f,-0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 1.0f,1.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,0.2f, 0.0f,1.0f,

    // Cara derecha
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,0.0f,
     0.5f,-0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,0.0f,
     0.5f, 0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,1.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,0.0f,
     0.5f, 0.5f,-0.5f, 0.2f,1.0f,0.2f, 1.0f,1.0f,
     0.5f, 0.5f, 0.5f, 0.2f,1.0f,0.2f, 0.0f,1.0f,

    // Cara trasera
     0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,0.0f,
    -0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,0.0f,
    -0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,1.0f,
     0.5f,-0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,0.0f,
    -0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 1.0f,1.0f,
     0.5f, 0.5f,-0.5f, 0.2f,0.2f,1.0f, 0.0f,1.0f,

    // Cara izquierda
    -0.5f,-0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,0.0f,
    -0.5f,-0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,0.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,1.0f,
    -0.5f,-0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,0.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,1.0f,0.2f, 1.0f,1.0f,
    -0.5f, 0.5f,-0.5f, 1.0f,1.0f,0.2f, 0.0f,1.0f,

    // Cara superior
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 0.0f,0.0f,
     0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 1.0f,0.0f,
     0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 1.0f,1.0f,
    -0.5f, 0.5f, 0.5f, 1.0f,0.2f,1.0f, 0.0f,0.0f,
     0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 1.0f,1.0f,
    -0.5f, 0.5f,-0.5f, 1.0f,0.2f,1.0f, 0.0f,1.0f,

    // Cara inferior
    -0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 0.0f,0.0f,
     0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 1.0f,0.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 1.0f,1.0f,
    -0.5f,-0.5f,-0.5f, 0.2f,1.0f,1.0f, 0.0f,0.0f,
     0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 1.0f,1.0f,
    -0.5f,-0.5f, 0.5f, 0.2f,1.0f,1.0f, 0.0f,1.0f
};
    std::string lol = "abc";std::cout<<"escribi el nombre de un png en la carpeta de instalacion o escribi la ruta completa"<<std::endl;
    std::cin>>lol;
    iniciar_glfw_y_glew(window,1360,768,3,"3dñiñiñi");
    bloquete cubito;

    cubito.config_3D(true,lol.c_str(),cubo_pos,288);
    while (!glfwWindowShouldClose(window))
    {
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
cubito.cositas_3d(true,glm::vec3(1.0,1.0,1.0),glm::vec3(0.0,0.0,-3.0));
cubito.drwa();        cerrar_con_escape(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
}

}
  if (menu_principal == 3)
  {
            if (!camara_reiniciada)
            {
                cam.reiniciar_posicion();
                camera_pos = cam.posicion;
                camera_front = cam.cameraFront;
                camera_up = cam.cameraUp;
                camara_reiniciada = true;
            }
piso.main_3d(camera_pos, camera_front, camera_up, piso);
piso.drwa();
            menu_juegos = 0;
            cpppp(window,camera_pos,camera_front,camera_up,cam,menu_encriptar,bloq,1);    std::cout<<"1-fnaf."<<std::endl;
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
    system("mkdir sus toiletamongusskibidy");
    system("cd sus toiletamongusskibidy");
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
            if (!camara_reiniciada)
            {
                cam.reiniciar_posicion();
                camera_pos = cam.posicion;
                camera_front = cam.cameraFront;
                camera_up = cam.cameraUp;
                camara_reiniciada = true;
            }
piso.main_3d(camera_pos, camera_front, camera_up, piso);
piso.drwa();
            menu_tools = 0;
            cpppp(window,camera_pos,camera_front,camera_up,cam,menu_tools,bloq,5);    std::cout<<"1-descargador de paginas web."<<std::endl;
    std::cout<<"2-generador de claves aleatorias"<<std::endl;
    std::cout<<"3-reproductor de musica"<<std::endl;
    std::cout<<"4-separar y unir archivos"<<std::endl;
        std::cout<<"5-ver fotos"<<std::endl;

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
  if (menu_tools == 5)
  {
    while(true){
 std::cout<<"pone una ruta valida de imagen ej:"<<"C:\\Users\\User\\Downloads\\foto_perfil.png"<<std::endl;
 std::getline(std::cin,visualizador::rutinga);
 if (visualizador::rutinga != visualizador::nada)
 {
   break;
 }
 
    }
iniciar_glfw_y_glew(visualizador::window,1360,768,3,visualizador::nome);
generarbuffers(visualizador::vbo,visualizador::vao,visualizador::poscicion,24,false);
generarbuffers(visualizador::vbo1,visualizador::vao1,visualizador::posi,24,false);
generarshader(visualizador::shadep,visualizador::verter,visualizador::fragme,visualizador::sorf,visualizador::sourv);

textura(visualizador::rutinga.c_str(),visualizador::texura,visualizador::shadep,visualizador::wi,visualizador::hi,visualizador::nr,visualizador::a,visualizador::looc);

glGenTextures(1, &visualizador::texture);
glActiveTexture(GL_TEXTURE0);
glBindTexture(GL_TEXTURE_2D,visualizador::texture);
glUseProgram(visualizador::shadep);
 visualizador::loc = glGetUniformLocation(visualizador::shadep, "texture1");
printf("loc=%d\n", visualizador::loc);
glUniform1i(glGetUniformLocation(visualizador::shadep,"texture1"),0);
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
stbi_set_flip_vertically_on_load(true);   
unsigned char *datarda = stbi_load(visualizador::rutinga.c_str(), &visualizador::width,&visualizador::height,&visualizador::nrChannels,0);

if (!datarda)
{
    printf("Error: %s\n", stbi_failure_reason());
}
else
{
    printf("w=%d h=%d c=%d\n", visualizador::width, visualizador::height, visualizador::nrChannels);
}
glTexImage2D(GL_TEXTURE_2D,0,GL_RGB,visualizador::width,visualizador::height,0,GL_RGB,GL_UNSIGNED_BYTE,datarda);
printf("error=%d\n", glGetError());

glGenerateMipmap(GL_TEXTURE_2D);
stbi_image_free(datarda);
while (!glfwWindowShouldClose(visualizador::window))
{
    glClear(GL_COLOR_BUFFER_BIT);   
    glBindTexture(GL_TEXTURE_2D, visualizador::texture);

     drw(false,visualizador::vbo,visualizador::vao,visualizador::shadep,3,24,visualizador::poscicion,GL_TRIANGLES);
     glBindTexture(GL_TEXTURE_2D, visualizador::texura);

    drw(false,visualizador::vbo1,visualizador::vao1,visualizador::shadep,3,24,visualizador::posi,GL_TRIANGLES);
      framebuffer_size_callback(visualizador::window,1360,768);                                                                     
      glfwSwapBuffers(visualizador::window);
      glfwPollEvents();
}}
 }
 if (menu_principal == 6)
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
 
 if (menu_principal == 5)
 {
   std::cout<<"Copyright (C) 2026 lucas"<<std::endl<<" Este programa es software libre: usted puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública General GNU"<<std::endl<<"Este software utiliza la librería GLFW (www.glfw.org), bajo la licencia Zlib. El código fuente de esta aplicación está disponible bajo la licencia GPL v3 en https://github.com/xXluquitazXx/src_cpluspluslauncher"<<std::endl;
   std::cout<<"apreta cualquier tecla para salir"<<std::endl;
   std::cin>>c1;
   break;
 }
 if (menu_principal == 7){
    break;
 }
         glfwSwapBuffers(window);
         glfwPollEvents();
         cerrar_con_escape(window);





}
 






if (configuracion::rdbyt2 == 1)
   {
     configuracion::soloud.deinit();
   }
   
    return 0;
}
/*Set-Location -LiteralPath 'C:\Users\soywi\Documents\vscode'; & 'C:\msys64\ucrt64\bin\g++.exe' -D__FUNCSIG__=__PRETTY_FUNCTION__ -DWITH_WINMM -DWINVER=0x0A00 -D_WIN32_WINNT=0x0A00 -DCPPHTTPLIB_OPENSSL_SUPPORT -I'C:\Program Files\ArrayFire\v3\include' -I'C:\msys64\ucrt64\include' -I'abc\soloud20200207\include' -g 'c++launcher.cpp' app_icon.o abc\soloud20200207\src\core\soloud.cpp abc\soloud20200207\src\core\soloud_audiosource.cpp abc\soloud20200207\src\core\soloud_bus.cpp abc\soloud20200207\src\core\soloud_core_3d.cpp abc\soloud20200207\src\core\soloud_core_basicops.cpp abc\soloud20200207\src\core\soloud_core_faderops.cpp abc\soloud20200207\src\core\soloud_core_filterops.cpp abc\soloud20200207\src\core\soloud_core_getters.cpp abc\soloud20200207\src\core\soloud_core_setters.cpp abc\soloud20200207\src\core\soloud_core_voicegroup.cpp abc\soloud20200207\src\core\soloud_core_voiceops.cpp abc\soloud20200207\src\core\soloud_fader.cpp abc\soloud20200207\src\core\soloud_fft.cpp abc\soloud20200207\src\core\soloud_fft_lut.cpp abc\soloud20200207\src\core\soloud_file.cpp abc\soloud20200207\src\core\soloud_filter.cpp abc\soloud20200207\src\core\soloud_queue.cpp abc\soloud20200207\src\core\soloud_thread.cpp abc\soloud20200207\src\audiosource\wav\dr_impl.cpp abc\soloud20200207\src\audiosource\wav\soloud_wav.cpp abc\soloud20200207\src\audiosource\wav\soloud_wavstream.cpp abc\soloud20200207\src\audiosource\wav\stb_vorbis.c abc\soloud20200207\src\backend\winmm\soloud_winmm.cpp -o 'c++launcher.exe' -L'C:\Program Files\ArrayFire\v3\lib' -L'C:\msys64\ucrt64\lib' -lafopencl -laf -lglew32 -lglfw3 -lopengl32 -lwinmm -lws2_32 -lcrypt32 -lssl -lcrypto*/


