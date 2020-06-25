#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"

typedef struct{
    int r;
    int g;
    int b;
}RGB;

typedef struct{
    int x;
    int y;
    RGB cor;
}Vertice;


// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Declare aqui as funções que você implementar <<<
//
Vertice ponto1;
Vertice ponto2;
Vertice ponto3;
void putPixel(Vertice ponto1);
void drawPixel(Vertice ponto1, Vertice ponto2);
void drawTriangle(Vertice ponto1, Vertice ponto2, Vertice ponto3);

#endif  // MYGL_H