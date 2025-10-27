README – Desafio Xadrez: Movimentos Complexos
♟️ Desafio Final – Movimentos Complexos do Xadrez
Este projeto foi desenvolvido como parte do desafio final de programação em C, com o objetivo de aplicar recursividade, loops aninhados e controle de fluxo (break e continue) para simular os movimentos das principais peças do xadrez.
🎯 Objetivo do Projeto
O programa permite que o usuário interaja com um menu, escolhendo qual peça deseja mover no tabuleiro.
Cada peça possui uma lógica de movimento diferente, utilizando estruturas de repetição e funções recursivas.
🧠 Conceitos Utilizados
🔁 Recursividade – usada para simular movimentos contínuos da Torre, Bispo e Rainha.
🧩 Loops aninhados – aplicados no movimento do Bispo e do Cavalo.
⚙️ Controle de fluxo – uso de break e continue para controlar o comportamento dos loops.
💬 Entrada e saída de dados – interação com o usuário usando scanf e printf.
♜ Peças Implementadas
Peça
Técnica Principal
Descrição do Movimento
Torre
Recursividade simples
Move-se horizontalmente para a direita.
Bispo
Recursividade + loops aninhados
Move-se em diagonal (superior direita).
Rainha
Recursividade
Move-se verticalmente para cima.
Cavalo
Loops aninhados + break e continue
Move-se em “L”: duas casas para cima e uma para a direita.
💻 Como Executar
Compile o programa:
Copiar código
Bash
gcc xadrez.c -o xadrez
Execute o programa:
Copiar código
Bash
./xadrez
Escolha a peça que deseja mover:
Copiar código

===== SIMULADOR DE MOVIMENTOS DE XADREZ =====
1 - Torre
2 - Bispo
3 - Rainha
4 - Cavalo
Veja no terminal o passo a passo dos movimentos da peça escolhida.
🧩 Exemplo de Saída
Copiar código

===== Movimento da TORRE =====
Direita
Direita
Direita

===== Movimento do BISPO =====
Diagonal superior direita (Passo 1,1)
Diagonal superior direita (Passo 1,2)
Diagonal superior direita (Passo 2,1)
Diagonal superior direita (Passo 2,2)

===== Movimento da RAINHA =====
Cima
Cima
Cima

===== Movimento do CAVALO =====
Cima
Cima
Direita
Total de movimentos do Cavalo: 2
👩‍💻 Autora
Lívia Marques Lacerda
📚 Curso: Análise e Desenvolvimento de Sistemas
💡 Projeto: Desafio Final – Movimentos Complexos do Xadrez
🗓️ Ano: 2025