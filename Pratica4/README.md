# icg
Repositório do material da disciplina de Introdução à Computação Gráfica do CI/UFPB.

## Descrição da Atividade
A atividade realizada teve como objetivo a aplicação e o teste de dois modelos de reflexão, o modelo de reflexão difuso e o modelo de reflexão especular.

## Estratégias Adotadas
Após a aplicação dos cálculos necessários, foram realizados vários testes para descobrir o funcionamento e possíveis erros no código e na correção dos cálculos.

## Exercícios
   - Exercício 1: No primeiro exercício foi aplicado o **Modelo de Reflexão Difuso**, em que nos foi passado os cálculos dos vetores L(aponta para a fonte de luz) e N(vetor normal). E tinhamos a tarefa de aplicar na iluminação final a reflexão difusa, multiplicando produto interno entre L e N pelo coeficiente de refletância difusa, depois multiplicando pela intensidade da luz pontual e por fim, somando a luz ambiente. 

   A pouca dificuldade que tivemos foi de encontrar uma função para calcular o produto interno entre os vetores. Tivemos o seguinte resultado:
   ![exercicio1](https://github.com/matheusces/atividade1ICG/blob/master/atividade1_4.png)



   -Exercício 2: No segundo exercício foi aplicado além do modelo de reflexão difuso, o **Modelo de Reflexão Especular**, em que nos foi passado os cálculos do vetores R(reflexão da luz) e o V(vetor da câmera). E tinhamos que aplicar a reflexão especular na iluminação final, calculando a 64º potência do produto interno entre R e V e multiplicando pelo coeficiente de refletância especular, depois acrescentando com o cálculo anterior antes de multiplicar pela intensidade da luz pontual e por fim, acrescentando o resultado na luz ambiente.

   A dificuldade encontrada nesse exercício foi pesquisar a função de potência e controlar o valor do produto interno entre R e V para que não seja menor que zero. Tivemos como resultado:
   ![exercicio1](https://github.com/matheusces/atividade1ICG/blob/master/atividade2_4.png)


## Referências
    Slides disponibilizados pelo professor
    https://www.shaderific.com/glsl-functions
