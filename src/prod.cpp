#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include "glew.h"
#include "glfw3.h"
#include <cstdlib>
#include <ctime>
#include <cstring>
//drw
void cerrar_con_escape(GLFWwindow*  window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}
void textura(const char* ruta,unsigned int& texture,unsigned int shaderProgram,int width , int height, int nrChannels,unsigned char *data,int& loc)
{
glGenTextures(1, &texture);
glActiveTexture(GL_TEXTURE0);
glBindTexture(GL_TEXTURE_2D,texture);
glUseProgram(shaderProgram);
 loc = glGetUniformLocation(shaderProgram, "texture1");
glUniform1i(glGetUniformLocation(shaderProgram,"texture1"),0);
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    
stbi_set_flip_vertically_on_load(true);   

data = stbi_load(ruta, &width,&height,&nrChannels,0);

if (!data)
{
    printf("Error: %s\n", stbi_failure_reason());
}
GLenum formato = GL_RGB;

if (nrChannels == 4)
    formato = GL_RGBA;

glTexImage2D(GL_TEXTURE_2D,0,formato,width,height,0,formato,GL_UNSIGNED_BYTE,data);

glGenerateMipmap(GL_TEXTURE_2D);
stbi_image_free(data);
}
void actualizarBuffer( unsigned int& VBO, float* datos, int tamanioBytes)
{
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, tamanioBytes, datos);
}
void generarbuffers( unsigned int& VBO, unsigned int& VAO,float* posiciones,int el_numero_entre_corcheas,const bool dynamic)
{
   if (dynamic == true)
   {
      /* code */
   
    glGenBuffers(1, &VBO);
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * el_numero_entre_corcheas, posiciones, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
        // position attribute
    // color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    // texture coord attribute
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
    glEnableVertexAttribArray(2);
   }
   if (dynamic == false)
   {
    glGenBuffers(1, &VBO);
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * el_numero_entre_corcheas, posiciones, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    // texture coord attribute
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
    glEnableVertexAttribArray(2);
   }
}
void generarshader( unsigned int& shaderProgram,  unsigned int& vertexshader,  unsigned int& fragmentshader, const char* vertexShaderSource , const char* fragmentShaderSource )
    {
    vertexshader = glCreateShader(GL_VERTEX_SHADER);
    fragmentshader = glCreateShader(GL_FRAGMENT_SHADER);
    int success;
    char infoLog[512];
    glShaderSource(vertexshader, 1, &vertexShaderSource, NULL);
    glShaderSource(fragmentshader, 1, &fragmentShaderSource, NULL);

    glCompileShader(fragmentshader);
        glGetShaderiv(fragmentshader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragmentshader, 512, NULL, infoLog);
        std::cout << "FRAGMENT SHADER ERROR: " << infoLog << "\n";
    }
    glCompileShader(vertexshader);
        glGetShaderiv(vertexshader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertexshader, 512, NULL, infoLog);
        std::cout << "VERTEX SHADER ERROR: " << infoLog << "\n";
    }
    shaderProgram = glCreateProgram();

    glAttachShader(shaderProgram, fragmentshader);
    glAttachShader(shaderProgram, vertexshader);
    glLinkProgram(shaderProgram);
    // CHECK VERTEX SHADER


    
    // CHECK FRAGMENT SHADER


    
    // CHECK PROGRAM LINKING
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "PROGRAM LINKING ERROR: " << infoLog << "\n";
    }


    
    glDeleteShader(vertexshader);
    glDeleteShader(fragmentshader);


             }

void input(GLFWwindow*& window,int GLFW_KEY,  bool& keypress)
{
keypress = false;
if (glfwGetKey(window, GLFW_KEY) == GLFW_PRESS)
{
   keypress = true;
}
}
void input_mouse(GLFWwindow*& window,int GLFW_MOUSE_BUTTON,  bool& keypress)
{
keypress = false;
if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON) == GLFW_PRESS)
{
   keypress = true;
}
}
void APIENTRY debugCallback(GLenum source, GLenum type, GLuint id, GLenum severity,
                             GLsizei length, const GLchar* message, const void* userParam) {
    if (severity == GL_DEBUG_SEVERITY_HIGH) {
        std::cout << "OpenGL ERROR: " << message << "\n";
    }
}

void iniciar_glfw_y_glew(GLFWwindow*& window,const int largo, const int ancho, const int version_opengl, const char* nombre_de_ventana)
{
    srand(time(0));
    glfwInit();
    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version_opengl);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version_opengl);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    if (!glfwInit())
{
    std::cout << "fallo glfwInit\n";
}
 window = glfwCreateWindow(
    largo,                   
    ancho,
    nombre_de_ventana,
    NULL,
    NULL
);

if (!window)
{
    std::cout << "fallo glfwCreateWindow\n";
    glfwTerminate();
}

glfwMakeContextCurrent(window);

GLenum err = glewInit();

if (err != GLEW_OK)
{
    std::cout << "fallo glew: "
              << glewGetErrorString(err)
              << "\n";
}
const char* descripcion;
int codigo = glfwGetError(&descripcion);

std::cout << "GLFW Error " << codigo << ": " << descripcion << std::endl;


