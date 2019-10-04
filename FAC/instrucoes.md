# Instruções de Assembly MIPS

- add -> Adição

```
add $t0, $s1, Ss2
```
Realizou a soma entre *$s1* e *$S2* e armazenou em *$t0*.

- sub -> Subtração

```
sub $t0, $s1, Ss2
```
Realizou a subtração entre *$s1* e *$S2* e armazenou em *$t0*.

- mul -> Multiplicação

```
mul $t0, $s1, Ss2
```
Realizou a multiplicação entre *$s1* e *$S2* e armazenou em *$t0*.

- lb -> Load byte

```
lb $t0, X($a0)
```
O Load byte carrega um byte de dado da memória principal para o registrador. Onde *X* é o número do endereço de memória [$a0 + X] onde está a informação a ser armazenada em *$t0*

- lw -> Load word

```
lw $t0, 20($a0)
```
O Load word carrega uma palavra de dado da memória principal para o registrador. Onde *20* é o número do endereço de memória [$s0 + 20] onde está a informação a ser armazenada em *$t0*. No exemplo assim, 20 é como se fosse, o quinto elemento de um vetor. Onde cada posição é uma palavra de 4 bytes.

- sll -> Shift left logical
```
sll $t0, $t2, X
```
O Shift left logical (Shift lógico a esquerda), transporta todos os elementos do número binário *$t2* e armazena ele em *$t0*.

- srl -> Shift right logical
```
srl $t0, $t2, X
```
O Shift right logical (Shift lógico a direita), transporta todos os elementos do número binário *$t2* e armazena ele em *$t0*.

- and -> **e** lógico bit a bit
```
and $t0, $t1, $t2
```
A função é o **e** lógico bit a bit, ele realiza a operação em *$t1* e *$t2*. E armazena o resultado em *$t0*.

- or -> **ou** lógico bit a bit
```
or $t0, $t1, $t2
```
A função é o **ou** lógico bit a bit, ele realiza a operação em *$t1* e *$t2*. E armazena o resultado em *$t0*.

- nor -> **NOT** lógico bit a bit
```
nor $t0, $t1, $t2
```
A função é o **NOT** lógico bit a bit, ele realiza a operação em *$t1* e *$t2*. E armazena o resultado em *$t0*, o assembly MIPS realiza a operação **nor**, para manter a estrutura da linguagem. Para negar um elemento se usa:
```
nor $t0, $t1, $zero
```
Desta forma, o sinal de *$t1* será invertido.
