# icg
Repositório do material da disciplina de Introdução à Computação Gráfica do CI/UFPB.

## Descrição da Atividade
A atividade realizada teve como objetivo rasterizar em tela um triângulo(contendo entre cada vértice a interpolação das cores de um vértice a outro) utilizando o algoritmo de Brasenham, o framework OpenGL e sendo feita com a linguagem C.

O triângulo gerado foi feito com o conjunto de três linhas, cada linha possuindo **N** píxels rasterizados.

## Estratégias adotadas
Foram criadas duas structs, uma para representar uma cor que contém três valores inteiros Red, Green e Blue. E outra para representar um Vértice(ponto), contendo cada coordenadas x, y e uma cor(RGB). Como no exemplo de código a seguir:

```
typedef struct{
    int r;
    int g;
    int b;
}RGB;
```
```
typedef struct{
    int x;
    int y;
    RGB cor;
}Vertice;
```
Foram criadas também as funções: 
  - putPixel. A função putPixel insere direto na memória, e por sua vez na tela, um ponto com as coordenadas do vértice informado por parâmetro e sua respectiva        cor. Não houve dificuldades na criação e execução do método. E como resultado temos a função sendo executada 4 vezes e com cores diferentes:
    ![pontos](https://github.com/matheusces/atividade1ICG/blob/master/4_pontos.png)
    
    
  - drawLine. A função drawLine tem como parâmetros dois vértices e cria uma linha utilizando do algoritmo de Brasenham, ou seja, um ponto médio para decidir qual      o próximo píxel a ser rasterizado. A dificuldade encontrada foi como gerar linhas em todos os octantes existentes, então separamos mais duas funções para          controlar se a linha deve ser rasterizada de acordo com a diferença de x(ponto1 até o ponto2) ou de y(ponto1 até ponto2) independente se a diferença for          menor que zero ou não, ou seja, seu valor absoluto. Tendo sempre o cuidado de saber qual ponto é maior no x(no caso de usar o x como referência) e qual é          maior no y(no caso de usar o y como referência). Como resultado temos:
     ![linha](https://github.com/matheusces/atividade1ICG/blob/master/linha.png)
  
 
  - drawTriangle. Dadas as coordenadas dos vértices, a função drawTriangle se resume em chamar 3 vezes a função drawLine, já que um triângulo é a junção de 3          vértices diferentes. O resultado gerado é:
     ![triângulo](https://github.com/matheusces/atividade1ICG/blob/master/Triangulo.png)
     

## Possíveis melhoras
  - Acreditamos que o método ainda não funciona para 100% dos casos.
  - A interpolação de cores nas linhas não funcionam em linhas grandes demais.

## Referências
  - http://jornalpocinhense.blogspot.com/2016/03/rasterizacao-de-primitivas.html
  - http://fleigfleig.blogspot.com/2016/08/rasterizando-linhas.html
