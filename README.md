# Push Swap - 42 School

## Descrição

O **Push Swap** é um projeto desenvolvido como parte do currículo da **42 School**. O objetivo do projeto é implementar um algoritmo de ordenação eficiente para uma pilha de números, utilizando apenas operações específicas. O projeto visa testar e aprimorar as habilidades dos alunos em manipulação de pilhas e algoritmos de ordenação.

Este repositório contém uma implementação do **Push Swap** utilizando o algoritmo de **Radix Binário**, uma técnica eficiente para ordenar números em uma pilha com a complexidade de tempo reduzida.

## Algoritmo

O algoritmo implementado utiliza **Radix Binário** para ordenar os números na pilha. O Radix Binário é uma abordagem eficiente baseada em bits que permite ordenar os números sem a necessidade de comparações diretas. Ele aproveita a representação binária dos números para ordenar os elementos em múltiplas passagens.

### Como Funciona

1. **Radix Binário**:
   - O algoritmo analisa os números bit a bit, do bit menos significativo para o mais significativo.
   - A cada passagem, ele classifica os números de acordo com o valor do bit atual.
   - O processo é repetido até que todos os bits dos números tenham sido processados.

2. **Operações Permitidas**:
   - O projeto permite a utilização de operações específicas para manipulação das pilhas:
     - **sa**: Troca os dois primeiros elementos da pilha A.
     - **sb**: Troca os dois primeiros elementos da pilha B.
     - **pa**: Move o primeiro elemento da pilha B para a pilha A.
     - **pb**: Move o primeiro elemento da pilha A para a pilha B.
     - **ra**: Rotaciona a pilha A para cima.
     - **rb**: Rotaciona a pilha B para cima.
     - **rra**: Rotaciona a pilha A para baixo.
     - **rrb**: Rotaciona a pilha B para baixo.

## Como Usar

### Compilação e Execução

1. Clone o repositório:

   ```bash
   git clone https://github.com/seu-usuario/push_swap.git
   cd push_swap
