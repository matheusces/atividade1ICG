#include "mygl.h"
#include "stdio.h"
#include<stdlib.h>//biblioteca a qual a função abs pertence

//
// >>> Defina aqui as funções que você implementar <<< 
//

void linhasInfe(Vertice ponto1, Vertice ponto2){
    int dx = ponto2.x - ponto1.x;
    int dy = ponto2.y - ponto1.y;
    int yi = 1;
    if(dy < 0){
        yi = -1;
        dy = -dy;
    }

    int decision = 2*dy - dx;

    float incrementR = (ponto2.cor.r - ponto1.cor.r) / dx;
    float incrementG = (ponto2.cor.g - ponto1.cor.g) / dx;
    float incrementB = (ponto2.cor.b - ponto1.cor.b) / dx;

    for(int i=ponto1.x; i<=ponto2.x; i++){
        ponto1.x = i;
        ponto1.cor.r += incrementR;
        ponto1.cor.g += incrementG;
        ponto1.cor.b += incrementB;
        putPixel(ponto1);
        
        if(decision > 0){
            ponto1.y += yi;
            decision = decision - 2*dx;
        }
        decision = decision + 2*dy;
    }
}

void linhasSupe(Vertice ponto1, Vertice ponto2){
    int dx = ponto2.x - ponto1.x;
    int dy = ponto2.y - ponto1.y;
    int xi = 1;

    if(dx < 0){
        xi = -1;
        dx = -dx;
    }

    int decision = 2*dx - dy;

    float incrementR = (ponto2.cor.r - ponto1.cor.r) / dy;
    float incrementG = (ponto2.cor.g - ponto1.cor.g) / dy;
    float incrementB = (ponto2.cor.b - ponto1.cor.b) / dy;

    for(int i=ponto1.y; i<=ponto2.y; i++){
        ponto1.y = i;
        ponto1.cor.r += incrementR;
        ponto1.cor.g += incrementG;
        ponto1.cor.b += incrementB;
        putPixel(ponto1);

        if(decision > 0){
            ponto1.x += xi;
            decision = decision - 2*dy;
        }
        decision = decision + 2*dx;

    }
}

void putPixel(Vertice ponto){
    int offset = (int) (ponto.y*4 + ponto.x*IMAGE_WIDTH*4);

    fb_ptr[offset] = ponto.cor.r; 
    fb_ptr[offset + 1] = ponto.cor.g; 
    fb_ptr[offset + 2] = ponto.cor.b; 
    fb_ptr[offset + 3] = 255; 
}

void drawLine(Vertice ponto1, Vertice ponto2){
    if(abs(ponto2.y - ponto1.y) < abs(ponto2.x - ponto1.x) ){
        if(ponto1.x > ponto2.x){
            linhasInfe(ponto2, ponto1);
        }
        else{
            linhasInfe(ponto1, ponto2);
        }
    }
    else{
        if(ponto1.y > ponto2.y){
            linhasSupe(ponto2, ponto1);
        }
            
        else{
            linhasSupe(ponto1, ponto2);
        }
    }
}   

void drawTriangle(Vertice ponto1, Vertice ponto2, Vertice ponto3){
    drawLine(ponto1, ponto2);
    drawLine(ponto2, ponto3);
    drawLine(ponto3, ponto1);
}

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {

    //
    // >>> Chame aqui as funções que você implementou <<<
    //
    
    ponto1.cor.r = 0;
    ponto1.cor.g = 255;
    ponto1.cor.b = 255;
    
    ponto1.x = 4;
    ponto1.y = 0;
    putPixel(ponto1);
    ponto1.x = 4;
    ponto1.y = 1;
    putPixel(ponto1);
    ponto1.x = 4;
    ponto1.y = 2;
    putPixel(ponto1);
    ponto1.x = 4;
    ponto1.y = 3;
    putPixel(ponto1);
    ponto1.x = 4;
    ponto1.y = 4;
    putPixel(ponto1);
    
    ponto1.cor.r = 0;
    ponto1.cor.g = 0;
    ponto1.cor.b = 255;
    
    ponto1.x = 10;
    ponto1.y = 10;
    
    ponto2.cor.r = 255;
    ponto2.cor.g = 0;
    ponto2.cor.b = 0;

    ponto2.x = 100;
    ponto2.y = 100;

    drawLine(ponto1, ponto2);


    ponto1.x = 200;
    ponto1.y = 150;
    ponto1.cor.r = 255;
    ponto1.cor.g = 0;
    ponto1.cor.b = 0;


    ponto2.x = 200;
    ponto2.y = 300;
    ponto2.cor.r = 0;
    ponto2.cor.g = 255;
    ponto2.cor.b = 0;

    ponto3.x = 10;
    ponto3.y = 225;
    ponto3.cor.r = 0;
    ponto3.cor.g = 0;
    ponto3.cor.b = 255;

    drawTriangle(ponto1, ponto2, ponto3);
}
