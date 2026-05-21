# 💻 Projetos com Arduino

Bem-vindo a esta coleção de projetos criados com Arduino. O repositório documenta ideias e testes práticos de hardware e software, funcionando como um arquivo vivo de desenvolvimento e prototipagem.

Cada projeto é independente e foi construído com foco em testar diferentes componentes, lógicas de controle e interações físicas.

## 📂 Índice de Projetos

Os projetos estão organizados em suas respectivas pastas. Dentro de cada uma, você encontrará o código principal (`.ino`) e a documentação sobre como o circuito deve ser montado.

*   [**01 - Seletor de Cores Digital (LED RGB + Encoder)**](./01_seletor_cores)
    *   *Sistema de seleção e estado utilizando um encoder rotativo (apenas pinos SW e CLK) para controlar os canais individuais de um módulo LED RGB.*
*   [**02 - Tocar Música com Buzzer**](./02_musica_buzzer) *(Exemplo de como adicionar)*
    *   *Uso de variáveis de tempo, frequências sonoras e a função `tone()` para reproduzir melodias.*
*   *(Mais projetos serão adicionados)*

## 🚀 Como testar os códigos

1.  Navegue até a pasta do projeto desejado.
2.  Consulte o arquivo de leitura interno da pasta para ver as definições de **pinagem** (quais pinos usar para sensores/saídas).
3.  Faça o download ou copie o conteúdo do arquivo `.ino`.
4.  Abra na IDE do Arduino, conecte a sua placa, selecione a porta correta e faça o upload (`Ctrl + U`).

## 🛠️ Notas de Configuração Padrão

*   **Pinos PULL-UP:** Vários projetos usam o recurso de `INPUT_PULLUP` nativo do microcontrolador para evitar a necessidade de resistores físicos em botões e interruptores que fecham circuito com o GND.
*   **Velocidade Serial:** Quando aplicável, a comunicação serial nos códigos está configurada por padrão para `9600 baud`.