glEnable(GL_DEBUG_OUTPUT);
glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
glDebugMessageCallback(debugCallback, nullptr);
}
void reproducir_audio(const char* nombre_del_wav)
{
 PlaySound( nombre_del_wav , NULL , SND_FILENAME | SND_ASYNC );

}
void mover(float* origen, float* destino, float x, float y)
{
    destino[0] = origen[0] + x;
    destino[1] = origen[1] + y;

    destino[3] = origen[3] + x;
    destino[4] = origen[4] + y;

    destino[6] = origen[6] + x;
    destino[7] = origen[7] + y;
}
void mover2(float* origen, float* destino, float x, float y)
{
    destino[0] = origen[0] + x;
    destino[1] = origen[1] + y;

    destino[3] = origen[8] + x;
    destino[4] = origen[9] + y;

    destino[6] = origen[16] + x;
    destino[7] = origen[17] + y;
}
void temporisador(float tiempo, float& reloj,  int& contador)
{
        if ((glfwGetTime() - reloj) >= tiempo)
        {
            contador++;
            reloj = glfwGetTime();
        }
}
void drw(bool actualizarBuffer,unsigned int& VBO , unsigned int& VAO, unsigned int shaderProgram,int vertices,int el_numero_entre_corcheas, float* datos, GLenum glform)
{
   if ( actualizarBuffer == true)
   {
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(float) * el_numero_entre_corcheas, datos);   
   }
        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);
        glDrawArrays(glform, 0,vertices);
        glBindVertexArray(0);
}
void ir_destino(float paso,float* destino,float* posiciones)
{
            if (posiciones[0] < destino[0])
            {
                posiciones[0] += paso;
            }
            if (posiciones[0] > destino[0])
            {
                posiciones[0] -= paso;
            }
            if (posiciones[1] < destino[1])
            {
                posiciones[1] += paso;
            }
            if (posiciones[1] > destino[1])
            {
                posiciones[1] -= paso;
            }
            //
            if (posiciones[3] < destino[3])
            {
                posiciones[3] += paso;
            }
            if (posiciones[3] > destino[3])
            {
                posiciones[3] -= paso;
            }
            if (posiciones[4] < destino[4])
            {
                posiciones[4] += paso;
            }
            if (posiciones[4] > destino[4 ])
            {
                posiciones[4] -= paso;
            }
            //
            if (posiciones[6] < destino[6])
            {
                posiciones[6] += paso;
            }
            if (posiciones[6] > destino[6])
            {
                posiciones[6] -= paso;
            }
            if (posiciones[7] < destino[7])
            {
                posiciones[7] += paso;
            }
            if (posiciones[7] > destino[7])
            {
                posiciones[7] -= paso;
            }
            //
}
void vomandale(float paso,float* destino,float* posiciones)
{
            if (posiciones[0] < destino[0])
            {
                posiciones[0] += paso;
            }
            if (posiciones[0] > destino[0])
            {
                posiciones[0] -= paso;
            }
            if (posiciones[1] < destino[1])
            {
                posiciones[1] += paso;
            }
            if (posiciones[1] > destino[1])
            {
                posiciones[1] -= paso;
            }
            //
            if (posiciones[8] < destino[3])
            {
                posiciones[8] += paso;
            }
            if (posiciones[8] > destino[3])
            {
                posiciones[8] -= paso;
            }
            if (posiciones[9] < destino[4])
            {
                posiciones[9] += paso;
            }
            if (posiciones[9] > destino[4 ])
            {
                posiciones[9] -= paso;
            }
            //
            if (posiciones[16] < destino[6])
            {
                posiciones[16] += paso;
            }
            if (posiciones[16] > destino[6])
            {
                posiciones[16] -= paso;
            }
            if (posiciones[17] < destino[7])
            {
                posiciones[17] += paso;
            }
            if (posiciones[17] > destino[7])
            {
                posiciones[17] -= paso;
            }
            //
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
class circulito
{
private:
    float posiciones[9] = {0.0f,0.0f,0.0f, 0.05661f,0.0f,0.0f, 0.05536f,0.02079117f,0.0f};
    float posiciones1[9] = {0.0f,0.0f,0.0f, 0.05536f,0.02079117f,0.0f, 0.05173f,0.04067366f,0.0f};
    float posiciones2[9] = {0.0f,0.0f,0.0f, 0.05173f,0.04067366f,0.0f, 0.04580f,0.05877853f,0.0f};
    float posiciones3[9] = {0.0f,0.0f,0.0f, 0.04580f,0.05877853f,0.0f, 0.03787f,0.07431448f,0.0f};
    float posiciones4[9] = {0.0f,0.0f,0.0f, 0.03787f,0.07431448f,0.0f, 0.02831f,0.08660254f,0.0f};
    float posiciones5[9] = {0.0f,0.0f,0.0f, 0.02831f,0.08660254f,0.0f, 0.01749f,0.09510565f,0.0f};
    float posiciones6[9] = {0.0f,0.0f,0.0f, 0.01749f,0.09510565f,0.0f, 0.00592f,0.09945219f,0.0f};
    float posiciones7[9] = {0.0f,0.0f,0.0f, 0.00592f,0.09945219f,0.0f, -0.00592f,0.09945219f,0.0f};
    float posiciones8[9] = {0.0f,0.0f,0.0f, -0.00592f,0.09945219f,0.0f, -0.01749f,0.09510565f,0.0f};
    float posiciones9[9] = {0.0f,0.0f,0.0f, -0.01749f,0.09510565f,0.0f, -0.02831f,0.08660254f,0.0f};
    float posiciones10[9] = {0.0f,0.0f,0.0f, -0.02831f,0.08660254f,0.0f, -0.03787f,0.07431448f,0.0f};
    float posiciones11[9] = {0.0f,0.0f,0.0f, -0.03787f,0.07431448f,0.0f, -0.04580f,0.05877853f,0.0f};
    float posiciones12[9] = {0.0f,0.0f,0.0f, -0.04580f,0.05877853f,0.0f, -0.05173f,0.04067366f,0.0f};
    float posiciones13[9] = {0.0f,0.0f,0.0f, -0.05173f,0.04067366f,0.0f, -0.05536f,0.02079117f,0.0f};
    float posiciones14[9] = {0.0f,0.0f,0.0f, -0.05536f,0.02079117f,0.0f, -0.05661f,0.0f,0.0f};
    float posiciones15[9] = {0.0f,0.0f,0.0f, -0.05661f,0.0f,0.0f, -0.05536f,-0.02079117f,0.0f};
    float posiciones16[9] = {0.0f,0.0f,0.0f, -0.05536f,-0.02079117f,0.0f, -0.05173f,-0.04067366f,0.0f};
    float posiciones17[9] = {0.0f,0.0f,0.0f, -0.05173f,-0.04067366f,0.0f, -0.04580f,-0.05877853f,0.0f};
    float posiciones18[9] = {0.0f,0.0f,0.0f, -0.04580f,-0.05877853f,0.0f, -0.03787f,-0.07431448f,0.0f};
    float posiciones19[9] = {0.0f,0.0f,0.0f, -0.03787f,-0.07431448f,0.0f, -0.02831f,-0.08660254f,0.0f};
    float posiciones20[9] = {0.0f,0.0f,0.0f, -0.02831f,-0.08660254f,0.0f, -0.01749f,-0.09510565f,0.0f};
    float posiciones21[9] = {0.0f,0.0f,0.0f, -0.01749f,-0.09510565f,0.0f, -0.00592f,-0.09945219f,0.0f};
    float posiciones22[9] = {0.0f,0.0f,0.0f, -0.00592f,-0.09945219f,0.0f, 0.00592f,-0.09945219f,0.0f};
    float posiciones23[9] = {0.0f,0.0f,0.0f, 0.00592f,-0.09945219f,0.0f, 0.01749f,-0.09510565f,0.0f};
    float posiciones24[9] = {0.0f,0.0f,0.0f, 0.01749f,-0.09510565f,0.0f, 0.02831f,-0.08660254f,0.0f};
    float posiciones25[9] = {0.0f,0.0f,0.0f, 0.02831f,-0.08660254f,0.0f, 0.03787f,-0.07431448f,0.0f};
    float posiciones26[9] = {0.0f,0.0f,0.0f, 0.03787f,-0.07431448f,0.0f, 0.04580f,-0.05877853f,0.0f};
    float posiciones27[9] = {0.0f,0.0f,0.0f, 0.04580f,-0.05877853f,0.0f, 0.05173f,-0.04067366f,0.0f};
    float posiciones28[9] = {0.0f,0.0f,0.0f, 0.05173f,-0.04067366f,0.0f, 0.05536f,-0.02079117f,0.0f};
    float posiciones29[9] = {0.0f,0.0f,0.0f, 0.05536f,-0.02079117f,0.0f, 0.05661f,0.0f,0.0f};
//
    float posicionesoriginales[9] = {0.0f,0.0f,0.0f, 0.05661f,0.0f,0.0f, 0.05536f,0.02079117f,0.0f};
    float posicionesoriginales1[9] = {0.0f,0.0f,0.0f, 0.05536f,0.02079117f,0.0f, 0.05173f,0.04067366f,0.0f};
    float posicionesoriginales2[9] = {0.0f,0.0f,0.0f, 0.05173f,0.04067366f,0.0f, 0.04580f,0.05877853f,0.0f};
    float posicionesoriginales3[9] = {0.0f,0.0f,0.0f, 0.04580f,0.05877853f,0.0f, 0.03787f,0.07431448f,0.0f};
    float posicionesoriginales4[9] = {0.0f,0.0f,0.0f, 0.03787f,0.07431448f,0.0f, 0.02831f,0.08660254f,0.0f};
    float posicionesoriginales5[9] = {0.0f,0.0f,0.0f, 0.02831f,0.08660254f,0.0f, 0.01749f,0.09510565f,0.0f};
    float posicionesoriginales6[9] = {0.0f,0.0f,0.0f, 0.01749f,0.09510565f,0.0f, 0.00592f,0.09945219f,0.0f};
    float posicionesoriginales7[9] = {0.0f,0.0f,0.0f, 0.00592f,0.09945219f,0.0f, -0.00592f,0.09945219f,0.0f};
    float posicionesoriginales8[9] = {0.0f,0.0f,0.0f, -0.00592f,0.09945219f,0.0f, -0.01749f,0.09510565f,0.0f};
    float posicionesoriginales9[9] = {0.0f,0.0f,0.0f, -0.01749f,0.09510565f,0.0f, -0.02831f,0.08660254f,0.0f};
    float posicionesoriginales10[9] = {0.0f,0.0f,0.0f, -0.02831f,0.08660254f,0.0f, -0.03787f,0.07431448f,0.0f};
    float posicionesoriginales11[9] = {0.0f,0.0f,0.0f, -0.03787f,0.07431448f,0.0f, -0.04580f,0.05877853f,0.0f};
    float posicionesoriginales12[9] = {0.0f,0.0f,0.0f, -0.04580f,0.05877853f,0.0f, -0.05173f,0.04067366f,0.0f};
    float posicionesoriginales13[9] = {0.0f,0.0f,0.0f, -0.05173f,0.04067366f,0.0f, -0.05536f,0.02079117f,0.0f};
    float posicionesoriginales14[9] = {0.0f,0.0f,0.0f, -0.05536f,0.02079117f,0.0f, -0.05661f,0.0f,0.0f};
    float posicionesoriginales15[9] = {0.0f,0.0f,0.0f, -0.05661f,0.0f,0.0f, -0.05536f,-0.02079117f,0.0f};
    float posicionesoriginales16[9] = {0.0f,0.0f,0.0f, -0.05536f,-0.02079117f,0.0f, -0.05173f,-0.04067366f,0.0f};
    float posicionesoriginales17[9] = {0.0f,0.0f,0.0f, -0.05173f,-0.04067366f,0.0f, -0.04580f,-0.05877853f,0.0f};
    float posicionesoriginales18[9] = {0.0f,0.0f,0.0f, -0.04580f,-0.05877853f,0.0f, -0.03787f,-0.07431448f,0.0f};
    float posicionesoriginales19[9] = {0.0f,0.0f,0.0f, -0.03787f,-0.07431448f,0.0f, -0.02831f,-0.08660254f,0.0f};
    float posicionesoriginales20[9] = {0.0f,0.0f,0.0f, -0.02831f,-0.08660254f,0.0f, -0.01749f,-0.09510565f,0.0f};
    float posicionesoriginales21[9] = {0.0f,0.0f,0.0f, -0.01749f,-0.09510565f,0.0f, -0.00592f,-0.09945219f,0.0f};
    float posicionesoriginales22[9] = {0.0f,0.0f,0.0f, -0.00592f,-0.09945219f,0.0f, 0.00592f,-0.09945219f,0.0f};
    float posicionesoriginales23[9] = {0.0f,0.0f,0.0f, 0.00592f,-0.09945219f,0.0f, 0.01749f,-0.09510565f,0.0f};
    float posicionesoriginales24[9] = {0.0f,0.0f,0.0f, 0.01749f,-0.09510565f,0.0f, 0.02831f,-0.08660254f,0.0f};
    float posicionesoriginales25[9] = {0.0f,0.0f,0.0f, 0.02831f,-0.08660254f,0.0f, 0.03787f,-0.07431448f,0.0f};
    float posicionesoriginales26[9] = {0.0f,0.0f,0.0f, 0.03787f,-0.07431448f,0.0f, 0.04580f,-0.05877853f,0.0f};
    float posicionesoriginales27[9] = {0.0f,0.0f,0.0f, 0.04580f,-0.05877853f,0.0f, 0.05173f,-0.04067366f,0.0f};
    float posicionesoriginales28[9] = {0.0f,0.0f,0.0f, 0.05173f,-0.04067366f,0.0f, 0.05536f,-0.02079117f,0.0f};
    float posicionesoriginales29[9] = {0.0f,0.0f,0.0f, 0.05536f,-0.02079117f,0.0f, 0.05661f,0.0f,0.0f};
//
float destino[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino1[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino2[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino3[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino4[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino5[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino6[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino7[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino8[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino9[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino10[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino11[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino12[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino13[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino14[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino15[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino18[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino16[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino17[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino19[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino20[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino21[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino22[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino23[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino24[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino25[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino26[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino27[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino28[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};
float destino29[9] = {0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f, 0.0f,0.0f,0.0f};


//
    unsigned int VBO, VAO;
    unsigned int VBO1, VAO1;
    unsigned int VBO2, VAO2;
    unsigned int VBO3, VAO3;
    unsigned int VBO4, VAO4;
    unsigned int VBO5, VAO5;
    unsigned int VBO6, VAO6;
    unsigned int VBO7, VAO7;
    unsigned int VBO8, VAO8;
    unsigned int VBO9, VAO9;
    unsigned int VBO10, VAO10;
    unsigned int VBO11, VAO11;
    unsigned int VBO12, VAO12;
    unsigned int VBO13, VAO13;
    unsigned int VBO14, VAO14;
    unsigned int VBO15, VAO15;
    unsigned int VBO16, VAO16;
    unsigned int VBO17, VAO17;
    unsigned int VBO18, VAO18;
    unsigned int VBO19, VAO19;
    unsigned int VBO20, VAO20;
    unsigned int VBO21, VAO21;
    unsigned int VBO22, VAO22;
    unsigned int VBO23, VAO23;
    unsigned int VBO24, VAO24;
    unsigned int VBO25, VAO25;
    unsigned int VBO26, VAO26;
    unsigned int VBO27, VAO27;
    unsigned int VBO28, VAO28;
    unsigned int VBO29, VAO29;
    unsigned int vertexColorLocation;
    float red;
    float green;
    float blue;
    float paso;
    float ejexx = -1.0f + (float)rand() / RAND_MAX * 2.0f,ejeyy = -1.0f + (float)rand() / RAND_MAX * 2.0f,  tamano;
const char *vertexShaderSource ="#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos, 1.0);\n"
    "}\0";

const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "uniform vec4 ourColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = ourColor;\n"
    "}\n\0";
    unsigned int shaderprogram, vertexshader, fragmentshader;

public:
    void config(float tamaño,float centro_del_dodecaedro_eje_x, float eje_y,float r,float g,float b)
    {
        //////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////
      posiciones[0] = centro_del_dodecaedro_eje_x; posiciones[1] = eje_y;     posiciones[3] *= tamaño; posiciones[4] *= tamaño; posiciones[6] *= tamaño; posiciones[7] *= tamaño;
      posiciones1[0] = centro_del_dodecaedro_eje_x; posiciones1[1] = eje_y;   posiciones1[3] *= tamaño; posiciones1[4] *= tamaño; posiciones1[6] *= tamaño; posiciones1[7] *= tamaño;
      posiciones2[0] = centro_del_dodecaedro_eje_x; posiciones2[1] = eje_y;   posiciones2[3] *= tamaño; posiciones2[4] *= tamaño; posiciones2[6] *= tamaño; posiciones2[7] *= tamaño;
      posiciones3[0] = centro_del_dodecaedro_eje_x; posiciones3[1] = eje_y;   posiciones3[3] *= tamaño; posiciones3[4] *= tamaño; posiciones3[6] *= tamaño; posiciones3[7] *= tamaño;
      posiciones4[0] = centro_del_dodecaedro_eje_x; posiciones4[1] = eje_y;   posiciones4[3] *= tamaño; posiciones4[4] *= tamaño; posiciones4[6] *= tamaño; posiciones4[7] *= tamaño;
      posiciones5[0] = centro_del_dodecaedro_eje_x; posiciones5[1] = eje_y;   posiciones5[3] *= tamaño; posiciones5[4] *= tamaño; posiciones5[6] *= tamaño; posiciones5[7] *= tamaño;
      posiciones6[0] = centro_del_dodecaedro_eje_x; posiciones6[1] = eje_y;   posiciones6[3] *= tamaño; posiciones6[4] *= tamaño; posiciones6[6] *= tamaño; posiciones6[7] *= tamaño;
      posiciones7[0] = centro_del_dodecaedro_eje_x; posiciones7[1] = eje_y;   posiciones7[3] *= tamaño; posiciones7[4] *= tamaño; posiciones7[6] *= tamaño; posiciones7[7] *= tamaño;     
      posiciones8[0] = centro_del_dodecaedro_eje_x; posiciones8[1] = eje_y;   posiciones8[3] *= tamaño; posiciones8[4] *= tamaño; posiciones8[6] *= tamaño; posiciones8[7] *= tamaño;
      posiciones9[0] = centro_del_dodecaedro_eje_x; posiciones9[1] = eje_y;   posiciones9[3] *= tamaño; posiciones9[4] *= tamaño; posiciones9[6] *= tamaño; posiciones9[7] *= tamaño;
      posiciones10[0] = centro_del_dodecaedro_eje_x; posiciones10[1] = eje_y; posiciones10[3] *= tamaño; posiciones10[4] *= tamaño; posiciones10[6] *= tamaño; posiciones10[7] *= tamaño;
      posiciones11[0] = centro_del_dodecaedro_eje_x; posiciones11[1] = eje_y; posiciones11[3] *= tamaño; posiciones11[4] *= tamaño; posiciones11[6] *= tamaño; posiciones11[7] *= tamaño;
      posiciones12[0] = centro_del_dodecaedro_eje_x; posiciones12[1] = eje_y; posiciones12[3] *= tamaño; posiciones12[4] *= tamaño; posiciones12[6] *= tamaño; posiciones12[7] *= tamaño;
      posiciones13[0] = centro_del_dodecaedro_eje_x; posiciones13[1] = eje_y; posiciones13[3] *= tamaño; posiciones13[4] *= tamaño; posiciones13[6] *= tamaño; posiciones13[7] *= tamaño;
      posiciones14[0] = centro_del_dodecaedro_eje_x; posiciones14[1] = eje_y; posiciones14[3] *= tamaño; posiciones14[4] *= tamaño; posiciones14[6] *= tamaño; posiciones14[7] *= tamaño;
      posiciones15[0] = centro_del_dodecaedro_eje_x; posiciones15[1] = eje_y; posiciones15[3] *= tamaño; posiciones15[4] *= tamaño; posiciones15[6] *= tamaño; posiciones15[7] *= tamaño;
      posiciones16[0] = centro_del_dodecaedro_eje_x; posiciones16[1] = eje_y; posiciones16[3] *= tamaño; posiciones16[4] *= tamaño; posiciones16[6] *= tamaño; posiciones16[7] *= tamaño;
      posiciones17[0] = centro_del_dodecaedro_eje_x; posiciones17[1] = eje_y; posiciones17[3] *= tamaño; posiciones17[4] *= tamaño; posiciones17[6] *= tamaño; posiciones17[7] *= tamaño;
      posiciones18[0] = centro_del_dodecaedro_eje_x; posiciones18[1] = eje_y; posiciones18[3] *= tamaño; posiciones18[4] *= tamaño; posiciones18[6] *= tamaño; posiciones18[7] *= tamaño;
      posiciones19[0] = centro_del_dodecaedro_eje_x; posiciones19[1] = eje_y; posiciones19[3] *= tamaño; posiciones19[4] *= tamaño; posiciones19[6] *= tamaño; posiciones19[7] *= tamaño;
      posiciones20[0] = centro_del_dodecaedro_eje_x; posiciones20[1] = eje_y; posiciones20[3] *= tamaño; posiciones20[4] *= tamaño; posiciones20[6] *= tamaño; posiciones20[7] *= tamaño;
      posiciones21[0] = centro_del_dodecaedro_eje_x; posiciones21[1] = eje_y; posiciones21[3] *= tamaño; posiciones21[4] *= tamaño; posiciones21[6] *= tamaño; posiciones21[7] *= tamaño;
      posiciones22[0] = centro_del_dodecaedro_eje_x; posiciones22[1] = eje_y; posiciones22[3] *= tamaño; posiciones22[4] *= tamaño; posiciones22[6] *= tamaño; posiciones22[7] *= tamaño;
      posiciones23[0] = centro_del_dodecaedro_eje_x; posiciones23[1] = eje_y; posiciones23[3] *= tamaño; posiciones23[4] *= tamaño; posiciones23[6] *= tamaño; posiciones23[7] *= tamaño;
      posiciones24[0] = centro_del_dodecaedro_eje_x; posiciones24[1] = eje_y; posiciones24[3] *= tamaño; posiciones24[4] *= tamaño; posiciones24[6] *= tamaño; posiciones24[7] *= tamaño;
      posiciones25[0] = centro_del_dodecaedro_eje_x; posiciones25[1] = eje_y; posiciones25[3] *= tamaño; posiciones25[4] *= tamaño; posiciones25[6] *= tamaño; posiciones25[7] *= tamaño;
      posiciones26[0] = centro_del_dodecaedro_eje_x; posiciones26[1] = eje_y; posiciones26[3] *= tamaño; posiciones26[4] *= tamaño; posiciones26[6] *= tamaño; posiciones26[7] *= tamaño;
      posiciones27[0] = centro_del_dodecaedro_eje_x; posiciones27[1] = eje_y; posiciones27[3] *= tamaño; posiciones27[4] *= tamaño; posiciones27[6] *= tamaño; posiciones27[7] *= tamaño;
      posiciones28[0] = centro_del_dodecaedro_eje_x; posiciones28[1] = eje_y; posiciones28[3] *= tamaño; posiciones28[4] *= tamaño; posiciones28[6] *= tamaño; posiciones28[7] *= tamaño;
      posiciones29[0] = centro_del_dodecaedro_eje_x; posiciones29[1] = eje_y; posiciones29[3] *= tamaño; posiciones29[4] *= tamaño; posiciones29[6] *= tamaño; posiciones29[7] *= tamaño;
              posiciones[3] += centro_del_dodecaedro_eje_x; posiciones[4] += eje_y; posiciones[6] += centro_del_dodecaedro_eje_x; posiciones[7] += eje_y;
posiciones1[3] += centro_del_dodecaedro_eje_x; posiciones1[4] += eje_y; posiciones1[6] += centro_del_dodecaedro_eje_x; posiciones1[7] += eje_y;
posiciones2[3] += centro_del_dodecaedro_eje_x; posiciones2[4] += eje_y; posiciones2[6] += centro_del_dodecaedro_eje_x; posiciones2[7] += eje_y;
posiciones3[3] += centro_del_dodecaedro_eje_x; posiciones3[4] += eje_y; posiciones3[6] += centro_del_dodecaedro_eje_x; posiciones3[7] += eje_y;
posiciones4[3] += centro_del_dodecaedro_eje_x; posiciones4[4] += eje_y; posiciones4[6] += centro_del_dodecaedro_eje_x; posiciones4[7] += eje_y;
posiciones5[3] += centro_del_dodecaedro_eje_x; posiciones5[4] += eje_y; posiciones5[6] += centro_del_dodecaedro_eje_x; posiciones5[7] += eje_y;
posiciones6[3] += centro_del_dodecaedro_eje_x; posiciones6[4] += eje_y; posiciones6[6] += centro_del_dodecaedro_eje_x; posiciones6[7] += eje_y;
posiciones7[3] += centro_del_dodecaedro_eje_x; posiciones7[4] += eje_y; posiciones7[6] += centro_del_dodecaedro_eje_x; posiciones7[7] += eje_y;     
posiciones8[3] += centro_del_dodecaedro_eje_x; posiciones8[4] += eje_y; posiciones8[6] += centro_del_dodecaedro_eje_x; posiciones8[7] += eje_y;
posiciones9[3] += centro_del_dodecaedro_eje_x; posiciones9[4] += eje_y; posiciones9[6] += centro_del_dodecaedro_eje_x; posiciones9[7] += eje_y;
 posiciones10[3] += centro_del_dodecaedro_eje_x; posiciones10[4] += eje_y; posiciones10[6] += centro_del_dodecaedro_eje_x; posiciones10[7] += eje_y;
 posiciones11[3] += centro_del_dodecaedro_eje_x; posiciones11[4] += eje_y; posiciones11[6] += centro_del_dodecaedro_eje_x; posiciones11[7] += eje_y;
 posiciones12[3] += centro_del_dodecaedro_eje_x; posiciones12[4] += eje_y; posiciones12[6] += centro_del_dodecaedro_eje_x; posiciones12[7] += eje_y;
 posiciones13[3] += centro_del_dodecaedro_eje_x; posiciones13[4] += eje_y; posiciones13[6] += centro_del_dodecaedro_eje_x; posiciones13[7] += eje_y;
 posiciones14[3] += centro_del_dodecaedro_eje_x; posiciones14[4] += eje_y; posiciones14[6] += centro_del_dodecaedro_eje_x; posiciones14[7] += eje_y;
 posiciones15[3] += centro_del_dodecaedro_eje_x; posiciones15[4] += eje_y; posiciones15[6] += centro_del_dodecaedro_eje_x; posiciones15[7] += eje_y;
 posiciones16[3] += centro_del_dodecaedro_eje_x; posiciones16[4] += eje_y; posiciones16[6] += centro_del_dodecaedro_eje_x; posiciones16[7] += eje_y;
 posiciones17[3] += centro_del_dodecaedro_eje_x; posiciones17[4] += eje_y; posiciones17[6] += centro_del_dodecaedro_eje_x; posiciones17[7] += eje_y;
 posiciones18[3] += centro_del_dodecaedro_eje_x; posiciones18[4] += eje_y; posiciones18[6] += centro_del_dodecaedro_eje_x; posiciones18[7] += eje_y;
 posiciones19[3] += centro_del_dodecaedro_eje_x; posiciones19[4] += eje_y; posiciones19[6] += centro_del_dodecaedro_eje_x; posiciones19[7] += eje_y;
 posiciones20[3] += centro_del_dodecaedro_eje_x; posiciones20[4] += eje_y; posiciones20[6] += centro_del_dodecaedro_eje_x; posiciones20[7] += eje_y;
 posiciones21[3] += centro_del_dodecaedro_eje_x; posiciones21[4] += eje_y; posiciones21[6] += centro_del_dodecaedro_eje_x; posiciones21[7] += eje_y;
 posiciones22[3] += centro_del_dodecaedro_eje_x; posiciones22[4] += eje_y; posiciones22[6] += centro_del_dodecaedro_eje_x; posiciones22[7] += eje_y;
 posiciones23[3] += centro_del_dodecaedro_eje_x; posiciones23[4] += eje_y; posiciones23[6] += centro_del_dodecaedro_eje_x; posiciones23[7] += eje_y;
 posiciones24[3] += centro_del_dodecaedro_eje_x; posiciones24[4] += eje_y; posiciones24[6] += centro_del_dodecaedro_eje_x; posiciones24[7] += eje_y;
 posiciones25[3] += centro_del_dodecaedro_eje_x; posiciones25[4] += eje_y; posiciones25[6] += centro_del_dodecaedro_eje_x; posiciones25[7] += eje_y;
 posiciones26[3] += centro_del_dodecaedro_eje_x; posiciones26[4] += eje_y; posiciones26[6] += centro_del_dodecaedro_eje_x; posiciones26[7] += eje_y;
 posiciones27[3] += centro_del_dodecaedro_eje_x; posiciones27[4] += eje_y; posiciones27[6] += centro_del_dodecaedro_eje_x; posiciones27[7] += eje_y;
 posiciones28[3] += centro_del_dodecaedro_eje_x; posiciones28[4] += eje_y; posiciones28[6] += centro_del_dodecaedro_eje_x; posiciones28[7] += eje_y;
 posiciones29[3] += centro_del_dodecaedro_eje_x; posiciones29[4] += eje_y; posiciones29[6] += centro_del_dodecaedro_eje_x; posiciones29[7] += eje_y;

      generarbuffers(VBO,VAO, posiciones,9,true);
      generarbuffers(VBO1,VAO1,posiciones1,9,true);
      generarbuffers(VBO2,VAO2,posiciones2,9,true);
      generarbuffers(VBO3,VAO3,posiciones3,9,true);
      generarbuffers(VBO4,VAO4,posiciones4,9,true);
      generarbuffers(VBO5,VAO5,posiciones5,9,true);
      generarbuffers(VBO6,VAO6,posiciones6,9,true);
      generarbuffers(VBO7,VAO7,posiciones7,9,true);
      generarbuffers(VBO8,VAO8,posiciones8,9,true);
      generarbuffers(VBO9,VAO9,posiciones9,9,true);
      generarbuffers(VBO10,VAO10,posiciones10,9,true);
      generarbuffers(VBO11,VAO11,posiciones11,9,true);
      generarbuffers(VBO12,VAO12,posiciones12,9,true);
      generarbuffers(VBO13,VAO13,posiciones13,9,true);
      generarbuffers(VBO14,VAO14,posiciones14,9,true);
      generarbuffers(VBO15,VAO15,posiciones15,9,true);
      generarbuffers(VBO16,VAO16,posiciones16,9,true);
      generarbuffers(VBO17,VAO17,posiciones17,9,true);
      generarbuffers(VBO18,VAO18,posiciones18,9,true);
      generarbuffers(VBO19,VAO19,posiciones19,9,true);
      generarbuffers(VBO20,VAO20,posiciones20,9,true);
      generarbuffers(VBO21,VAO21,posiciones21,9,true);
      generarbuffers(VBO22,VAO22,posiciones22,9,true);
      generarbuffers(VBO23,VAO23,posiciones23,9,true);
      generarbuffers(VBO24,VAO24,posiciones24,9,true);
      generarbuffers(VBO25,VAO25,posiciones25,9,true);
      generarbuffers(VBO26,VAO26,posiciones26,9,true);
      generarbuffers(VBO27,VAO27,posiciones27,9,true);
      generarbuffers(VBO28,VAO28,posiciones28,9,true);
      generarbuffers(VBO29,VAO29,posiciones29,9,true);
    generarshader(shaderprogram,vertexshader,fragmentshader,vertexShaderSource,fragmentShaderSource);



       

 ejexx = roundf(ejexx * 100.0f) / 100.0f;
  ejeyy = roundf(ejeyy * 100.0f) / 100.0f;

   tamano = tamaño;
   red = r;
   green = g;
   blue = b; 











    }
    void drwcircl()
    {
      drw(true,VBO,VAO,shaderprogram,3,9,posiciones,GL_TRIANGLES);
      drw(true,VBO1,VAO1,shaderprogram,3,9,posiciones1,GL_TRIANGLES);
      drw(true,VBO2,VAO2,shaderprogram,3,9,posiciones2,GL_TRIANGLES);
      drw(true,VBO3,VAO3,shaderprogram,3,9,posiciones3,GL_TRIANGLES);
      drw(true,VBO4,VAO4,shaderprogram,3,9,posiciones4,GL_TRIANGLES);
      drw(true,VBO5,VAO5,shaderprogram,3,9,posiciones5,GL_TRIANGLES);
      drw(true,VBO6,VAO6,shaderprogram,3,9,posiciones6,GL_TRIANGLES);
      drw(true,VBO7,VAO7,shaderprogram,3,9,posiciones7,GL_TRIANGLES);
      drw(true,VBO8,VAO8,shaderprogram,3,9,posiciones8,GL_TRIANGLES);
      drw(true,VBO9,VAO9,shaderprogram,3,9,posiciones9,GL_TRIANGLES);
      drw(true,VBO10,VAO10,shaderprogram,3,9,posiciones10,GL_TRIANGLES);
      drw(true,VBO11,VAO11,shaderprogram,3,9,posiciones11,GL_TRIANGLES);
      drw(true,VBO12,VAO12,shaderprogram,3,9,posiciones12,GL_TRIANGLES);
      drw(true,VBO13,VAO13,shaderprogram,3,9,posiciones13,GL_TRIANGLES);
      drw(true,VBO14,VAO14,shaderprogram,3,9,posiciones14,GL_TRIANGLES);
      drw(true,VBO15,VAO15,shaderprogram,3,9,posiciones15,GL_TRIANGLES);
      drw(true,VBO16,VAO16,shaderprogram,3,9,posiciones16,GL_TRIANGLES);
      drw(true,VBO17,VAO17,shaderprogram,3,9,posiciones17,GL_TRIANGLES);
      drw(true,VBO18,VAO18,shaderprogram,3,9,posiciones18,GL_TRIANGLES);
      drw(true,VBO19,VAO19,shaderprogram,3,9,posiciones19,GL_TRIANGLES);
      drw(true,VBO20,VAO20,shaderprogram,3,9,posiciones20,GL_TRIANGLES);
      drw(true,VBO21,VAO21,shaderprogram,3,9,posiciones21,GL_TRIANGLES);
      drw(true,VBO22,VAO22,shaderprogram,3,9,posiciones22,GL_TRIANGLES);
      drw(true,VBO23,VAO23,shaderprogram,3,9,posiciones23,GL_TRIANGLES);
      drw(true,VBO24,VAO24,shaderprogram,3,9,posiciones24,GL_TRIANGLES);
      drw(true,VBO25,VAO25,shaderprogram,3,9,posiciones25,GL_TRIANGLES);
      drw(true,VBO26,VAO26,shaderprogram,3,9,posiciones26,GL_TRIANGLES);
      drw(true,VBO27,VAO27,shaderprogram,3,9,posiciones27,GL_TRIANGLES);
      drw(true,VBO28,VAO28,shaderprogram,3,9,posiciones28,GL_TRIANGLES);
      drw(true,VBO29,VAO29,shaderprogram,3,9,posiciones29,GL_TRIANGLES);

     vertexColorLocation = glGetUniformLocation(shaderprogram, "ourColor");
     glUniform4f(vertexColorLocation, red, green, blue, 1.0f);

    }
    void ir_a(float paso,float centro_del_dodecaedro_eje_x,float eje_y,bool tp,bool llego,bool random)
    { 
        if (tp == true and random == false)

        {
  

    memcpy(posiciones,   posicionesoriginales,   sizeof(posiciones));
    memcpy(posiciones1,  posicionesoriginales1,  sizeof(posiciones1));
    memcpy(posiciones2,  posicionesoriginales2,  sizeof(posiciones2));
    memcpy(posiciones3,  posicionesoriginales3,  sizeof(posiciones3));
    memcpy(posiciones4,  posicionesoriginales4,  sizeof(posiciones4));
    memcpy(posiciones5,  posicionesoriginales5,  sizeof(posiciones5));
    memcpy(posiciones6,  posicionesoriginales6,  sizeof(posiciones6));
    memcpy(posiciones7,  posicionesoriginales7,  sizeof(posiciones7));
    memcpy(posiciones8,  posicionesoriginales8,  sizeof(posiciones8));
    memcpy(posiciones9,  posicionesoriginales9,  sizeof(posiciones9));
    memcpy(posiciones10, posicionesoriginales10, sizeof(posiciones10));
    memcpy(posiciones11, posicionesoriginales11, sizeof(posiciones11));
    memcpy(posiciones12, posicionesoriginales12, sizeof(posiciones12));
    memcpy(posiciones13, posicionesoriginales13, sizeof(posiciones13));
    memcpy(posiciones14, posicionesoriginales14, sizeof(posiciones14));
    memcpy(posiciones15, posicionesoriginales15, sizeof(posiciones15));
    memcpy(posiciones16, posicionesoriginales16, sizeof(posiciones16));
    memcpy(posiciones17, posicionesoriginales17, sizeof(posiciones17));
    memcpy(posiciones18, posicionesoriginales18, sizeof(posiciones18));
    memcpy(posiciones19, posicionesoriginales19, sizeof(posiciones19));
    memcpy(posiciones20, posicionesoriginales20, sizeof(posiciones20));
    memcpy(posiciones21, posicionesoriginales21, sizeof(posiciones21));
    memcpy(posiciones22, posicionesoriginales22, sizeof(posiciones22));
    memcpy(posiciones23, posicionesoriginales23, sizeof(posiciones23));
    memcpy(posiciones24, posicionesoriginales24, sizeof(posiciones24));
    memcpy(posiciones25, posicionesoriginales25, sizeof(posiciones25));
    memcpy(posiciones26, posicionesoriginales26, sizeof(posiciones26));
    memcpy(posiciones27, posicionesoriginales27, sizeof(posiciones27));
    memcpy(posiciones28, posicionesoriginales28, sizeof(posiciones28));
    memcpy(posiciones29, posicionesoriginales29, sizeof(posiciones29));
   

      posiciones[0] = centro_del_dodecaedro_eje_x; posiciones[1] = eje_y;    
      posiciones1[0] = centro_del_dodecaedro_eje_x; posiciones1[1] = eje_y;  
      posiciones2[0] = centro_del_dodecaedro_eje_x; posiciones2[1] = eje_y;  
      posiciones3[0] = centro_del_dodecaedro_eje_x; posiciones3[1] = eje_y;  
      posiciones4[0] = centro_del_dodecaedro_eje_x; posiciones4[1] = eje_y;  
      posiciones5[0] = centro_del_dodecaedro_eje_x; posiciones5[1] = eje_y;  
      posiciones6[0] = centro_del_dodecaedro_eje_x; posiciones6[1] = eje_y;  
      posiciones7[0] = centro_del_dodecaedro_eje_x; posiciones7[1] = eje_y;  
      posiciones8[0] = centro_del_dodecaedro_eje_x; posiciones8[1] = eje_y;  
      posiciones9[0] = centro_del_dodecaedro_eje_x; posiciones9[1] = eje_y;  
      posiciones10[0] = centro_del_dodecaedro_eje_x; posiciones10[1] = eje_y;
      posiciones11[0] = centro_del_dodecaedro_eje_x; posiciones11[1] = eje_y;
      posiciones12[0] = centro_del_dodecaedro_eje_x; posiciones12[1] = eje_y;
      posiciones13[0] = centro_del_dodecaedro_eje_x; posiciones13[1] = eje_y;
      posiciones14[0] = centro_del_dodecaedro_eje_x; posiciones14[1] = eje_y;
      posiciones15[0] = centro_del_dodecaedro_eje_x; posiciones15[1] = eje_y;
      posiciones16[0] = centro_del_dodecaedro_eje_x; posiciones16[1] = eje_y;
      posiciones17[0] = centro_del_dodecaedro_eje_x; posiciones17[1] = eje_y;
      posiciones18[0] = centro_del_dodecaedro_eje_x; posiciones18[1] = eje_y;
      posiciones19[0] = centro_del_dodecaedro_eje_x; posiciones19[1] = eje_y;
      posiciones20[0] = centro_del_dodecaedro_eje_x; posiciones20[1] = eje_y;
      posiciones21[0] = centro_del_dodecaedro_eje_x; posiciones21[1] = eje_y;
      posiciones22[0] = centro_del_dodecaedro_eje_x; posiciones22[1] = eje_y;
      posiciones23[0] = centro_del_dodecaedro_eje_x; posiciones23[1] = eje_y;
      posiciones24[0] = centro_del_dodecaedro_eje_x; posiciones24[1] = eje_y;
      posiciones25[0] = centro_del_dodecaedro_eje_x; posiciones25[1] = eje_y;
      posiciones26[0] = centro_del_dodecaedro_eje_x; posiciones26[1] = eje_y;
      posiciones27[0] = centro_del_dodecaedro_eje_x; posiciones27[1] = eje_y;
      posiciones28[0] = centro_del_dodecaedro_eje_x; posiciones28[1] = eje_y;
      posiciones29[0] = centro_del_dodecaedro_eje_x; posiciones29[1] = eje_y;
              posiciones[3] += centro_del_dodecaedro_eje_x; posiciones[4] += eje_y; posiciones[6] += centro_del_dodecaedro_eje_x; posiciones[7] += eje_y;
posiciones1[3] += centro_del_dodecaedro_eje_x;  posiciones1[4] += eje_y; posiciones1[6] += centro_del_dodecaedro_eje_x; posiciones1[7] += eje_y;
posiciones2[3] += centro_del_dodecaedro_eje_x;  posiciones2[4] += eje_y; posiciones2[6] += centro_del_dodecaedro_eje_x; posiciones2[7] += eje_y;
posiciones3[3] += centro_del_dodecaedro_eje_x;  posiciones3[4] += eje_y; posiciones3[6] += centro_del_dodecaedro_eje_x; posiciones3[7] += eje_y;
posiciones4[3] += centro_del_dodecaedro_eje_x;  posiciones4[4] += eje_y; posiciones4[6] += centro_del_dodecaedro_eje_x; posiciones4[7] += eje_y;
posiciones5[3] += centro_del_dodecaedro_eje_x;  posiciones5[4] += eje_y; posiciones5[6] += centro_del_dodecaedro_eje_x; posiciones5[7] += eje_y;
posiciones6[3] += centro_del_dodecaedro_eje_x;  posiciones6[4] += eje_y; posiciones6[6] += centro_del_dodecaedro_eje_x; posiciones6[7] += eje_y;
posiciones7[3] += centro_del_dodecaedro_eje_x;  posiciones7[4] += eje_y; posiciones7[6] += centro_del_dodecaedro_eje_x; posiciones7[7] += eje_y;     
posiciones8[3] += centro_del_dodecaedro_eje_x;  posiciones8[4] += eje_y; posiciones8[6] += centro_del_dodecaedro_eje_x; posiciones8[7] += eje_y;
posiciones9[3] += centro_del_dodecaedro_eje_x;  posiciones9[4] += eje_y; posiciones9[6] += centro_del_dodecaedro_eje_x; posiciones9[7] += eje_y;
 posiciones10[3] += centro_del_dodecaedro_eje_x; posiciones10[4] += eje_y; posiciones10[6] += centro_del_dodecaedro_eje_x; posiciones10[7] += eje_y;
 posiciones11[3] += centro_del_dodecaedro_eje_x; posiciones11[4] += eje_y; posiciones11[6] += centro_del_dodecaedro_eje_x; posiciones11[7] += eje_y;
 posiciones12[3] += centro_del_dodecaedro_eje_x; posiciones12[4] += eje_y; posiciones12[6] += centro_del_dodecaedro_eje_x; posiciones12[7] += eje_y;
 posiciones13[3] += centro_del_dodecaedro_eje_x; posiciones13[4] += eje_y; posiciones13[6] += centro_del_dodecaedro_eje_x; posiciones13[7] += eje_y;
 posiciones14[3] += centro_del_dodecaedro_eje_x; posiciones14[4] += eje_y; posiciones14[6] += centro_del_dodecaedro_eje_x; posiciones14[7] += eje_y;
 posiciones15[3] += centro_del_dodecaedro_eje_x; posiciones15[4] += eje_y; posiciones15[6] += centro_del_dodecaedro_eje_x; posiciones15[7] += eje_y;
 posiciones16[3] += centro_del_dodecaedro_eje_x; posiciones16[4] += eje_y; posiciones16[6] += centro_del_dodecaedro_eje_x; posiciones16[7] += eje_y;
 posiciones17[3] += centro_del_dodecaedro_eje_x; posiciones17[4] += eje_y; posiciones17[6] += centro_del_dodecaedro_eje_x; posiciones17[7] += eje_y;
 posiciones18[3] += centro_del_dodecaedro_eje_x; posiciones18[4] += eje_y; posiciones18[6] += centro_del_dodecaedro_eje_x; posiciones18[7] += eje_y;
 posiciones19[3] += centro_del_dodecaedro_eje_x; posiciones19[4] += eje_y; posiciones19[6] += centro_del_dodecaedro_eje_x; posiciones19[7] += eje_y;
 posiciones20[3] += centro_del_dodecaedro_eje_x; posiciones20[4] += eje_y; posiciones20[6] += centro_del_dodecaedro_eje_x; posiciones20[7] += eje_y;
 posiciones21[3] += centro_del_dodecaedro_eje_x; posiciones21[4] += eje_y; posiciones21[6] += centro_del_dodecaedro_eje_x; posiciones21[7] += eje_y;
 posiciones22[3] += centro_del_dodecaedro_eje_x; posiciones22[4] += eje_y; posiciones22[6] += centro_del_dodecaedro_eje_x; posiciones22[7] += eje_y;
 posiciones23[3] += centro_del_dodecaedro_eje_x; posiciones23[4] += eje_y; posiciones23[6] += centro_del_dodecaedro_eje_x; posiciones23[7] += eje_y;
 posiciones24[3] += centro_del_dodecaedro_eje_x; posiciones24[4] += eje_y; posiciones24[6] += centro_del_dodecaedro_eje_x; posiciones24[7] += eje_y;
 posiciones25[3] += centro_del_dodecaedro_eje_x; posiciones25[4] += eje_y; posiciones25[6] += centro_del_dodecaedro_eje_x; posiciones25[7] += eje_y;
 posiciones26[3] += centro_del_dodecaedro_eje_x; posiciones26[4] += eje_y; posiciones26[6] += centro_del_dodecaedro_eje_x; posiciones26[7] += eje_y;
 posiciones27[3] += centro_del_dodecaedro_eje_x; posiciones27[4] += eje_y; posiciones27[6] += centro_del_dodecaedro_eje_x; posiciones27[7] += eje_y;
 posiciones28[3] += centro_del_dodecaedro_eje_x; posiciones28[4] += eje_y; posiciones28[6] += centro_del_dodecaedro_eje_x; posiciones28[7] += eje_y;
 posiciones29[3] += centro_del_dodecaedro_eje_x; posiciones29[4] += eje_y; posiciones29[6] += centro_del_dodecaedro_eje_x; posiciones29[7] += eje_y;

        }
        if ( tp == false and random == false)
        {
          mover(posicionesoriginales, destino, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales1, destino1, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales2, destino2, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales3, destino3, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales4, destino4, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales5, destino5, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales6, destino6, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales7, destino7, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales8, destino8, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales9, destino9, centro_del_dodecaedro_eje_x, eje_y);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             //y
mover(posicionesoriginales10, destino10, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales11, destino11, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales12, destino12, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales13, destino13, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales14, destino14, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales15, destino15, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales16, destino16, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales17, destino17, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales18, destino18, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales19, destino19, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales20, destino20, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales21, destino21, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales22, destino22, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales23, destino23, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales24, destino24, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales25, destino25, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales26, destino26, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales27, destino27, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales28, destino28, centro_del_dodecaedro_eje_x, eje_y);
mover(posicionesoriginales29, destino29, centro_del_dodecaedro_eje_x, eje_y);
ir_destino(paso, destino, posiciones);
ir_destino(paso, destino1, posiciones1);
ir_destino(paso, destino2, posiciones2);
ir_destino(paso, destino3, posiciones3);
ir_destino(paso, destino4, posiciones4);
ir_destino(paso, destino5, posiciones5);
ir_destino(paso, destino6, posiciones6);
ir_destino(paso, destino7, posiciones7);
ir_destino(paso, destino8, posiciones8);
ir_destino(paso, destino9, posiciones9);
ir_destino(paso, destino10, posiciones10);
ir_destino(paso, destino11, posiciones11);
ir_destino(paso, destino12, posiciones12);
ir_destino(paso, destino13, posiciones13);
ir_destino(paso, destino14, posiciones14);
ir_destino(paso, destino15, posiciones15);
ir_destino(paso, destino16, posiciones16);
ir_destino(paso, destino17, posiciones17);
ir_destino(paso, destino18, posiciones18);
ir_destino(paso, destino19, posiciones19); 
ir_destino(paso, destino20, posiciones20);
ir_destino(paso, destino21, posiciones21);
ir_destino(paso, destino22, posiciones22);
ir_destino(paso, destino23, posiciones23);
ir_destino(paso, destino24, posiciones24);
ir_destino(paso, destino25, posiciones25);
ir_destino(paso, destino26, posiciones26);
ir_destino(paso, destino27, posiciones27);
ir_destino(paso, destino28, posiciones28);
ir_destino(paso, destino29, posiciones29);

        }
        if (posiciones[0] == centro_del_dodecaedro_eje_x and posiciones[1] == eje_y)
        {
          llego = true;
        }
        else
        {
llego = false;
        }
        std::cout
<< posiciones[0] << " " << destino[0] << '\n'
<< posiciones[3] << " " << destino[3] << '\n'
<< posiciones[6] << " " << destino[6] << '\n';

        if (llego == true and random == true)
        {
                memcpy(posiciones,   posicionesoriginales,   sizeof(posiciones));
    memcpy(posiciones1,  posicionesoriginales1,  sizeof(posiciones1));
    memcpy(posiciones2,  posicionesoriginales2,  sizeof(posiciones2));
    memcpy(posiciones3,  posicionesoriginales3,  sizeof(posiciones3));
    memcpy(posiciones4,  posicionesoriginales4,  sizeof(posiciones4));
    memcpy(posiciones5,  posicionesoriginales5,  sizeof(posiciones5));
    memcpy(posiciones6,  posicionesoriginales6,  sizeof(posiciones6));
    memcpy(posiciones7,  posicionesoriginales7,  sizeof(posiciones7));
    memcpy(posiciones8,  posicionesoriginales8,  sizeof(posiciones8));
    memcpy(posiciones9,  posicionesoriginales9,  sizeof(posiciones9));
    memcpy(posiciones10, posicionesoriginales10, sizeof(posiciones10));
    memcpy(posiciones11, posicionesoriginales11, sizeof(posiciones11));
    memcpy(posiciones12, posicionesoriginales12, sizeof(posiciones12));
    memcpy(posiciones13, posicionesoriginales13, sizeof(posiciones13));
    memcpy(posiciones14, posicionesoriginales14, sizeof(posiciones14));
    memcpy(posiciones15, posicionesoriginales15, sizeof(posiciones15));
    memcpy(posiciones16, posicionesoriginales16, sizeof(posiciones16));
    memcpy(posiciones17, posicionesoriginales17, sizeof(posiciones17));
    memcpy(posiciones18, posicionesoriginales18, sizeof(posiciones18));
    memcpy(posiciones19, posicionesoriginales19, sizeof(posiciones19));
    memcpy(posiciones20, posicionesoriginales20, sizeof(posiciones20));
    memcpy(posiciones21, posicionesoriginales21, sizeof(posiciones21));
    memcpy(posiciones22, posicionesoriginales22, sizeof(posiciones22));
    memcpy(posiciones23, posicionesoriginales23, sizeof(posiciones23));
    memcpy(posiciones24, posicionesoriginales24, sizeof(posiciones24));
    memcpy(posiciones25, posicionesoriginales25, sizeof(posiciones25));
    memcpy(posiciones26, posicionesoriginales26, sizeof(posiciones26));
    memcpy(posiciones27, posicionesoriginales27, sizeof(posiciones27));
    memcpy(posiciones28, posicionesoriginales28, sizeof(posiciones28));
    memcpy(posiciones29, posicionesoriginales29, sizeof(posiciones29));
 posiciones[3] *= tamano;  posiciones[4] *= tamano;   posiciones[6] *= tamano;   posiciones[7] *= tamano;
 posiciones1[3] *= tamano; posiciones1[4] *= tamano;  posiciones1[6] *= tamano;  posiciones1[7] *= tamano;
 posiciones2[3] *= tamano; posiciones2[4] *= tamano;  posiciones2[6] *= tamano;  posiciones2[7] *= tamano;
 posiciones3[3] *= tamano; posiciones3[4] *= tamano;  posiciones3[6] *= tamano;  posiciones3[7] *= tamano;
 posiciones4[3] *= tamano; posiciones4[4] *= tamano;  posiciones4[6] *= tamano;  posiciones4[7] *= tamano;
 posiciones5[3] *= tamano; posiciones5[4] *= tamano;  posiciones5[6] *= tamano;  posiciones5[7] *= tamano;
 posiciones6[3] *= tamano; posiciones6[4] *= tamano;  posiciones6[6] *= tamano;  posiciones6[7] *= tamano;
 posiciones7[3] *= tamano; posiciones7[4] *= tamano;  posiciones7[6] *= tamano;  posiciones7[7] *= tamano;     
 posiciones8[3] *= tamano; posiciones8[4] *= tamano;  posiciones8[6] *= tamano;  posiciones8[7] *= tamano;
 posiciones9[3] *= tamano; posiciones9[4] *= tamano;  posiciones9[6] *= tamano;  posiciones9[7] *= tamano;
posiciones10[3] *= tamano; posiciones10[4] *= tamano; posiciones10[6] *= tamano; posiciones10[7] *= tamano;
posiciones11[3] *= tamano; posiciones11[4] *= tamano; posiciones11[6] *= tamano; posiciones11[7] *= tamano;
posiciones12[3] *= tamano; posiciones12[4] *= tamano; posiciones12[6] *= tamano; posiciones12[7] *= tamano;
posiciones13[3] *= tamano; posiciones13[4] *= tamano; posiciones13[6] *= tamano; posiciones13[7] *= tamano;
posiciones14[3] *= tamano; posiciones14[4] *= tamano; posiciones14[6] *= tamano; posiciones14[7] *= tamano;
posiciones15[3] *= tamano; posiciones15[4] *= tamano; posiciones15[6] *= tamano; posiciones15[7] *= tamano;
posiciones16[3] *= tamano; posiciones16[4] *= tamano; posiciones16[6] *= tamano; posiciones16[7] *= tamano;
posiciones17[3] *= tamano; posiciones17[4] *= tamano; posiciones17[6] *= tamano; posiciones17[7] *= tamano;
posiciones18[3] *= tamano; posiciones18[4] *= tamano; posiciones18[6] *= tamano; posiciones18[7] *= tamano;
posiciones19[3] *= tamano; posiciones19[4] *= tamano; posiciones19[6] *= tamano; posiciones19[7] *= tamano;
posiciones20[3] *= tamano; posiciones20[4] *= tamano; posiciones20[6] *= tamano; posiciones20[7] *= tamano;
posiciones21[3] *= tamano; posiciones21[4] *= tamano; posiciones21[6] *= tamano; posiciones21[7] *= tamano;
posiciones22[3] *= tamano; posiciones22[4] *= tamano; posiciones22[6] *= tamano; posiciones22[7] *= tamano;
posiciones23[3] *= tamano; posiciones23[4] *= tamano; posiciones23[6] *= tamano; posiciones23[7] *= tamano;
posiciones24[3] *= tamano; posiciones24[4] *= tamano; posiciones24[6] *= tamano; posiciones24[7] *= tamano;
posiciones25[3] *= tamano; posiciones25[4] *= tamano; posiciones25[6] *= tamano; posiciones25[7] *= tamano;
posiciones26[3] *= tamano; posiciones26[4] *= tamano; posiciones26[6] *= tamano; posiciones26[7] *= tamano;
posiciones27[3] *= tamano; posiciones27[4] *= tamano; posiciones27[6] *= tamano; posiciones27[7] *= tamano;
posiciones28[3] *= tamano; posiciones28[4] *= tamano; posiciones28[6] *= tamano; posiciones28[7] *= tamano;
posiciones29[3] *= tamano; posiciones29[4] *= tamano; posiciones29[6] *= tamano; posiciones29[7] *= tamano;
        }
        
    
    if (random == true and llego == true)
    {
        ejexx =   -1.0f + (float)rand() / RAND_MAX * 2.0f;
        ejeyy =   -1.0f + (float)rand() / RAND_MAX * 2.0f;
        
 ejexx = roundf(ejexx * 100.0f) / 100.0f;
  ejeyy = roundf(ejeyy * 100.0f) / 100.0f;
    }
    
    if (tp == false and random == true)
    {
 mover(posicionesoriginales, destino, ejexx, ejeyy);
mover(posicionesoriginales1, destino1, ejexx, ejeyy);
mover(posicionesoriginales2, destino2, ejexx, ejeyy);
mover(posicionesoriginales3, destino3, ejexx, ejeyy);
mover(posicionesoriginales4, destino4, ejexx, ejeyy);
mover(posicionesoriginales5, destino5, ejexx, ejeyy);
mover(posicionesoriginales6, destino6, ejexx, ejeyy);
mover(posicionesoriginales7, destino7, ejexx, ejeyy);
mover(posicionesoriginales8, destino8, ejexx, ejeyy);
mover(posicionesoriginales9, destino9, ejexx, ejeyy);
mover(posicionesoriginales10, destino10, ejexx, ejeyy);
mover(posicionesoriginales11, destino11, ejexx, ejeyy);
mover(posicionesoriginales12, destino12, ejexx, ejeyy);
mover(posicionesoriginales13, destino13, ejexx, ejeyy);
mover(posicionesoriginales14, destino14, ejexx, ejeyy);
mover(posicionesoriginales15, destino15, ejexx, ejeyy);
mover(posicionesoriginales16, destino16, ejexx, ejeyy);
mover(posicionesoriginales17, destino17, ejexx, ejeyy);
mover(posicionesoriginales18, destino18, ejexx, ejeyy);
mover(posicionesoriginales19, destino19, ejexx, ejeyy);
mover(posicionesoriginales20, destino20, ejexx, ejeyy);
mover(posicionesoriginales21, destino21, ejexx, ejeyy);
mover(posicionesoriginales22, destino22, ejexx, ejeyy);
mover(posicionesoriginales23, destino23, ejexx, ejeyy);
mover(posicionesoriginales24, destino24, ejexx, ejeyy);
mover(posicionesoriginales25, destino25, ejexx, ejeyy);
mover(posicionesoriginales26, destino26, ejexx, ejeyy);
mover(posicionesoriginales27, destino27, ejexx, ejeyy);
mover(posicionesoriginales28, destino28, ejexx, ejeyy);
mover(posicionesoriginales29, destino29, ejexx, ejeyy);
ir_destino(paso, destino, posiciones);
ir_destino(paso, destino1, posiciones1);
ir_destino(paso, destino2, posiciones2);
ir_destino(paso, destino3, posiciones3);
ir_destino(paso, destino4, posiciones4);
ir_destino(paso, destino5, posiciones5);
ir_destino(paso, destino6, posiciones6);
ir_destino(paso, destino7, posiciones7);
ir_destino(paso, destino8, posiciones8);
ir_destino(paso, destino9, posiciones9);
ir_destino(paso, destino10, posiciones10);
ir_destino(paso, destino11, posiciones11);
ir_destino(paso, destino12, posiciones12);
ir_destino(paso, destino13, posiciones13);
ir_destino(paso, destino14, posiciones14);
ir_destino(paso, destino15, posiciones15);
ir_destino(paso, destino16, posiciones16);
ir_destino(paso, destino17, posiciones17);
ir_destino(paso, destino18, posiciones18);
ir_destino(paso, destino19, posiciones19);
ir_destino(paso, destino20, posiciones20);
ir_destino(paso, destino21, posiciones21);
ir_destino(paso, destino22, posiciones22);
ir_destino(paso, destino23, posiciones23);
ir_destino(paso, destino24, posiciones24);
ir_destino(paso, destino25, posiciones25);
ir_destino(paso, destino26, posiciones26);
ir_destino(paso, destino27, posiciones27);
ir_destino(paso, destino28, posiciones28);
ir_destino(paso, destino29, posiciones29);

    }
    if (tp == true and random == true)
    {
    memcpy(posiciones,   posicionesoriginales,   sizeof(posiciones));
    memcpy(posiciones1,  posicionesoriginales1,  sizeof(posiciones1));
    memcpy(posiciones2,  posicionesoriginales2,  sizeof(posiciones2));
    memcpy(posiciones3,  posicionesoriginales3,  sizeof(posiciones3));
    memcpy(posiciones4,  posicionesoriginales4,  sizeof(posiciones4));
    memcpy(posiciones5,  posicionesoriginales5,  sizeof(posiciones5));
    memcpy(posiciones6,  posicionesoriginales6,  sizeof(posiciones6));
    memcpy(posiciones7,  posicionesoriginales7,  sizeof(posiciones7));
    memcpy(posiciones8,  posicionesoriginales8,  sizeof(posiciones8));
    memcpy(posiciones9,  posicionesoriginales9,  sizeof(posiciones9));
    memcpy(posiciones10, posicionesoriginales10, sizeof(posiciones10));
    memcpy(posiciones11, posicionesoriginales11, sizeof(posiciones11));
    memcpy(posiciones12, posicionesoriginales12, sizeof(posiciones12));
    memcpy(posiciones13, posicionesoriginales13, sizeof(posiciones13));
    memcpy(posiciones14, posicionesoriginales14, sizeof(posiciones14));
    memcpy(posiciones15, posicionesoriginales15, sizeof(posiciones15));
    memcpy(posiciones16, posicionesoriginales16, sizeof(posiciones16));
    memcpy(posiciones17, posicionesoriginales17, sizeof(posiciones17));
    memcpy(posiciones18, posicionesoriginales18, sizeof(posiciones18));
    memcpy(posiciones19, posicionesoriginales19, sizeof(posiciones19));
    memcpy(posiciones20, posicionesoriginales20, sizeof(posiciones20));
    memcpy(posiciones21, posicionesoriginales21, sizeof(posiciones21));
    memcpy(posiciones22, posicionesoriginales22, sizeof(posiciones22));
    memcpy(posiciones23, posicionesoriginales23, sizeof(posiciones23));
    memcpy(posiciones24, posicionesoriginales24, sizeof(posiciones24));
    memcpy(posiciones25, posicionesoriginales25, sizeof(posiciones25));
    memcpy(posiciones26, posicionesoriginales26, sizeof(posiciones26));
    memcpy(posiciones27, posicionesoriginales27, sizeof(posiciones27));
    memcpy(posiciones28, posicionesoriginales28, sizeof(posiciones28));
    memcpy(posiciones29, posicionesoriginales29, sizeof(posiciones29));


      posiciones[0] =  ejexx; posiciones[1] = ejeyy;    
      posiciones1[0] = ejexx; posiciones1[1] = ejeyy;  
      posiciones2[0] = ejexx; posiciones2[1] = ejeyy;  
      posiciones3[0] = ejexx; posiciones3[1] = ejeyy;  
      posiciones4[0] = ejexx; posiciones4[1] = ejeyy;  
      posiciones5[0] = ejexx; posiciones5[1] = ejeyy;  
      posiciones6[0] = ejexx; posiciones6[1] = ejeyy;  
      posiciones7[0] = ejexx; posiciones7[1] = ejeyy;  
      posiciones8[0] = ejexx; posiciones8[1] = ejeyy;  
      posiciones9[0] = ejexx; posiciones9[1] = ejeyy;  
      posiciones10[0] = ejexx; posiciones10[1] = ejeyy;
      posiciones11[0] = ejexx; posiciones11[1] = ejeyy;
      posiciones12[0] = ejexx; posiciones12[1] = ejeyy;
      posiciones13[0] = ejexx; posiciones13[1] = ejeyy;
      posiciones14[0] = ejexx; posiciones14[1] = ejeyy;
      posiciones15[0] = ejexx; posiciones15[1] = ejeyy;
      posiciones16[0] = ejexx; posiciones16[1] = ejeyy;
      posiciones17[0] = ejexx; posiciones17[1] = ejeyy;
      posiciones18[0] = ejexx; posiciones18[1] = ejeyy;
      posiciones19[0] = ejexx; posiciones19[1] = ejeyy;
      posiciones20[0] = ejexx; posiciones20[1] = ejeyy;
      posiciones21[0] = ejexx; posiciones21[1] = ejeyy;
      posiciones22[0] = ejexx; posiciones22[1] = ejeyy;
      posiciones23[0] = ejexx; posiciones23[1] = ejeyy;
      posiciones24[0] = ejexx; posiciones24[1] = ejeyy;
      posiciones25[0] = ejexx; posiciones25[1] = ejeyy;
      posiciones26[0] = ejexx; posiciones26[1] = ejeyy;
      posiciones27[0] = ejexx; posiciones27[1] = ejeyy;
      posiciones28[0] = ejexx; posiciones28[1] = ejeyy;
      posiciones29[0] = ejexx; posiciones29[1] = ejeyy;
              posiciones[3] += ejexx; posiciones[4] += ejeyy; posiciones[6] += ejexx; posiciones[7] += ejeyy;
posiciones1[3] += ejexx;  posiciones1[4] += ejeyy; posiciones1[6] += ejexx; posiciones1[7] += ejeyy;
posiciones2[3] += ejexx;  posiciones2[4] += ejeyy; posiciones2[6] += ejexx; posiciones2[7] += ejeyy;
posiciones3[3] += ejexx;  posiciones3[4] += ejeyy; posiciones3[6] += ejexx; posiciones3[7] += ejeyy;
posiciones4[3] += ejexx;  posiciones4[4] += ejeyy; posiciones4[6] += ejexx; posiciones4[7] += ejeyy;
posiciones5[3] += ejexx;  posiciones5[4] += ejeyy; posiciones5[6] += ejexx; posiciones5[7] += ejeyy;
posiciones6[3] += ejexx;  posiciones6[4] += ejeyy; posiciones6[6] += ejexx; posiciones6[7] += ejeyy;
posiciones7[3] += ejexx;  posiciones7[4] += ejeyy; posiciones7[6] += ejexx; posiciones7[7] += ejeyy;     
posiciones8[3] += ejexx;  posiciones8[4] += ejeyy; posiciones8[6] += ejexx; posiciones8[7] += ejeyy;
posiciones9[3] += ejexx;  posiciones9[4] += ejeyy; posiciones9[6] += ejexx; posiciones9[7] += ejeyy;
 posiciones10[3] += ejexx; posiciones10[4] += ejeyy; posiciones10[6] += ejexx; posiciones10[7] += ejeyy;
 posiciones11[3] += ejexx; posiciones11[4] += ejeyy; posiciones11[6] += ejexx; posiciones11[7] += ejeyy;
 posiciones12[3] += ejexx; posiciones12[4] += ejeyy; posiciones12[6] += ejexx; posiciones12[7] += ejeyy;
 posiciones13[3] += ejexx; posiciones13[4] += ejeyy; posiciones13[6] += ejexx; posiciones13[7] += ejeyy;
 posiciones14[3] += ejexx; posiciones14[4] += ejeyy; posiciones14[6] += ejexx; posiciones14[7] += ejeyy;
 posiciones15[3] += ejexx; posiciones15[4] += ejeyy; posiciones15[6] += ejexx; posiciones15[7] += ejeyy;
 posiciones16[3] += ejexx; posiciones16[4] += ejeyy; posiciones16[6] += ejexx; posiciones16[7] += ejeyy;
 posiciones17[3] += ejexx; posiciones17[4] += ejeyy; posiciones17[6] += ejexx; posiciones17[7] += ejeyy;
 posiciones18[3] += ejexx; posiciones18[4] += ejeyy; posiciones18[6] += ejexx; posiciones18[7] += ejeyy;
 posiciones19[3] += ejexx; posiciones19[4] += ejeyy; posiciones19[6] += ejexx; posiciones19[7] += ejeyy;
 posiciones20[3] += ejexx; posiciones20[4] += ejeyy; posiciones20[6] += ejexx; posiciones20[7] += ejeyy;
 posiciones21[3] += ejexx; posiciones21[4] += ejeyy; posiciones21[6] += ejexx; posiciones21[7] += ejeyy;
 posiciones22[3] += ejexx; posiciones22[4] += ejeyy; posiciones22[6] += ejexx; posiciones22[7] += ejeyy;
 posiciones23[3] += ejexx; posiciones23[4] += ejeyy; posiciones23[6] += ejexx; posiciones23[7] += ejeyy;
 posiciones24[3] += ejexx; posiciones24[4] += ejeyy; posiciones24[6] += ejexx; posiciones24[7] += ejeyy;
 posiciones25[3] += ejexx; posiciones25[4] += ejeyy; posiciones25[6] += ejexx; posiciones25[7] += ejeyy;
 posiciones26[3] += ejexx; posiciones26[4] += ejeyy; posiciones26[6] += ejexx; posiciones26[7] += ejeyy;
 posiciones27[3] += ejexx; posiciones27[4] += ejeyy; posiciones27[6] += ejexx; posiciones27[7] += ejeyy;
 posiciones28[3] += ejexx; posiciones28[4] += ejeyy; posiciones28[6] += ejexx; posiciones28[7] += ejeyy;
 posiciones29[3] += ejexx; posiciones29[4] += ejeyy; posiciones29[6] += ejexx; posiciones29[7] += ejeyy;
    }
    
}
};
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}
class bloquete
{
private:
float minxp;
float upxp;bool clik;
float minyp;
float upyp;
float minxe;
float upxe;
float minye;
float upye;
float     izq_posici;
float     der_posici;
float   abajo_posici;
float  arriba_posici;
float    izq_posici1;
float    der_posici1;
float  abajo_posici1;
float arriba_posici1;
float   minimo_eje_x;
float   maximo_eje_x;
float   minimo_eje_y;
float   maximo_eje_y;
float  x_mouse;double mouseY;
float  y_mouse;double mouseX;
float    borde_izq;
float    borde_der;
float borde_arriba;
float  borde_abajo;
    unsigned int textrue,shadeee,vertex,frsfk,texture,vbo,vbo1,vao,vao1;
    
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
    
    float posici[24] = {
         -0.5f, - 0.5f, 0.0f,   1.0f, 0.0f, 0.0f,  1.0f, 1.0f, // top right
         -0.5f, 0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f, // bottom right
        0.5f, 0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f, // bottom left
        };
    float posici1[24] = {
         -0.5f, - 0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   0.0f, 0.0f, // top right
         -0.5f, 0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   0.0f, 1.0f, // bottom right
        0.5f, 0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   1.0f, 1.0f, // bottom left
        };
        float destino1[9] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
        float destino2[9] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
    int wi,wa,nr,lo;
    bool dynamci;
    unsigned char* da;
public:
void config(bool dyna,const char* ruta,float* posiciones)
{
    for (int i = 0; i < 48; i++)
{
    if (i < 24)
    {
        posici[i] = posiciones[i];
    }
    else
    {
        posici1[i - 24] = posiciones[i];
    }
    
}
    generarshader(shadeee,vertex,frsfk,sorf,sourv);
    generarbuffers(vbo,vao,posici,24,dyna);
    generarbuffers(vbo1,vao1,posici1,24,dyna);
    textura(ruta,textrue,shadeee,wi,wa,nr,da,lo);
    dynamci = dyna;
//
    
}
void colision(float* objeto_detectar_triangulo_1,bool& colision1,float margen,float primer_triangulo)
{

          
         minxp = std::min(std::min(posici[0], posici[8]), posici[16]);
         upxp = std::max(std::max(posici[0], posici[8]),  posici[16]);
         minyp = std::min(std::min(posici[1], posici[9]), posici[17]);
         upyp = std::max(std::max(posici[1], posici[9]),  posici[17]);
         // tr objeto_detectar
         
         if (primer_triangulo)
         {
            /* code */
         
         
         minxe = std::min(std::min(objeto_detectar_triangulo_1[0], objeto_detectar_triangulo_1[8]),objeto_detectar_triangulo_1[16]);
         upxe = std::max(std::max(objeto_detectar_triangulo_1[0], objeto_detectar_triangulo_1[8] ),objeto_detectar_triangulo_1[16]);
         minye = std::min(std::min(objeto_detectar_triangulo_1[1], objeto_detectar_triangulo_1[9] ),objeto_detectar_triangulo_1[17]);
         upye = std::max(std::max(objeto_detectar_triangulo_1[1], objeto_detectar_triangulo_1[9] ),objeto_detectar_triangulo_1[17]);
         }
         else
         {
         minxe = std::min(std::min(objeto_detectar_triangulo_1[24], objeto_detectar_triangulo_1[32]),objeto_detectar_triangulo_1[40]);
         upxe = std::max(std::max(objeto_detectar_triangulo_1[24], objeto_detectar_triangulo_1[32] ),objeto_detectar_triangulo_1[40]);
         minye = std::min(std::min(objeto_detectar_triangulo_1[25], objeto_detectar_triangulo_1[33] ),objeto_detectar_triangulo_1[41]);
         upye = std::max(std::max(objeto_detectar_triangulo_1[25], objeto_detectar_triangulo_1[33] ),objeto_detectar_triangulo_1[41]);
         }
         upxp  -= margen;
         minyp += margen;
         upyp  -= margen;
         minxp += margen;
         minxe += margen;
         upxe  -= margen;
         minye += margen;
         upye  -= margen;
          
         if (upxp >= minxe && minxp <= upxe && minyp <= upye && upyp >= minye)
         {
             colision1 = true;
         }
         else
         {
            colision1 = false;
         }

         
}
void movete(bool tp,float x,float y,float paso,float* posiciones)
{
    if (tp == true)
    {    for (int i = 0; i < 48; i++)
{
    if (i < 24)
    {
        posici[i] = posiciones[i];
    }
    else
    {
        posici1[i - 24] = posiciones[i];
    }
    
}
    }
    if (tp == false)
    {
    mover2(posici,destino1,x,y);
    mover2(posici1,destino2,x,y);
      vomandale(paso,destino1,posici);
      vomandale(paso,destino2,posici1);
    }
    
    
}
void drwa()
{
    glBindTexture(GL_TEXTURE_2D,textrue);
    drw(dynamci,vbo,vao,shadeee,3,24,posici,GL_TRIANGLES);
  //  glBindTexture(GL_TEXTURE_2D,textrue);
    drw(dynamci,vbo1,vao1,shadeee,3,24,posici1,GL_TRIANGLES);
}
void detectar_colision_4_lados(bool& colision_abajo,bool& colision_arriba, bool& colision_derecha,bool& colision_izq,float *posicione_detectar)//hacer cuatro cuadrados adentro de bloke y que esas sean las hitbox para poder detectar 
{
             izq_posici = std::min(std::min(posici[0], posici[8]),posici[16]);
             der_posici = std::max(std::max(posici[0], posici[8] ),posici[16]);
           abajo_posici = std::min(std::min(posici[1], posici[9] ),posici[17]);
          arriba_posici = std::max(std::max(posici[1], posici[9] ),posici[17]);
         //
            izq_posici1 = std::min(std::min(posici1[0], posici1[8]),posici1[16]);
            der_posici1 = std::max(std::max(posici1[0], posici1[8] ),posici1[16]);
          abajo_posici1 = std::min(std::min(posici1[1], posici1[9] ),posici1[17]);
         arriba_posici1 = std::max(std::max(posici1[1], posici1[9] ),posici1[17]);
         //
           minimo_eje_x = std::min(std::min(posicione_detectar[0], posicione_detectar[8]),posicione_detectar[16]);
           maximo_eje_x = std::max(std::max(posicione_detectar[0], posicione_detectar[8] ),posicione_detectar[16]);
           minimo_eje_y = std::min(std::min(posicione_detectar[1], posicione_detectar[9] ),posicione_detectar[17]);
           maximo_eje_y = std::max(std::max(posicione_detectar[1], posicione_detectar[9] ),posicione_detectar[17]);
         //
     // ARRIBA: si el jugador está debajo (minimo_eje_y < arriba_posici) y se acerca al techo del bloque
     if (minimo_eje_y < arriba_posici && minimo_eje_y + 0.1 >= arriba_posici && minimo_eje_x < der_posici && maximo_eje_x > izq_posici)
     {
colision_arriba = true;     }
else
{
    colision_arriba = false;
}
// DERECHA: si el jugador está a la izquierda (minimo_eje_x < der_posici) y se acerca al lado derecho del bloque
if (minimo_eje_x < der_posici && minimo_eje_x + 0.1 >= der_posici && minimo_eje_y < arriba_posici && maximo_eje_y > abajo_posici)
{
    colision_derecha = true;
}
else
{
    colision_derecha = false;
}
// IZQUIERDA: si el jugador está a la derecha (maximo_eje_x > izq_posici) y se acerca al lado izquierdo del bloque
if (maximo_eje_x > izq_posici && maximo_eje_x - 0.1 <= izq_posici && minimo_eje_y < arriba_posici && maximo_eje_y > abajo_posici)
{
colision_izq = true;}
else
{
    colision_izq = false;
}
// ABAJO: si el jugador está arriba (maximo_eje_y > abajo_posici) y se acerca al piso del bloque
if (maximo_eje_y > abajo_posici && maximo_eje_y - 0.1 <= abajo_posici && minimo_eje_x < der_posici && maximo_eje_x > izq_posici)
{
colision_abajo = true;
}
else
{
    colision_abajo = false;
}
}
void actualizar_array(float* posiciones_ext,bool copiar_a_Posiciones_internas)
{
    if (!copiar_a_Posiciones_internas) {
    for (int i = 0; i < 48; i++)
    {
        if (i < 24)
        {
            posiciones_ext[i] = posici[i];
        }
        else
        {posiciones_ext[i] = posici1[i -24];}
        
    }
}
else {
    for (int i = 0; i < 48; i++)
    {
        if (i < 24)
        {
            posici[i] = posiciones_ext[i];
        }
        else
        {posici1[i - 24] = posiciones_ext[i];} } }
}
void modo_boton(GLFWwindow* window,int GLFW_MOUSE_BUTTON,bool& press)
{


    borde_izq = std::min(std::min(std::min(std::min(std::min(posici[0],posici[8]),posici[16]),posici1[0]),posici1[8]),posici1[16]);
    borde_der = std::max(std::max(std::max(std::max(std::max(posici[0],posici[8]),posici[16]),posici1[0]),posici1[8]),posici1[16]);
 borde_arriba = std::min(std::min(std::min(std::min(std::min(posici[1],posici[9]),posici[17]),posici1[1]),posici1[9]),posici1[17]);
  borde_abajo = std::max(std::max(std::max(std::max(std::max(posici[1],posici[9]),posici[17]),posici1[1]),posici1[9]),posici1[17]);

    input_mouse(window, GLFW_MOUSE_BUTTON,press);
    glfwGetCursorPos(window, &mouseX, &mouseY);

 x_mouse = (mouseX / 1360.0f) * 2.0f - 1.0f;
 y_mouse = 1.0f - (mouseY / 768.0f) * 2.0f;
  x_mouse = (mouseX / 1360.0f) * 2.0f - 1.0f;
 y_mouse = 1.0f - (mouseY / 768.0f) * 2.0f;
input_mouse(window,GLFW_MOUSE_BUTTON_LEFT,clik);
if (x_mouse >= borde_izq and x_mouse <= borde_der and y_mouse >= borde_abajo and y_mouse <= borde_arriba and clik and press == false)
{
 press = true;}

}
};
 
void mover_wasd(GLFWwindow* window,float*& posiciones,bool press,float velocidad)
{
    input(window,GLFW_KEY_W,press);
    if (press)
    {
        posiciones[1] += velocidad;posiciones[9] += velocidad;posiciones[17] += velocidad;
    }
    input(window,GLFW_KEY_S,press);
    if (press)
    {
                posiciones[1] -= velocidad;posiciones[9] -= velocidad;posiciones[17] -= velocidad;

    }
    input(window,GLFW_KEY_D,press);
    if (press)
    {
        posiciones[0] += velocidad;posiciones[8] += velocidad;posiciones[16] += velocidad;

    }
    input(window,GLFW_KEY_A,press);
    if (press)
    {
                posiciones[0] -= velocidad;posiciones[8] -= velocidad;posiciones[16] -= velocidad;

    }
    
}
class personaje
{
private:
    /* data */
    float posiciones[24] = {        -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
    -0.65f,  0.10f, 0.0f, 0,1,0, 1,1,
    -0.65f, -0.10f, 0.0f, 0,0,1, 1,0
    };


    float posiciones1[24] = {
    // Triángulo 2
    -0.80f,  0.10f, 0.0f, 1,0,0, 0,1,
    -0.80f, -0.10f, 0.0f, 0,1,0, 0,0,
    -0.65f, -0.10f, 0.0f, 0,0,1, 1,0};
     
    unsigned int textrue,shadeee,vertex,frsfk,texture,vbo,vbo1,vao,vao1;
    bool keyprees;
     char *sorf = "#version 330 core\n"
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
     char *sourv = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "in vec3 ourColor;\n"
    "in vec2 TexCoord;\n"
    "uniform sampler2D texture1;\n"

    "void main()\n"
    "{\n"
    "   FragColor = texture(texture1, TexCoord);\n"
    "}\n\0";
        int wi,wa,nr,lo,wi1,wa1,nr1,dalc;
    bool dynamci;
    unsigned char* da;
    unsigned char* da1;
public:
void config(const char* ruta,float* posiciones_copiar)
{
      for (int i = 0; i < 48; i++)
    {
        if (i < 24)
        {
            posiciones[i] = posiciones_copiar[i];
            // debug: print copied value
            // printf("posiciones[%d]=%f\n", i, posiciones[i]);
        }
        else
        {
            posiciones1[i - 24] = posiciones_copiar[i];
            // debug: print copied value
            // printf("posiciones1[%d]=%f\n", i-24, posiciones1[i-24]);
        }
    }
    
    generarshader(shadeee,vertex,frsfk,sorf,sourv);
    generarbuffers(vbo,vao,posiciones,24,true);
    generarbuffers(vbo1,vao1,posiciones1,24,true);
    textura(ruta,textrue,shadeee,wi,wa,nr,da,lo);

}
//usar antes de la funcion config
void config_tex( char* vertexshader, char* fragmentshader)
{
    sourv = fragmentshader;
    sorf = vertexshader;
}

  void drwp()
  {
     glBindTexture(GL_TEXTURE_2D,textrue);
        drw(true,vbo,vao,shadeee,3,24,posiciones,GL_TRIANGLES);   
        drw(true,vbo1,vao1,shadeee,3,24,posiciones1,GL_TRIANGLES);
    }
  void mover_w(GLFWwindow* window,float paso,float techo)
  {input(window,GLFW_KEY_W,keyprees);
  if (keyprees and posiciones[1] < techo)
  {
   posiciones[1] += paso; posiciones[9] += paso;posiciones[17] += paso;    posiciones1[1] += paso; posiciones1[9] += paso;posiciones1[17] += paso; 

  }
  }
  void mover_s(GLFWwindow* window,float paso)
  {input(window,GLFW_KEY_S,keyprees);
   if (keyprees)
   {
        posiciones[1] -= paso; posiciones[9] -= paso;posiciones[17] -= paso;    posiciones1[1] -= paso; posiciones1[9] -= paso;posiciones1[17] -= paso; 

   }
   }
     void mover_a(GLFWwindow* window,float paso)
  {input(window,GLFW_KEY_A,keyprees);
   if (keyprees)
   {
        posiciones[0] -= paso; posiciones[8] -= paso;posiciones[16] -= paso;    posiciones1[0] -= paso; posiciones1[8] -= paso;posiciones1[16] -= paso; 

   }
   }
        void mover_d(GLFWwindow* window,float paso)
  {input(window,GLFW_KEY_D,keyprees);
   if (keyprees)
   {
        posiciones[0] += paso; posiciones[8] += paso;posiciones[16] += paso;    posiciones1[0] += paso; posiciones1[8] += paso;posiciones1[16] += paso; 

   }
   }
   void loop_flapy_version(bool graveda,float paso,float piso,float altura_salto,bool& muerto,float* posicioness)
   {if (graveda)
   {
    if (posiciones[17] >= piso)
    {
           muerto = false;     posiciones[1] -= paso; posiciones[9] -= paso;posiciones[17] -= paso;    posiciones1[1] -= paso; posiciones1[9] -= paso;posiciones1[17] -= paso; 

    }
                
    if (posiciones[17] < piso) 
    {  muerto = true; posiciones[1] += paso; posiciones[9] += paso;posiciones[17] += paso;    posiciones1[1] += paso; posiciones1[9] += paso;posiciones1[17] += paso; 
    }
for (int i = 0; i < 48; i++)
{
    if (i < 24)
    {
        posicioness[i] = posiciones[i];

    }
    else
     { posicioness[i] = posiciones1[i - 24];}
    
}}}
void loop(float* posicioness)
{
    for (int i = 0; i < 48; i++)
{
    if (i < 24)
    {
        posicioness[i] = posiciones[i];

    }
    else
     { posicioness[i] = posiciones1[i - 24];}
    }
   }
   
};

//