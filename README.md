# push_swap
O push_swap é um algoritmo de ordenação que consiste em organizar uma pilha (stack) de números inteiros, do menor para o maior de cima para baixo. O desafio aqui foi utilizar apenas duas pilhas e um conjunto limitado de operações para organizar os números na menor quantidade de instruções possível.

### Como compilar?
Utilizando o Makefile você pode criar o arquivo executável *push_swap*
```
make
```

### Como executar?
Rode o executável passando como argumento os números inteiros para serem organizados conforme exemplo abaixo:
```
./push_swap 5 3 4 1 2
```

A saída do programa será o conjunto de instruções utilizadas para organizar esta pilha. No caso do exemplo acima, a saída provavelmente será:
```
rra
rra
pb
pb
ra
pa
pa
```

| Instrução | Descrição                                                               |
| --------- | ------------------------------------------------------------------------|
| sa        | alterna os dois primeiros elementos no topo da stack a |
| sb        | alterna os dois primeiros elementos no topo da stack b |
| ss        | executa sa e sb ao mesmo tempo |
| pa        | transfere o primeiro elemento do topo da stack b para o topo da stack a |
| pb        | transfere o primeiro elemento do topo da stack a para o topo da stack b |
| ra        | passa o elemento do topo da stack a para o final da stack e todos os outros elementos sobem uma posição |
| rb        | passa o elemento do topo da stack b para o final da stack e todos os outros elementos sobem uma posição |
| rr        | executa ra e rb ao mesmo tempo |
| rra       | passa o elemento do final da stack a para o topo da stack e todos os outros elementos descem uma posição |
| rrb       | passa o elemento do final da stack b para o topo da stack e todos os outros elementos descem uma posição |
| rrr       | executa rra e rrb ao mesmo tempo |

### Repositórios úteis

[Push_Swap Tester](https://github.com/laisarena/push_swap_tester) by [Lais Arena](https://github.com/laisarena)

[Push_Swap Visualizer](https://github.com/o-reo/push_swap_visualizer) by [Emmanuel Ruaud](https://github.com/o-reo)


#### More about School 42 you can find here: https://en.wikipedia.org/wiki/42_(school)
