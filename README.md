# desafio_ribeiraopreto2024
Etapa teste do processo seletivo (Estágio)

📚 Processo [Target](https://www.targetsistemas.com.br/sobre)

Consiste na resolução lógica e algorítmica de algumas questões, que neste repositório estão no arquivo: desafio_ribeirao_preto_2024 e neste arquivo README.md.

Como a proposta é não usar de funções prontas, decidi por resolve-los utilizando da linguagem C.

### ✏ Resolução questão 4:

>Supondo que são 3 salas: A, B e C<br>
>Supondo interruptores X1, X2 e X3

- **Ligaria X1 e esperaria um tempo significativo...**
- **Apagaria X1 e ligaria X2**
- **Entraria na sala A...**
- **Lâmpada  ligada X2 = A**
- **Lâmpada quente e apagada X1 = A**
- **Lâmpada apagada e fria, então A != X1 e X2 então X3 = A**

Dependendo do resultado, caso:<br>

|Lâmpada Ligada<br>(X2 = A)|Lâmpada apagada e quente<br>(X1 = A)|Lâmpada apagada e fria<br>(X3 = A)|
|-----|----|----|
|Entraria na sala B , caso a lâmpada esteja quente B = X1, automaticamente C = X3 e vice-versa se fria o contrário.<br>|Entraria na sala B, se estivesse acesa a X2 = B e X3 = C, caso apagada X2 = C e X3 = B|Se sala B estiver ligada e fria B = X2, C = X1 e se apagada e quente B = X1, C = X2.|

