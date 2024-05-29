Heitor Lemes Caldas - SC303769X
Gustavo Gomes Contiero - SC3037754

Projeto Fila de Banco
Descrição do Projeto
Este projeto simula uma fila de atendimento em um banco, conforme os requisitos especificados no trabalho prático da disciplina de Estrutura de Dados. O banco possui duas filas de clientes: uma para o público geral e outra para clientes prioritários. O atendimento dos caixas do banco segue uma lógica específica para a chamada dos clientes das filas.

Estrutura do Projeto
O projeto é composto pelos seguintes arquivos:

queue.h: Cabeçalho que define a estrutura da fila e os protótipos das funções.
queue.c: Implementação das funções para a TAD Fila.
main.c: Programa principal que simula a fila do banco e gerencia o atendimento dos clientes.
Makefile: Script para compilar o projeto utilizando o make.
Funcionalidades
TAD Fila (queue.h e queue.c):

Estrutura da fila implementada como um array estático circular com capacidade para 20 elementos.
Funções para criar fila (createQueue), inserir elemento (in), remover elemento (out) e imprimir fila (printer).
Programa Principal (main.c):

Gerenciamento das filas de clientes gerais e prioritários.
Implementação da lógica de atendimento, respeitando a regra de não chamar mais de três clientes prioritários consecutivamente.
Leitura das entradas do usuário para simular a chegada de clientes e a liberação de caixas.