# Simulador de Viagem e Consumo de Combustível - Avaliação Subjetiva

# Sistema de Simulação de Consumo Veicular

## 1. Visão Geral do Projeto
Este projeto apresenta um Sistema de Consumo Veicular desenvolvido em C++. O objetivo é calcular e validar a quantidade de combustível necessária para um deslocamento, considerando como a velocidade média impacta a autonomia do veículo. A aplicação simula cenários de viagem, processando variáveis como distância, tempo, capacidade do tanque e custos de abastecimento para auxiliar no planejamento eficiente de trajetos.

A equipe responsável pelo desenvolvimento é composta por: Airton Silva Ferreira, Harisson Aguiar Elias, Luan Expedito do Nascimento Ribeiro, Luís Gustavo da Silva Oliveira, Nicolas Lima Almeida, Vitória Carneiro Bezerra e Vitória Prudêncio.

## 2. Evidências de Gestão e Documentação

Para atender aos requisitos de entrega, os seguintes artefatos de gestão e documentação foram produzidos:

* **Gestão do Projeto (Trello):** O planejamento e acompanhamento das tarefas foram realizados no Trello.
    * **[Acesse o Quadro do Trello aqui](https://trello.com/invite/b/68e4-6b4030ddabd091467d08/ATTIf485ea6a3bf0c2f3b1d261f26a6d3f98F6A52C8A/plano-de-acao-projeto-do-sandro) ou (https://drive.google.com/file/d/1mZxx3cNbuKR8poJp11SqnjJfT2OPhb7N/view?usp=sharing)**

* **Organograma e Fluxograma (Lucidchart):** A estrutura da equipe e o fluxo lógico do sistema estão detalhados no documento abaixo.
    * **[Acesse o Organograma](https://lucid.app/lucidchart/865373ca-b284-40b2-86ef-6cea69f871bd/edit?viewport_loc=-405%2C237%2C2392%2C1173%2CL6LdhCrfnsHj&invitationId=inv_58fb2498-b660-4fb6-a215-7f4c46f3fc43) e o Fluxograma aqui(https://drive.google.com/file/d/18cPPFL0FAsa-bBKQx3O8tfT3e6nJC8fo/view?usp=sharing)**

* **Documentação Completa do Projeto (Google Drive):** Toda a documentação do projeto está centralizada no Google Drive.
    * **[Documento de Requisitos](https://drive.google.com/file/d/1q-qaULdTsIrWsw-8lecjkt0PvzNnZZv3/view?usp=sharing)**
    * **[Relatório Técnico de Simulação](https://drive.google.com/file/d/1QP6TvlsBGFZqsYpySZMZiMeeplJxLw6z/view?usp=sharing)**
    * **[Manual do Usuário](https://drive.google.com/file/d/1zOp2jPrWjlV-54cZMxPe8tyv3c3M_9Ns/view?usp=sharing)**
    * **[Guia de Manutenção](https://drive.google.com/file/d/1UQEeCbFhOgoHktkJliKqdw0j9JjfGl27/view?usp=sharing)**

## 3. Estrutura do Código-Fonte
O código-fonte, desenvolvido em C++, está estruturado para garantir clareza e manutenibilidade, seguindo o fluxo: Entrada de Dados > Ajuste de Autonomia > Cálculos > Apresentação dos Resultados. As principais variáveis de entrada são `avg_speed`, `base_fuel_efficiency`, `fuel_tank`, `refuel_amount`, `distance` e `fuel_price`.

## 4. Resultados da Simulação
Uma simulação foi executada com uma velocidade média de 80 km/h e uma distância de 100 km. Os resultados indicaram um tempo de viagem de 1.25 horas e um consumo de 6.67 litros de combustível.

Este programa em **C++** simula uma viagem de carro com base nas informações inseridas pelo usuário.

Ele calcula:

- O **tempo estimado** da viagem (distância ÷ velocidade média)  
- O **combustível necessário** para percorrer o trajeto  
- O **custo do abastecimento** realizado  
- Se é possível **chegar no tempo máximo de 2,5 horas**  
- Se o combustível atual é **suficiente ou não**  
- Quantas **paradas para reabastecer** seriam necessárias  
- E aplica uma **penalidade de 10%** no consumo caso a velocidade ultrapasse **100 km/h**

O programa usa funções para organizar os cálculos e exibe no final um resumo com os resultados da viagem.
