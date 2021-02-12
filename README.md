# balanceamento

O termo balanceamento tem como significado a distribuição uniforme de forças que atuam sobre
um corpo. O exemplo clássico disso é a força da gravidade que atua sobre o corpo humano e que
age de maneira a proporcionar o equilíbrio que torna possível os nossos movimentos. Qualquer
tropeção provoca o desequilíbrio dessas forças e tem como conseqüência resultado desagradável.
Esse princípio é aplicado em diversas situações que muitas vezes passam despercebidas. Como
exemplo pode-se citar o serviço de balanceamento de rodas que deve ser feito periodicamente nos
automóveis. Essa providência tem por objetivo a aplicação de pesos em pontos diversos da roda
proporcionando equilíbrio de movimento e eliminando trepidações no conjunto de dirigibilidade do
veículo.
Num sistema de processamento distribuído o balanceamento de carga é uma providência necessária
para garantir uma distribuição uniforme das requisições de processamento entre todos os nós da
rede, bem como redistribuir essa carga entre os demais nós, caso um deles se torne inoperante.
O balanceamento também se aplica a dados, nas situações em que uma coleção de dados de mesma
natureza está armazenada em dois ou mais repositórios distintos e se torna necessário armazená-los
em um único repositório. Uma das vantagens mais expressivas dessa providência é a eliminação de
possíveis redundâncias, isto é, a eliminação de dados duplicados.
De maneira sucinta, o balanceamento de dados junta em um único repositório os dados registrados
em diferentes repositórios, assegurando que todos os dados existentes no diversos repositórios
sejam transportados para o repositório único, bem como o registro de apenas um exemplar dos
dados redundantes, de preferência aquele mais recente.
Dadas essas premissas, escrever um programa em linguagem C com as seguintes
especificações:
 Definir pelo menos dois vetores para armazenamento de valores numéricos inteiros;
 Os vetores definidos deverão ter quantidades de elementos distintos;
 Os conteúdos a serem carregados nos dois vetores deverão ser gerados aleatoriamente;
 Os dados provenientes dos vetores de entrada deverão ser transportados para um
único vetor resultante;
 O vetor resultante deverá ser alocado dinamicamente;
 Possíveis dados redundantes provenientes dos vetores de entrada deverão ser
registrados uma única vez no vetor resultante, eliminando-se a redundância.

FACULDADE POLITÉCNICA DE CAMPINAS
Rua Luiz Otávio, 1281 – Pq. Sta. Cândida – Campinas – SP – 13.087-018

http://www.policamp.edu.br – (19) 3756-2300

O programa deverá exibir:

 Informações de controle que permitam a verificação de que todos os dados
provenientes dos vetores de entrada foram transportados para o vetor
resultante;
 Informações que permitam a verificação da eliminação de dados redundantes.

Notas explicativas:
Nesta situação os vetores de entrada deverão estar, necessariamente, ordenados
O processo de balanceamento, essencialmente, compara conteúdos, elemento a elemento, entre
os vetores de entrada
Caso o conteúdo de um dos vetores de entrada seja menor do que o conteúdo do elemento do
outro vetor então este deverá ser transportado para um elemento no vetor resultante, se ambos os
vetores de entrada estiverem ordenados em ordem ascendente. Caso os conteúdos sejam iguais
então apenas um deles deve ser transportado para um elemento no vetor resultante.
Para cada movimentação feita, o indicador de posição associado aos vetores deverá ser
incrementado de uma unidade.
O processo deverá se repetir até que os vetores de entrada tenham sido totalmente percorridos e
todos os seus conteúdos tenham sido transportados para o vetor resultante.
