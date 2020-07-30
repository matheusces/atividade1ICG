# icg
Repositório do material da disciplina de Introdução à Computação Gráfica do CI/UFPB.

## Descrição da Atividade
A atividade realizada teve como objetivo aplicar 5 diferentes transformações em dois triângulos rastezirados previamente pelo professor. Os exercícios que compõem as 4 primeiras tranformações são: exercício 1, aplicar uma transformação de escala; exercício 2, aplicar uma transformação de translação; exercício 3, aplicar uma   projeção pespectiva; exercício 4, mudar a posição da câmera utilizando a mesma projeção pespectiva usada no exercício 3. Além disso, no exercício 5 foi utilizado três matrizes com valores diferentes dos anteriores para compor uma nova imagem.

## Estratégias adotadas
Após terminados os cálculos necessários, foram feitos vários testes para saber o local onde cada valor indicado nos exercícios deveriam ser posicionados, até serem encontradas as posições corretas.

## Exercícios
   -Exercício 1(Escala): Desenhanmos em tela um objeto na posição correspondente a suas coordenadas originais, em seguida usamos as coordenadas disponiveis para alterar a escala     do obejto ao longo dos eixos x e y. Então temos a **Matriz Model** e o print: 

    [0.33f, 0.0f, 0.0f, 0.0f,]
    [0.0f, 1.5f, 0.0f, 0.0f,]
    [0.0f, 0.0f, 1.0f, 0.0f,]
    [0.0f, 0.0f, 0.0f, 1.0f]
   ![exercicio1](https://github.com/matheusces/atividade1ICG/blob/master/exer1Print.png)

   -Exercício 2 (Translação ): Após o desenho do objeto na tela, utilizamos dados fornecidos para que movessemos os trinângulos ao longo dos eixo x. Então temos a **Matriz           Model** e o print:

    [1.0f, 0.0f, 0.0f, 0.0f,]
    [0.0f, 1.0f, 0.0f, 0.0f,]
    [0.0f, 0.0f, 1.0f, 0.0f,]
    [1.0f, 0.0f, 0.0f, 1.0f]
   ![exercicio2](https://github.com/matheusces/atividade1ICG/blob/master/exer2Print.png)

   -Exercício 3 (Projeção Perspectiva): Dada a matriz estudada em sala de aula e o valor correspondente de d, ajustamos a posição correta dos valores e montamos a matriz. Então     temos a **Matriz Projection** e o print:

    [1.0f, 0.0f, 0.0f, 0.0f,]
    [0.0f, 1.0f, 0.0f, 0.0f,]
    [0.0f, 0.0f, 1.0f, -2.0f,]
    [0.0f, 0.0f, 0.5f, 1.0f]
   ![exercicio3](https://github.com/matheusces/atividade1ICG/blob/master/exer3Print.png)

   -Exercício 4 (Posição da Câmera): Primeiramente formamos a matriz de translação T com os valores (x,y,z) do ponto, depois formamos cada elemento que compõe a matriz da base       da câmera B utilizando para Zc = -d/|d|, sendo d a distância para o ponto em que a câmera aponta, para Xc = U x Zc/|U x Zc|, sendo U o vetor up da câmera e por fim, para Yc     = Zc x Xc/|Zc x Xc|. Depois disso, utilizamos a matriz B transposta e multiplicamos pela matriz T. Tendo como resultado a **Matriz View** e o print.      

    [0.86f, 0.1f, -0.25f, 0.0f,]
    [0.1f, 0.88f, 0.25f, 0.0f,]
    [0.26f, -0.3f, 0.62f, 0.0f,]
    [0.0f, 0.001f, -0.205f, 1.0f]
![exercicio4](https://github.com/matheusces/atividade1ICG/blob/master/exer4Print.png)

   -Exercício 5 (Transformações Livres): Nessa atividade fizemos 3 transformações diferentes das apresentadas anteriormente nas matrizes: **Model**, **View** e **Projection**.       Tendo como resultado:

    [1.0f, 0.0f, 0.0f, 0.0f,]
    [0.5f, 1.0f, 0.0f, 0.0f,]
    [0.0f, 0.0f, 1.0f, 0.0f,]
    [0.2f, 0.18f, 0.0f, 1.0f]

    [0.86f, 0.1f, -0.23f, 0.0f,]
    [0.1f, 0.89f, 0.24f, 0.0f,]
    [0.26f, -0.29f, 0.62f, 0.0f,]
    [0.0f, 0.0f, -0.20f, 1.0f]

    [1.0f, 0.0f, 0.0f, 0.0f,]
    [0.0f, 1.0f, 0.0f, 0.0f,]
    [0.0f, 0.0f, 1.0f, -1.0f,]
    [0.0f, 0.4f, 0.25f, 1.0f]
   ![exercicio5](https://github.com/matheusces/atividade1ICG/blob/master/exer5Print.png)
   
## Referências
   - Slides disponibilizados pelo professor.
   - Aulas gravadas.
