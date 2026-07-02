# Régua Digital com Arduino

Projeto de uma régua digital de alta precisão utilizando sensor ultrassônico e display gráfico, estruturado para facilitar a manutenção e expansão.

## Estrutura do Projeto
- `regua-digital.ino`: Lógica principal e loop de execução.
- `display.cpp / .h`: Módulo responsável pela renderização visual.
- `config.h`: Definição centralizada de pinos e parâmetros de hardware.
- `diagrama.jpg`: Diagrama de conexão do circuito.

## Como utilizar
1. Conecte o sensor conforme o diagrama `diagrama.jpg`.
2. Certifique-se de ter as bibliotecas `U8glib` e `Ultrasonic` instaladas no Arduino IDE.
3. Compile e carregue o código `regua-digital.ino` para sua placa.

## Autor
Jose Henrique - Desenvolvedor de Sistemas Embarcados
