# desafio_ribeiraopreto2024
Etapa teste do processo seletivo (Estágio)

📚 Processo [Target](https://www.targetsistemas.com.br/sobre)

Consiste na resolução de lógica e algorítmica de algumas questões, que neste repositório estão no arquivo: desafio_ribeirao_preto_2024 e neste arquivo README.md.

Como a proposta é não usar de funções prontas, decidi por resolve-los utilizando da linguagem C.

### ✏Resolução questão 3, letra f) 2, 10, 12, 16, 17, 18, 19, ? <br>

Seguindo a sequência abaixo:<br>
 **2**    ~~10~~  _12_    **16    17**    _18_    ~~19~~   **?** <br>
 
 - Temos 8 valores na sequência acima
 - Supondo que se diminua os valores do centro para extremidade temos:<br>
 **17**-**16** = 1<br>
 _18_-_12_= 4<br>
 ~~19~~-~~10~~ = 9 <br>
 **?** - **2** = ? <br>
 - Partindo do raciocício da soma para gerar o proximo resultado a diferênca entre eles são respectivamente: 3, 5 , **?**.
 - Supondo que é a sequência ímpar dos números primos o próximo valor é 7, temos:<br>
 1<br> diferença de 1 e 4 = 3<br>
 4<br> diferença de 4 e 9 = 5<br>
 9<br> o próximo valor seria 9 + 7 (supondo a sequência de números primos), resultando em:<br>
16
 - Substituindo: <br>
 ? - 2 = 16<br>
? = 16 + 2 <br>
? = 18

**Resposta: 18**

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
|Entraria na sala B , caso a lâmpada esteja quente B = X1, automaticamente C = X3 e vice-versa se fria o contrário.<br>|Entraria na sala B, se estivesse acesa a X2 = B e X3 = C, caso apagada X2 = C e X3 = B|Se sala B estiver ligada e fria B = X2, caso apagada  C = X1 e se quente B = X1 e C = X2.|

